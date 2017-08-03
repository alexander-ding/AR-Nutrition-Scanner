using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PopUp : MonoBehaviour {
	public GameObject parent;
	public GameObject rows;
	public Text foodNameBox; 
	public string[] barNames = new string[5] {"calories", "carbs", "fat", "protein", "sugar"};
    public string upc;
	private Dictionary<string, ProgressBar> bars = new Dictionary<string, ProgressBar>{};
	public void SetFoodName(string txt) {
		foodNameBox.text = txt;
	}
    public void SetBarValues(NutritionJSON nutrition) {
        foreach (string item in barNames) {
            GetProgressBar(item).SetBar(BarInfo.FromNutrition(item, nutrition));
        }
    }
	public bool SetBarValue(int index, float number) {
		if ((index > 4) || (index < 0)) {
			return false;
		} else {
			bars[barNames[index]].SetBar (number);
			return true;
		}
	}
    public ProgressBar GetProgressBar(string key) {
        ProgressBar selected;
        if (bars.TryGetValue(key, out selected)) {
            return selected;
        } else {
            return null;
        }
    }
    public float GetMax(string key){
        ProgressBar selected;
        if (bars.TryGetValue(key, out selected)) {
            return selected.Max();
        } else {
            return 0f;
        }
    }
	public void AcceptBtnHandle() {
		Debug.Log ("Accept button clicked");
        DisplaySugar();
	}
	public void RejectBtnHandle() {
		Debug.Log ("Reject button clicked");
        Destroy();
	}
    public void MoreBtnHandle() {
        Debug.Log("More button clicked");
		LoadMoreInfo ();
    }

	public void LoadMoreInfo() {
		NutritionJSON nutrition = transform.parent.GetComponentInChildren<JSONManagement> ().nutrition;
		StartManagement.DisableCamera ();
		StartManagement.sampleMoreInfo.GetComponent<MoreInfoManagement>().NewMoreInfo (nutrition);
	}
    public void Destroy() {
		SugarCubes sugar = null;
		sugar = parent.transform.GetComponentInChildren<SugarCubes> ();
		if (sugar != null) {
			sugar.Destroy ();
		}
		Unique.PopUps.Remove(upc);
		Object.Destroy(parent);
    }

    public void DisplaySugar() {
        if (Unique.Displays.Contains(upc)) return;
        ProgressBar selected = GetProgressBar("sugar");
		float x = parent.GetComponent<RectTransform>().sizeDelta.x / 2  + 70f;
		float y = -parent.GetComponent<RectTransform> ().sizeDelta.y / 4;
		SugarCubes cube = SugarCubesManagement.NewSugarDisplay(upc, this, new Vector3(x, y,0));
        cube.MakeSugarCubes((uint)(selected.CurrentValue() * 10), new Vector3(0, 40, 0));
    }
	// Use this for initialization
	private void InitializeBars() {
		for (int i = 0; i < rows.transform.childCount; i++) {
			GameObject row = rows.transform.GetChild (i).gameObject;
			bars.Add(barNames[i], new ProgressBar (row, barNames[i], NutritionMax.GetMax(barNames[i])));
		}

		foreach (KeyValuePair<string, ProgressBar> entry in bars) {
			entry.Value.InstantSetBar (0f);
		}
	}
	private void FaceCamera() {
		Vector3 dist = (parent.transform.position - Camera.main.gameObject.transform.position).normalized;
		Quaternion lookDirection = Quaternion.LookRotation (dist);
		parent.transform.rotation = lookDirection;
	}
	void Start () {
		InitializeBars ();
		FaceCamera ();
	}
	// Update is called once per frame
	void Update () {
		FaceCamera ();
		foreach (KeyValuePair<string, ProgressBar> entry in bars) {
			entry.Value.UpdateBar ();
		}
	}
}

public class ProgressBar {
	private float targetWidth = 0f;
	private float startWidth = 0f;
	public Image progressBar; 
	public Text unitBox;
    public Image rowImage;
    public Text nameBox;
	private string unit;
	private float barWidth = 159f;
	private float max;
    private float current;
	private int currentFrame = 0;
	private string name;
	public int targetFrame = 60;
    public float CurrentWidth(){return targetWidth;}
    public float CurrentValue() { return current; }
    public float Max() { return max; }
	public ProgressBar (GameObject folder, string varName, float maxInput) {
		progressBar = folder.transform.GetChild(0).gameObject.GetComponent<Image>();
		unitBox = folder.transform.GetChild (1).gameObject.GetComponent<Text>();
		rowImage = folder.transform.GetChild (2).gameObject.GetComponent<Image> ();
		nameBox = folder.transform.GetChild (3).gameObject.GetComponent<Text> ();
		max = maxInput;

		Initialize (varName);
	}

	private void Initialize(string varName) {
		if (!Unique.BarInfos.ContainsKey (varName)) {
			varName = "unknown";
		}
		name = varName;
		progressBar.GetComponent<Image> ().color = Unique.BarInfos [name].barColor;
		rowImage.sprite = Unique.BarInfos [name].picture;
		unit = Unique.BarInfos [name].unit;
		nameBox.text = Utils.UppercaseFirst(name);
        barWidth = progressBar.rectTransform.sizeDelta.x;
	}
	public void UpdateBar() {
		if ((progressBar.rectTransform.sizeDelta.x != targetWidth) && (currentFrame <= targetFrame)) {
            if (Mathf.Abs(targetWidth - progressBar.rectTransform.sizeDelta.x) <= (targetWidth - startWidth) / targetFrame)
            {
                progressBar.rectTransform.sizeDelta.Set (targetWidth, progressBar.rectTransform.sizeDelta.y);
            } else
            {
                progressBar.rectTransform.sizeDelta = new Vector2(progressBar.rectTransform.sizeDelta.x + (targetWidth - startWidth) / targetFrame, progressBar.rectTransform.sizeDelta.y);
            }

			currentFrame++;
			SetText ();
		}
	}
	public void SetBar(float input) {
        current = input;
        if (input > max) {
			input = max;
		}
        SetBarPercentage (input / max);
		SetText ();
	}
	public void InstantSetBar(float input){
        current = input;
        if (input > max) {
			input = max;
		}
		InstantSetBarPercentage (input / max);

		SetText ();
	}
	private void SetBarPercentage(float percentage) {
		startWidth = progressBar.rectTransform.sizeDelta.x;
		targetWidth = percentage * barWidth;
		currentFrame = 0;
	}
	private void InstantSetBarPercentage(float percentage) {
		progressBar.rectTransform.sizeDelta = 
			new Vector3 (percentage * barWidth, progressBar.rectTransform.sizeDelta.y);
	}
	private void SetText() {
		unitBox.text = current.ToString() + " " + unit;
	}
}