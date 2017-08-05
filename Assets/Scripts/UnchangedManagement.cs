using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UnchangedManagement : MonoBehaviour {
	public NutritionJSON nutrition;
	public Text itemText;
	public Text servingText;
	// Use this for initialization
	void Start () {
	}
	public void Initialize(NutritionJSON input) {
		nutrition = input;
		SetText ();
	}
	void SetText() {
		itemText.text = nutrition.item_name;
		servingText.text = nutrition.nf_serving_size_qty.ToString() + " " + nutrition.nf_serving_size_unit;
	}
	// Update is called once per frame
	void Update () {
		
	}
}
