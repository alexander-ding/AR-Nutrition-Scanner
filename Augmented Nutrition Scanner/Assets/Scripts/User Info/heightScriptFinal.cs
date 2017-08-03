using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class heightScriptFinal : MonoBehaviour {
	public heightUnitScript hu;
	public heightScript h;
	static public int height;
	static public bool heightCheckFinal;
	static public void calcHeight(){
		if (heightScript.heightCheck)
		{
			if (0 == heightUnitScript.heightUnit.CompareTo("cm"))
			{
				height = heightScript.heightNumber;

			}
			else
			{
				height = (int)(heightScript.heightNumber * 30.48f);

			}
			heightCheckFinal = true;
		}
	}
}