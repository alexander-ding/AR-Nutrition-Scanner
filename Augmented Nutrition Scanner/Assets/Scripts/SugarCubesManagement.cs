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
    static public SugarCubes NewSugarDisplay(string upc)
    {
        if (Unique.Displays.ContainsKey(upc))
        {
            return (SugarCubes)Unique.Displays[upc];
        }
        GameObject newSugar = Instantiate(sampleSugar);
        newSugar.transform.eulerAngles.Set(0, 0, 0);
        newSugar.SetActive(true);
        Unique.Displays.Add(upc, newSugar.transform.GetChild(0).GetComponent<SugarCubes>());
        newSugar.transform.GetChild(0).GetComponent<SugarCubes>().upc = upc;
        return newSugar.transform.GetChild(0).GetComponent<SugarCubes>();
    }
    static public SugarCubes NewSugarDisplay(string upc, GameObject popup) {
            if (Unique.Displays.ContainsKey(upc))
            {
                return (SugarCubes)Unique.Displays[upc];
            }
            GameObject newSugar = Instantiate(sampleSugar, popup.transform);
            newSugar.transform.localPosition = popup.transform.position + Vector3.right * 100;
            newSugar.SetActive(true);
            Unique.Displays.Add(upc, newSugar.transform.GetChild(0).GetComponent<SugarCubes>());
            newSugar.transform.GetChild(0).GetComponent<SugarCubes>().upc = upc;
            return newSugar.transform.GetChild(0).GetComponent<SugarCubes>();
    }
    static public SugarCubes NewSugarDisplay(string upc, GameObject popup, Vector3 spaceCoor) {
        if (Unique.Displays.ContainsKey(upc)) {
            return (SugarCubes)Unique.Displays[upc];
        }
        GameObject newSugar = Instantiate(sampleSugar, popup.transform);

        newSugar.SetActive(true);
        newSugar.transform.localPosition = spaceCoor;
        Unique.Displays.Add(upc, newSugar.transform.GetChild(0).GetComponent<SugarCubes>());
        return newSugar.transform.GetChild(0).GetComponent<SugarCubes>();
    }
	// Update is called once per frame
	void Update () {
		
	}
}
