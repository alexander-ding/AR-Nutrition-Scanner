using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NutritionMax:MonoBehaviour {
	static public float BBE;
	static public float Weight;
	static public float Height;
	static public float Age;
	static public bool Sex; // true is female, false is male
	void Start() {
		FakeUser ();
		Compute ();

	}
	private void FakeUser() {
		PlayerPrefs.SetFloat ("weight", 60);
		PlayerPrefs.SetFloat ("height", 170);
		PlayerPrefs.SetFloat ("age", 16);
		PlayerPrefs.SetInt ("sex", 0);
	}
	static public void Compute() {
		Weight = PlayerPrefs.GetFloat ("weight");
		Height = PlayerPrefs.GetFloat ("height");
		Age = PlayerPrefs.GetFloat ("age");
		int tempSex = PlayerPrefs.GetInt ("sex");
		if (tempSex == 1) {
			Sex = true;
		} else {
			Sex = false;
		}
		if (Sex) {
			BBE = 665.1f + 9.6f * Weight + 1.9f * Height - 4.7f * Age;
		} else {
			BBE = 66.5f + 13.8f * Weight + 5.0f * Height - 6.8f * Age;
		}
	}
	static public float GetMax(string name) { // let users decide diet later
		Compute();
		switch (name) {
		case "calories":
			return BBE;
		case "carbs":
			return BBE * 0.6f;
		case "sodium":
			return 2.4f;
		case "fat":
			return BBE * 0.3f;
		case "protein":
			return Weight * 0.9f;
		case "sugar":
			return BBE * 0.1f / 4f;
		default:
			return 0f;
		}
	}
}
