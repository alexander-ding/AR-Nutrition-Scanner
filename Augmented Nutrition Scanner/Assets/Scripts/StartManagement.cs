using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartManagement : MonoBehaviour {
	static public GameObject Tutorial;
	static public GameObject Reticle;
	static public GameObject Overlay;
	static public GameObject Camera;
	static public MoreInfoManagement sampleMoreInfo;
	// Use this for initialization
	void Start () {
		//PlayerPrefs.SetInt ("tutorialDone", 0);
		Tutorial = Resources.Load<GameObject>("Prefabs/Tutorial");
		Reticle = GameObject.Find ("Reticle");
		Overlay = GameObject.Find ("CameraOverlay");
		Camera = GameObject.Find ("CameraBackground");
		sampleMoreInfo = GameObject.Find("MoreInfo").GetComponent<MoreInfoManagement>();
		sampleMoreInfo.gameObject.SetActive (false);
		if (PlayerPrefs.GetInt ("tutorialDone") != 1) {
			Instantiate (Tutorial);
			DisableScanner ();
		} else {
			EnableScanner ();
		}
	}
	static public void DisableScanner() {
		BarcodeScanner.scanning = false;
		Reticle.SetActive (false);
		Overlay.SetActive (false);
	}
	static public void EnableScanner() {
		BarcodeScanner.scanning = true;
		Reticle.SetActive (true);
		Overlay.SetActive (true);
	}
	static public void DisableCamera() {
		Camera.SetActive (false);
		DisableScanner ();
	}
	static public void EnableCamera() {
		Camera.SetActive (true);
		EnableScanner ();
	}
	// Update is called once per frame
	void Update () {
		
	}
}
