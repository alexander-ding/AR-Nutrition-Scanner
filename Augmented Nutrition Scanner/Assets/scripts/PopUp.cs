using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopUp : MonoBehaviour {
    public GameObject parent;
	public GameObject rows;
	public Text foodNameBox; 
	public float defaultBarWidth = 159;
	public string[] barNames = new string[5] {"calories", "carbs", "fat", "protein", "sugar"};
    public string upc;
	private Dictionary<string, ProgressBar> bars = new Dictionary<string, ProgressBar>{};
	public void SetFoodName(string txt) {
		foodNameBox.text = txt;
	}
	public bool SetBarValue(int index, float percentage) {
		if ((index > 4) || (index < 0)) {
			return false;
		} else {
			bars[barNames[index]].SetBar (percentage);
			return true;
		}
	}
	public bool SetBarValue(string key, float percentage) {
		ProgressBar selected;
		if (bars.TryGetValue (key, out selected)) {
			selected.SetBar (percentage);
			return true;
		} else {
			return false;
		}
	}
    public float GetBarValue(string key){
        ProgressBar selected;
        if (bars.TryGetValue(key, out selected)) {
            return selected.CurrentWidth();
        } else {
            return 0f;
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
    public void Destroy() {
        Object.Destroy(parent);
    }
    public void DisplaySugar() {
        SugarCubes cube = SugarCubesManagement.NewSugarDisplay(upc, new Vector3(759, 200, -100));
        cube.MakeSugarCubes((uint)(GetBarValue("sugar")/defaultBarWidth* GetMax("sugar") * 10), new Vector3(0, 40, 0));
    }
	// Use this for initialization
	void InitializeBars() {
		for (int i = 0; i < rows.transform.childCount; i++) {
			GameObject row = rows.transform.GetChild (i).gameObject;
			bars.Add(barNames[i], new ProgressBar (row, barNames[i], 100f, defaultBarWidth));
		}

		foreach (KeyValuePair<string, ProgressBar> entry in bars) {
			entry.Value.InstantSetBar (0f);
		}
	}
	void Start () {
		InitializeBars ();
	}
	// Update is called once per frame
	void Update () {
		foreach (KeyValuePair<string, ProgressBar> entry in bars) {
			entry.Value.UpdateBar ();
		}
	}
}

class ProgressBar {
	private float targetWidth = 0f;
	private float startWidth = 0f;
	private Image progressBar; 
	private Text unitBox;
	private Image rowImage;
	private Text nameBox;
	private string unit;
	private float barWidth;
	private float max;
	private int currentFrame = 0;
	private string name;
	public int targetFrame = 60;
    public float CurrentWidth(){return targetWidth;}
    public float Max() { return max; }
	public ProgressBar (GameObject folder, string varName, float maxInput, float defaultWidth) {
		progressBar = folder.transform.GetChild(0).gameObject.GetComponent<Image>();
		unitBox = folder.transform.GetChild (1).gameObject.GetComponent<Text>();
		rowImage = folder.transform.GetChild (2).gameObject.GetComponent<Image> ();
		nameBox = folder.transform.GetChild (3).gameObject.GetComponent<Text> ();

		barWidth = defaultWidth;
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
		nameBox.text = UppercaseFirst(name);

	}
	private string UppercaseFirst(string s) {
		if (string.IsNullOrEmpty(s)) {
			return string.Empty;
		}
		return char.ToUpper(s[0]) + s.Substring(1);
	}
	public void UpdateBar() {
		if ((progressBar.rectTransform.sizeDelta.x != targetWidth) && (currentFrame <= targetFrame)) {
			progressBar.rectTransform.sizeDelta = new Vector3 (progressBar.rectTransform.sizeDelta.x + (targetWidth - startWidth) / targetFrame, progressBar.rectTransform.sizeDelta.y);
			currentFrame++;
			SetText (progressBar.rectTransform.sizeDelta.x / barWidth);
		}
	}
	public void SetBar(float input) {
		if (input > max) {
			input = max;
		}
		SetBarPercentage (input / max);
		SetText (input);
	}
	public void InstantSetBar(float input){
		if (input > max) {
			input = max;
		}
		InstantSetBarPercentage (input / max);
		SetText (input);
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
	private void SetText(float percentage) {
		unitBox.text = string.Format("{0:N3}", percentage * max) + " " + unit;
	}
}