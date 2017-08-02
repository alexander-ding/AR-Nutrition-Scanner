using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class heightScript : MonoBehaviour
{
	static public int heightNumber;
	public InputField input;
	static public bool heightCheck;
	public void setHeight()
	{
		string inputHeight = input.text;
		if (int.TryParse(inputHeight, out heightNumber))
		{  
			heightCheck = true;
			heightScriptFinal.calcHeight ();
		}
			
	}



}