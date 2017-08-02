using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedirectToPage : MonoBehaviour {
	public string URL;
	// Use this for initialization
	void Start () {
		
	}
	public void Redirect() {
		Application.OpenURL(URL);
	}
	// Update is called once per frame
	void Update () {
		
	}
}
