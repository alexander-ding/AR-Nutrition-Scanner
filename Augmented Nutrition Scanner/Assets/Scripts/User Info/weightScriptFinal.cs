using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class weightScriptFinal : MonoBehaviour {
	public weightUnitScript wu;
	public weightScript w;
	static public int weight;
	static public bool weightCheckFinal;
	static public void calcWeight(){
		if (weightScript.weightCheck)
		{
			if (0 == weightUnitScript.weightUnit.CompareTo("kg"))
			{
				weight = weightScript.weightNumber;

			}
			else
			{
				weight = (int)(weightScript.weightNumber * .453592f);

			}
			weightCheckFinal = true;
	}
}
}