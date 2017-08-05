using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel4Switch : MonoBehaviour
{
	public GameObject Panel3;
	public void click()
	{
		if (sexScript.sexCheck && weightScriptFinal.weightCheckFinal && ageScript.ageCheck && heightScriptFinal.heightCheckFinal) {
			Panel3.SetActive (false);
			Debug.Log ((float)weightScriptFinal.weight);
			Debug.Log ((float)heightScriptFinal.height);
			Debug.Log ((float)ageScript.age);
			PlayerPrefs.SetFloat ("weight", (float)weightScriptFinal.weight);
			PlayerPrefs.SetFloat ("height", (float)heightScriptFinal.height);
			PlayerPrefs.SetFloat ("age", (float)ageScript.age);
			int sexInt = 0;
			if (sexScript.sex) {
				sexInt = 1;
			}
			PlayerPrefs.SetInt ("sex", sexInt);
			PlayerPrefs.SetInt ("tutorialDone", 1);

			StartManagement.EnableScanner ();
			GameObject.Destroy (transform.parent.parent.gameObject);
			// enable scanner, get rid of this page
		}

	}
}
