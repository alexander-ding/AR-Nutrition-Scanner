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
	upcScanAPI("49000036756")
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
	fmt.Println("Search:", query)
	fmt.Println(resp.Status)
	fmt.Println("Result: ", searchResult)
	return searchResult
}

type NutritionJSON struct {
	ItemID                string `json:"item_id"`
	ItemName              string `json:"item_name"`
	BrandID               string `json:"brand_id"`
	ItemDescription       string `json:"item_description"`
	NfIngredientStatement string `json:"nf_ingredient_statement"`
	NfWaterGrams          int    `json:"nf_water_grams"`
	NfCalories            int    `json:"nf_calories"`
	NfCaloriesFromFat     int    `json:"nf_calories_from_fat"`
	NfTotalFat            int    `json:"nf_total_fat"`
	NfSaturatedFat        int    `json:"nf_saturated_fat"`
	NfTransFattyAcid      int    `json:"nf_trans_fatty_acid"`
	NfPolyunsaturatedFat  int    `json:"nf_polyunsaturated_fat"`
	NfCholesterol         int    `json:"nf_cholesterol"`
	NfSodium              int    `json:"nf_sodium"`
	NfTotalCarbohydrate   int    `json:"nf_total_carbohydrate"`
	NfDietaryFiber        int    `json:"nf_dietary_fiber"`
	NfSugars              int    `json:"nf_sugars"`
	NfProtein             int    `json:"nf_protein"`
	NfVitaminA            int    `json:"nf_vitamin_a_dv"`
	NfVitaminC            int    `json:"nf_vitamin_c_dv"`
	NfCalcium             int    `json:"nf_calcium_dv"`
}

func upcScanAPI(upcNumber string) {
	req, err := http.NewRequest("GET", home+"/item", nil)
	check(err)
	req.Header.Set("X-Mashape-Authorization", api_key)

	q := req.URL.Query()
	q.Add("upc", upcNumber)
	req.URL.RawQuery = q.Encode()

	resp, err := apiClient.Do(req)
	check(err)
	defer resp.Body.Close()

	var nutritionResult NutritionJSON
	err = json.NewDecoder(resp.Body).Decode(&nutritionResult)
	check(err)
	fmt.Println("UPCScan:", upcNumber)
	fmt.Println(resp.Status)
	fmt.Println("Result: ", nutritionResult)
}
func check(err error) {
	if err != nil {
		panic(err)
	}
}
