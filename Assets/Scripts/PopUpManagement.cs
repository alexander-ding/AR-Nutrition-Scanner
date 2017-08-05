using System.Collections;
using System.Collections.Generic;
using UnityEngine;
class PopUpManagement : MonoBehaviour {
	static public GameObject samplePopUp;
	// Use this for initialization
	void Start () {
		samplePopUp = Resources.Load<GameObject> ("Prefabs/PopUp");
	}
    static public PopUp NewPopUp(string Upc) {
        if (Unique.PopUps.Contains(Upc)) {
            return (PopUp)Unique.PopUps[Upc];
        }
		GameObject newPopUp = GameObject.Instantiate (samplePopUp);
		GameObject jsonManagement = newPopUp.transform.GetChild (1).gameObject;
		jsonManagement.GetComponent<JSONManagement>().upc = Upc;
        newPopUp.transform.GetChild(0).GetComponent<PopUp>().upc = Upc;
		newPopUp.SetActive (true);
        newPopUp.transform.GetChild(0).gameObject.SetActive(false);


        Unique.PopUps.Add (Upc, newPopUp.transform.GetChild(0).GetComponent<PopUp>());

		return newPopUp.transform.GetChild(0).GetComponent<PopUp>();
    }

	static public PopUp NewPopUp(string Upc, Vector3 spaceCoor) {
        if (Unique.PopUps.Contains(Upc)) {
            return (PopUp)Unique.PopUps[Upc];
        }
        GameObject newPopUp = GameObject.Instantiate (samplePopUp);
		GameObject jsonManagement = newPopUp.transform.GetChild (1).gameObject;
		jsonManagement.GetComponent<JSONManagement>().upc = Upc;
		newPopUp.transform.position = spaceCoor;
        newPopUp.transform.GetChild(0).GetComponent<PopUp>().upc = Upc;
        newPopUp.SetActive(true);
        newPopUp.transform.GetChild(0).gameObject.SetActive(false);

        Unique.PopUps.Add (Upc, newPopUp.transform.GetChild(0).GetComponent<PopUp>());

        return newPopUp.transform.GetChild(0).GetComponent<PopUp>();
    }

	// Update is called once per frame
	void Update () {
		
	}
}
