using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CylinderBar : MonoBehaviour {
	public RectTransform cylinder;
	public RectTransform self;

	private string nutritionName = "unset";
	private float maxVal;
	private float MaxHeight;
	private int frameCount = 60;
	private float step = 0f;
	private float destination = 0f;
	// Use this for initialization
	void Start () {
		
	}
	public void Initialize(string input) {
		nutritionName = input;
		MaxHeight = cylinder.sizeDelta.y / 700f * 667f;
		maxVal = NutritionMax.GetMax (nutritionName);
	}
	public void StepTo(float value) {
		float input = 0f;
		if (value > maxVal) {
			input = maxVal;
		} else if (value < 0) {
			input = 0f;
		} else {
			input = value;
		}
		StepToPercentage (input / maxVal);
	}
	void StepToPercentage(float percentage) {
		destination = MaxHeight * percentage;
		float current = self.sizeDelta.y;
		step = (destination - current)/ frameCount;
	}
	void SetTo(float number) {
		self.sizeDelta = new Vector2 (self.sizeDelta.x, number);
	}
	// Update is called once per frame
	void TryStep() {
		float current = self.sizeDelta.y;
		if (Mathf.Abs (current - destination) < Mathf.Abs (step)) {
			SetTo (destination);
		} else {
			SetTo (current + step);
		}
	}
	bool ShouldStep() {
		return (self.sizeDelta.y == destination);
	}
	bool IsInitialized() {
		return (nutritionName == "unset");
	}
	void Update () {
		if (IsInitialized()) {
			if (ShouldStep ()) {
				TryStep ();
			}
		}
	}
}
