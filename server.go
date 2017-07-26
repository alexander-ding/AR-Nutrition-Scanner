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
	result := searchAPI("cheese")
	fmt.Println(result)
}

type SearchJSON struct {
	TotalHits int           `json:"total_hits"`
	MaxScore  float64       `json:"max_score"`
	Hits      []ProductJSON `json:"hits"`
}

type ProductJSON struct {
	Index  string        `json:"_index"`
	Type   string        `json:"_type"`
	ID     string        `json:"_id"`
	Score  float64       `json:"_score"`
	Fields NutritionJSON `json:"fields"`
}

/*
type FieldJSON struct {
	ItemName   string  `json:"item_name"`
	BrandName  string  `json:"brand_name"`
	NfCalories float64 `json:"nf_calories"`
	NfTotalFat float64 `json:"nf_total_fat"`
}
*/
func searchAPI(query string) SearchJSON {
	req, err := http.NewRequest("GET", home+"/search/"+query, nil)
	check(err)
	req.Header.Set("X-Mashape-Authorization", api_key)

	q := req.URL.Query()
	q.Add("fields", "item_id,item_name,brand_id,item_description,nf_ingredient_state,nf_water_grams,nf_calories,nf_calories_from_fat,nf_total_fat,nf_saturated_fat,nf_trans_fatty_acid,nf_saturated_fat,nf_trans_fatty_acid,nf_polyunsaturated_fat,nf_cholesterol,nf_sodium,nf_total_carbohydrate,nf_dietary_fiber,nf_sugars,nf_protein,nf_vitamin_a_dv,nf_vitamin_c_dv,nf_calcium_dv")
	req.URL.RawQuery = q.Encode()
	fmt.Println(q.Encode())
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
	ItemID                string  `json:"item_id"`
	ItemName              string  `json:"item_name"`
	BrandID               string  `json:"brand_id"`
	ItemDescription       string  `json:"item_description"`
	NfIngredientStatement string  `json:"nf_ingredient_statement"`
	NfWaterGrams          float64 `json:"nf_water_grams"`
	NfCalories            float64 `json:"nf_calories"`
	NfCaloriesFromFat     float64 `json:"nf_calories_from_fat"`
	NfTotalFat            float64 `json:"nf_total_fat"`
	NfSaturatedFat        float64 `json:"nf_saturated_fat"`
	NfTransFattyAcid      float64 `json:"nf_trans_fatty_acid"`
	NfPolyunsaturatedFat  float64 `json:"nf_polyunsaturated_fat"`
	NfCholesterol         float64 `json:"nf_cholesterol"`
	NfSodium              float64 `json:"nf_sodium"`
	NfTotalCarbohydrate   float64 `json:"nf_total_carbohydrate"`
	NfDietaryFiber        float64 `json:"nf_dietary_fiber"`
	NfSugars              float64 `json:"nf_sugars"`
	NfProtein             float64 `json:"nf_protein"`
	NfVitaminA            float64 `json:"nf_vitamin_a_dv"`
	NfVitaminC            float64 `json:"nf_vitamin_c_dv"`
	NfCalcium             float64 `json:"nf_calcium_dv"`
}

func upcScanAPI(upcNumber string) NutritionJSON {
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
	return nutritionResult
}
func check(err error) {
	if err != nil {
		panic(err)
	}
}
