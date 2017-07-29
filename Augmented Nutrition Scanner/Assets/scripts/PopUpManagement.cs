using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopUpManagement : MonoBehaviour {
	public GameObject samplePopUp;
	// Use this for initialization
	void Start () {
		samplePopUp = GameObject.Find ("PopUp");
		samplePopUp.SetActive (false);
		NewPopUp ("1231231");
		NewPopUp ("12321", new Vector3 (400, 400, 0), new Vector3 (24, 1, 2));
	}
	GameObject NewPopUp(string Upc) {
		GameObject newPopUp = GameObject.Instantiate (samplePopUp);
		GameObject jsonManagement = newPopUp.transform.GetChild (1).gameObject;
		jsonManagement.GetComponent<JSONManagement>().upc = Upc;
		newPopUp.SetActive (true);

		Unique.PopUps.Add (Upc, newPopUp);

		return newPopUp;
	}

	void NewPopUp(string Upc, Vector3 spaceCoor, Vector3 orientation) {
		GameObject newPopUp = GameObject.Instantiate (samplePopUp);
		GameObject jsonManagement = newPopUp.transform.GetChild (1).gameObject;
		jsonManagement.GetComponent<JSONManagement>().upc = Upc;
		RectTransform rect = newPopUp.GetComponent<RectTransform> ();
		rect.position = spaceCoor;
		rect.eulerAngles = orientation;
		newPopUp.SetActive (true);

		Unique.PopUps.Add (Upc, newPopUp);
	}
	// Update is called once per frame
	void Update () {
		
	}
}
