using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnBtn : MonoBehaviour {
	public GameObject moreInfo;
	// Use this for initialization
	void Start () {
		
	}
	public void Return() {
		moreInfo.SetActive (false);
		StartManagement.EnableCamera ();
	}
	// Update is called once per frame
	void Update () {
		
	}
}
