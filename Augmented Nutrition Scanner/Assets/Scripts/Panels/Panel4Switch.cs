using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel4Switch : MonoBehaviour
{
	public GameObject Panel3;
	public GameObject Panel4;
	public void click()
	{
		if (sexScript.sexCheck && weightScriptFinal.weightCheckFinal && ageScript.ageCheck && heightScriptFinal.heightCheckFinal) {
			Panel3.SetActive (false);
//load alex's scene here
		}
	}
}
