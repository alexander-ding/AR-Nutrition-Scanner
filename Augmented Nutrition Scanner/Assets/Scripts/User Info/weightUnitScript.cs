using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class weightUnitScript : MonoBehaviour {
	public Dropdown drop;
	public GameObject TextNumber;
	static public string weightUnit;
	void Start () {
		weightUnit = "kg";
	}
	public void SetUnit()
	{
		weightUnit = drop.options [drop.value].text;
			weightScriptFinal.calcWeight ();
	}
}