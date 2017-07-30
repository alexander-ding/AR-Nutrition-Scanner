package main

import (
	"encoding/json"
	"fmt"
	"net/http"
	"strings"
	"time"
)

const (
	api_key = "c0AxLI8FC6mshMcrq5buOTtMbZnhp1Yn22SjsnHQ3za3k7XBQG"
	home    = "https://nutritionix-api.p.mashape.com/v1_1"
)

var apiClient = &http.Client{Timeout: 100 * time.Second}

type handler struct {
}

func (h *handler) apiServe(w http.ResponseWriter, r *http.Request) {
	url := strings.Split(r.URL.Path[1:], "/")
	fmt.Println(url[1])
	switch url[1] {
	case "shareModel":
	}
}
func (h *handler) ServeHTTP(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, `{
  "old_api_id": null,
  "item_id": "51c3d78797c3e6d8d3b546cf",
  "item_name": "Cola, Cherry",
  "leg_loc_id": null,
  "brand_id": "51db3801176fe9790a89ae0b",
  "brand_name": "Coke",
  "item_description": "Cherry",
  "updated_at": null,
  "nf_ingredient_statement": "Carbonated Water, High Fructose Corn Syrup and/or Sucrose, Caramel Color, Phosphoric Acid, Natural Flavors, Caffeine.",
  "nf_water_grams": null,
"nf_calories": 113.12,
"nf_calories_from_fat": 83.94,
"nf_total_fat": 9.33,
"nf_saturated_fat": 5.28,
"nf_trans_fatty_acid": 0.26,
"nf_polyunsaturated_fat": 0.4,
"nf_cholesterol": 27.72,
"nf_sodium": 182.84,
"nf_total_carbohydrate": 0.87,
"nf_dietary_fiber": 0,
"nf_sugars": 24.3,
"nf_protein": 6.4,
"nf_vitamin_a_dv": 6.96,
"nf_vitamin_c_dv": 0,
"nf_calcium_dv": 19.88,
"nf_iron_dv": 0,
  "nf_refuse_pct": null,
  "nf_servings_per_container": 6,
  "nf_serving_size_qty": 8,
  "nf_serving_size_unit": "fl oz",
  "nf_serving_weight_grams": null,
  "allergen_contains_milk": null,
  "allergen_contains_eggs": null,
  "allergen_contains_fish": null,
  "allergen_contains_shellfish": null,
  "allergen_contains_tree_nuts": null,
  "allergen_contains_peanuts": null,
  "allergen_contains_wheat": null,
  "allergen_contains_soybeans": null,
  "allergen_contains_gluten": null,
  "usda_fields": null
}`)
}
func main() {
	// for now
	serverHandler := handler{}
	http.ListenAndServe(":1234", &serverHandler)
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
	NfServingSizeQty      float64 `json:"nf_serving_size_qty"`
	NfServingSizeUnit     string  `json:"nf_serving_size_unit"`
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
