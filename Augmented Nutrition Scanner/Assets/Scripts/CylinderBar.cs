using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CylinderBar : MonoBehaviour {
	public Image self;
	public Text numberText; 

	private Color color;
	private string nutritionName = "unset";
	private float maxVal;
	private int frameCount = 60;
	private float step = 0f;
	private float destination = 0f;
	private float targetVal = 0f;
	// Use this for initialization
	void Start () {
		
	}
	public void Initialize(string input) {
		nutritionName = input; 
		maxVal = NutritionMax.GetMax (nutritionName);
		self.fillAmount = 0f;
		BarInfo info;
		Unique.BarInfos.TryGetValue (nutritionName, out info);
		self.color = info.barColor;
	}
	public void StepTo(float value) {
		targetVal = value;
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
		destination = percentage;
		if (!ShouldStep ()) {
			SetText ();
		} else {
			float current = self.fillAmount;
			step = (destination - current) / frameCount;
		}

	}
	void SetTo(float number) {
		self.fillAmount = number;
		numberText.text = string.Format("{0:N1}", (number * 100)) + "%";
	}
	void SetText() {
		numberText.text = string.Format("{0:N1}", (targetVal / maxVal * 100)) + "%";
	}
	// Update is called once per frame
	void TryStep() {
		float current = self.fillAmount;
		if (Mathf.Abs (current - destination) < Mathf.Abs (step)) {
			SetTo (destination);
			SetText ();
		} else {
			SetTo (current + step);
		}
	}
	bool ShouldStep() {
		return (self.fillAmount != destination);
	}
	bool IsInitialized() {
		return (nutritionName != "unset");
	}
	void Update () {
		if (IsInitialized()) {
			if (ShouldStep ()) {
				TryStep ();
			}
		}
	}
}
