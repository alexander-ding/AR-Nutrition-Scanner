using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ServingAllButton : MonoBehaviour {
	public NutritionPage page;
	public Image btn;
	private bool state; // true = all; false = servings
	// Use this for initialization
	void Start () {
		state = CheckState ();
		RespondToState ();
	}
	public static bool CheckState() {
		int temp = PlayerPrefs.GetInt ("serving/all");
		if (temp == 1) {
			return true;
		} else {
			return false;
		}
	}
	void SetState() {
		int temp;
		if (state) {
			temp = 1;
		} else {
			temp = 0;
		}
		PlayerPrefs.SetInt ("serving/all", temp);
	}
	void RespondToState() {
		if (state) {
			btn.sprite = Resources.Load<Sprite> ("Sprites/switchAll");
		} else {
			btn.sprite = Resources.Load<Sprite> ("Sprites/switchServing");
		}
	}
	public void Switch() {
		state = !state;
		SetState ();
		RespondToState ();
		page.SetValues ();
	}
	// Update is called once per frame
	void Update () {
		
	}
}
