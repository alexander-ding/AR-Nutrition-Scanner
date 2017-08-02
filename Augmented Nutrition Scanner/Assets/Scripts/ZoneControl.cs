using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ZoneControl : MonoBehaviour {
	public string nutritionName;
	private NutritionJSON nutrition = null;
	private Text percentageText;
	private Image circleImage;

	private const int frameCount = 60;
	private float maxVal;
	private float destination = 0f;
	private float step = 0f;
	// Use this for initialization
	void MockJSON() {
		var headers = new Dictionary<string, string>{};
		headers.Add ("X-Mashape-Authorization", Unique.ApiKey);
		WWW www = new WWW (Unique.Home + "/item?upc=" + "123", null, headers);

		StartCoroutine (WaitForRequest (www));
	}
	IEnumerator WaitForRequest(WWW www) {
		yield return www;
		if (www.error == "") {
			nutrition = JsonUtility.FromJson<NutritionJSON> (www.text);
			Initialize (nutrition);
		} else {
			Debug.Log ("WWW Error: " + www.error);
		}

	}
	void Start () {
		percentageText = transform.Find ("%").GetComponent<Text> ();
		circleImage = transform.Find ("Circle").GetComponent<Image> ();
		MockJSON ();
	}
	public void Initialize(NutritionJSON input) {
		nutrition = input;
		maxVal = NutritionMax.GetMax (nutritionName);
		SetTo (0f);
		SetValues ();
	}
	public void SetValues() {
		float value = BarInfo.FromNutrition (nutritionName, nutrition);
		if (ServingAllButton.CheckState ()) {
			StepTo (value);
		} else {
			StepTo (value / nutrition.nf_serving_size_qty);
		}
	}
	void SetTo(float number) {
		circleImage.fillAmount = number;
		percentageText.text = string.Format("{0:N1}", (number * 100)) + "%";
	}
	void SetText() {
		float value = BarInfo.FromNutrition (nutritionName, nutrition);
		if (!ServingAllButton.CheckState ()) {
			value /= nutrition.nf_serving_size_qty;
		}
		percentageText.text = string.Format("{0:N1}", value / maxVal * 100f) + "%";
	}
	void StepTo(float number) {
		if (number > maxVal) {
			number = maxVal;
		} else if (number < 0f) {
			number = 0f;
		}
		StepToPercentage (number / maxVal);
	}
	void StepToPercentage(float percentage) {
		destination = percentage;
		if (!ShouldStep ()) {
			SetText ();
		} else {
			float current = circleImage.fillAmount;
			step = (destination - current)/ frameCount;
		}
	}
	void TryStep() {
		float current = circleImage.fillAmount;
		if (Mathf.Abs (current - destination) < Mathf.Abs (step)) {
			SetTo (destination);
			SetText ();
		} else {
			SetTo (current + step);
		}
	}
	bool ShouldStep() {
		return (circleImage.fillAmount != destination);
	}
	bool IsInitialized() {
		return (nutrition != null);
	}
	void Update () {
		if (IsInitialized ()) {
			if (ShouldStep ()) {
				TryStep ();
			}
		}
	}
}
