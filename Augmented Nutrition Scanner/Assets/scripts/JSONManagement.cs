using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JSONManagement : MonoBehaviour {
	public string upc;
	public NutritionJSON nutrition;
	public PopUp PopUp;
	// Use this for initialization
	void Start () {
		GetNutrition();
	}
	void GetNutrition() {
		var headers = new Dictionary<string, string>{};
		headers.Add ("X-Mashape-Authorization", Unique.ApiKey);
		WWW www = new WWW (Unique.Home + "/item?upc=" + upc, null, headers);
        
        StartCoroutine (WaitForRequest (www));
	}
	IEnumerator WaitForRequest(WWW www) {
        EnablePopUpFramework();
        yield return www;
		if (www.error == "") {
            EnablePopUpFramework();
            nutrition = JsonUtility.FromJson<NutritionJSON> (www.text);
            SetFrameWork();
            
        } else {
			Debug.Log ("WWW Error: " + www.error);
            PopUp.Destroy();
		}
        
    }
    void EnablePopUpFramework() {
        PopUp.gameObject.SetActive(true);
    }
	void SetFrameWork() {
        PopUp.SetFoodName(nutrition.item_name);
        PopUp.SetBarValues (nutrition); // more to do later
	}
	// Update is called once per frame
	void Update () {
    }
}

public class NutritionJSON {
	public string item_id;
	public string item_name;
	public string brand_id;
	public string item_description;
	public string nf_ingredient_statement;
	public float nf_water_grams;
	public float nf_calories;
	public float nf_total_fat;
	public float nf_cholesterol; 
	public float nf_sodium;
	public float nf_total_carbohydrate;
	public float nf_dietary_fiber;
	public float nf_sugars;
	public float nf_protein;
	public float nf_vitamin_a_dv;
	public float nf_vitamin_c_dv;
	public float nf_calcium_dv;
	public float nf_serving_size_qty;
	public string nf_serving_size_unit;
}