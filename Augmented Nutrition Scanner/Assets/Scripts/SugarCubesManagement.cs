using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SugarCubesManagement : MonoBehaviour {
    static public GameObject sampleSugar;
	// Use this for initialization
	void Start () {
        sampleSugar = GameObject.Find("SugarDisplay");
        sampleSugar.SetActive(false);
    }
    static public SugarCubes NewSugarDisplay(string upc) {
        if (Unique.Displays.ContainsKey(upc)) {
            return (SugarCubes)Unique.Displays[upc];
        }
        GameObject newSugar = Instantiate(sampleSugar);
        newSugar.SetActive(true);
        Unique.Displays.Add(upc, newSugar.transform.GetChild(0).GetComponent<SugarCubes>());
        return newSugar.transform.GetChild(0).GetComponent<SugarCubes>();
    }
    static public SugarCubes NewSugarDisplay(string upc, Vector3 spaceCoor) {
        if (Unique.Displays.ContainsKey(upc)) {
            return (SugarCubes)Unique.Displays[upc];
        }
        GameObject newSugar = Instantiate(sampleSugar);
        newSugar.SetActive(true);
        newSugar.transform.position = spaceCoor;
        Unique.Displays.Add(upc, newSugar.transform.GetChild(0).GetComponent<SugarCubes>());
        return newSugar.transform.GetChild(0).GetComponent<SugarCubes>();
    }
	// Update is called once per frame
	void Update () {
		
	}
}
