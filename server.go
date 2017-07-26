package main

import (
	"encoding/json"
	"fmt"
	"net/http"
	"time"
)

const (
	api_key = "c0AxLI8FC6mshMcrq5buOTtMbZnhp1Yn22SjsnHQ3za3k7XBQG"
	home    = "https://nutritionix-api.p.mashape.com/v1_1"
)

var apiClient = &http.Client{Timeout: 100 * time.Second}

func main() {
	// for now
	searchAPI("cheese")
}

type SearchJSON struct {
	TotalHits int           `json:"total_hits"`
	MaxScore  float64       `json:"max_score"`
	Hits      []ProductJSON `json:"hits"`
}

type ProductJSON struct {
	Index  string    `json:"_index"`
	Type   string    `json:"_type"`
	ID     string    `json:"id"`
	Score  float64   `json:"_score"`
	Fields FieldJSON `json:"fields"`
}

type FieldJSON struct {
	ItemName   string  `json:"item_name"`
	BrandName  string  `json:"brand_name"`
	NfCalories float64 `json:"nf_calories"`
	NfTotalFat float64 `json:"nf_total_fat"`
}

func searchAPI(query string) SearchJSON {
	req, err := http.NewRequest("GET", home+"/search/"+query, nil)
	check(err)
	req.Header.Set("X-Mashape-Authorization", api_key)

	resp, err := apiClient.Do(req)
	check(err)
	defer resp.Body.Close()

	var searchResult SearchJSON
	err = json.NewDecoder(resp.Body).Decode(&searchResult)
	check(err)
	fmt.Println("Search: ", resp.Status)
	fmt.Println("Result: ", searchResult)
	return searchResult
}
func check(err error) {
	if err != nil {
		panic(err)
	}
}
