using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class weightScript : MonoBehaviour
{
    static public int weightNumber;
	public InputField input;
	static public bool weightCheck;
    public void setWeight()
	{
		string inputWeight = input.text;
        if (int.TryParse(inputWeight, out weightNumber))
        {  
			weightCheck = true;
			weightScriptFinal.calcWeight ();
        }


    }



}