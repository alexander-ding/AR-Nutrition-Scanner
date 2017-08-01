using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaceLabels : MonoBehaviour {
	public GameObject labels;
	public GameObject wall;
	const float HEIGHT = 200f; // grams of sugar
	// Use this for initialization
	void Start () {
		Place ();
	}
		float current = NutritionMax.GetMax("sugar");
		float y = current / HEIGHT * wall.transform.localPosition.y;
		labels.transform.localPosition = new Vector3 (labels.transform.localPosition.x, y, labels.transform.localPosition.z);
	}
	// Update is called once per frame
	void Update () {
		
	}
}
