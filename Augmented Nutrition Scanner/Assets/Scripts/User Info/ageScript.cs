using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ageScript : MonoBehaviour
{
	public InputField input;
	static public bool ageCheck;
	static public int age;
	public void setAge()
	{
		string inputAge = input.text;
		if (int.TryParse(inputAge, out age))
		{  
			ageCheck = true;
			Debug.Log (age.ToString ());
		}


	}



}