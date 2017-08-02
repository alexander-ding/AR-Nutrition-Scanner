using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utils : MonoBehaviour {
	static public string UppercaseFirst(string s) {
		if (string.IsNullOrEmpty(s)) {
			return string.Empty;
		}
		return char.ToUpper(s[0]) + s.Substring(1);
	}
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
