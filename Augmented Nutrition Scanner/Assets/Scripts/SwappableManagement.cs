using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwappableManagement : MonoBehaviour {
	public CaloriesPage calories; 
	public NutritionPage protein;
	public NutritionPage fat;
	public NutritionPage sugar;
	public NutritionPage sodium;
	public OverviewPage overview;

	// Use this for initialization
	void Start () {
		
	}
	public void SwipeIn(string input) {
		Debug.Log ("registered click");
		switch(input) {
		case "calories":
			_SwipeInCalories ();
			break;
		case "overview":
			_SwipeInOverview ();
			break;
		case "protein":
			_SwipeInNutrition (protein);
			break;
		case "fat":
			_SwipeInNutrition (fat);
			break;
		case "sugar":
			_SwipeInNutrition (sugar);
			break;
		case "sodium":
			_SwipeInNutrition (sodium);
			break;
		default: 
			_SwipeInOverview ();
			break;
		}
	}
	void _SwipeInCalories() {
		overview.transform.gameObject.SetActive (false);
		calories.transform.gameObject.SetActive (true);
	}
	void _SwipeInNutrition(NutritionPage page) {
		overview.transform.gameObject.SetActive (false);
		page.transform.gameObject.SetActive (true);
	}
	void _SwipeInOverview() {
		calories.transform.gameObject.SetActive (false);
		protein.transform.gameObject.SetActive (false);
		fat.transform.gameObject.SetActive (false);
		sodium.transform.gameObject.SetActive (false);
		sugar.transform.gameObject.SetActive (false);
		overview.transform.gameObject.SetActive (true);
	}
	void SetValues() {
		calories.SetValues ();
		protein.SetValues ();
		fat.SetValues ();
		sodium.SetValues ();
		sugar.SetValues ();
		overview.SetValues ();
	}
	// Update is called once per frame
	void Update () {
		
	}
}
