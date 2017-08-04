using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CaloriesPage : MonoBehaviour {
	public string nutritionName = "calories";
	public Text valueText;
	public Text maxText;
	public Text nameText;
	public PieGraph pieGraph;
	public CylinderBar cylinder;

	private NutritionJSON nutrition;
	// Use this for initialization
	void Start () {
	}

	public void Initialize(NutritionJSON input) {
		nutrition = input;
		SetValues ();
	}
	public void SetValues() {
		bool isAll = ServingAllButton.CheckState ();
		CylinderHandle (isAll);
		TextHandle (isAll);
		PieGraphHandle ();
	}
	void PieGraphHandle() {
		pieGraph.SetValues (new float[3]{nutrition.nf_protein  * 4f, nutrition.nf_total_carbohydrate * 4f, nutrition.nf_total_fat * 9f});
	}
	void CylinderHandle(bool isAll) {
		cylinder.Initialize (nutritionName);
		float value = BarInfo.FromNutrition (nutritionName, nutrition);
		if (isAll) {
			cylinder.StepTo (value);
		} else {
			cylinder.StepTo (value / nutrition.nf_serving_size_qty);
		}
	}
	void TextHandle(bool isAll) {
		BarInfo temp;
		Unique.BarInfos.TryGetValue (nutritionName, out temp);
		string unit = temp.unit;
		maxText.text = NutritionMax.GetMax (nutritionName).ToString() + unit;
		nameText.text = Utils.UppercaseFirst (nutritionName);

		float value = BarInfo.FromNutrition (nutritionName, nutrition);
		if (isAll) {
			valueText.text = value * nutrition.nf_serving_size_qty + unit;
		} else {
			valueText.text = value + unit;
		}

	}
	// Update is called once per frame
	void Update () {
		
	}
}
