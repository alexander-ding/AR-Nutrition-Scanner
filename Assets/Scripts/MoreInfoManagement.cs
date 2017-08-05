using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoreInfoManagement : MonoBehaviour {
	public UnchangedManagement unchanged;
	public SwappableManagement swappable;
	public NutritionJSON nutrition;
	// Use this for initialization
	void Start () {
	}
	public void NewMoreInfo(NutritionJSON input) {
		//GameObject moreInfo = Instantiate(StartManagement.sampleMoreInfo);
		this.gameObject.SetActive (true);
		Initialize (input);
	}
	void GetNutrition() {
		var headers = new Dictionary<string, string>{};
		headers.Add ("X-Mashape-Authorization", Unique.ApiKey);
		WWW www = new WWW (Unique.Home + "/item?upc=", null, headers);

		StartCoroutine (WaitForRequest (www));
	}
	IEnumerator WaitForRequest(WWW www) {
		yield return www;
		if (www.error == "") {
			Initialize(JsonUtility.FromJson<NutritionJSON> (www.text));
		} else {
			Debug.Log ("WWW Error: " + www.error);
		}
	}
	void Initialize(NutritionJSON input) {
		swappable.Initialize (input);
		unchanged.Initialize (input);
	}
	public void Destroy() {
		GameObject.Destroy(transform.gameObject);
	}
	// Update is called once per frame
	void Update () {
		
	}
}
