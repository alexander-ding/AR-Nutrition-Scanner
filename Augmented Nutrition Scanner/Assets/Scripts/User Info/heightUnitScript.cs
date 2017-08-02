using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class heightUnitScript : MonoBehaviour {
	public Dropdown drop;
	public GameObject TextNumber;
	static public string heightUnit;
	void Start () {
		heightUnit = "cm";
	}
	public void SetUnit()
	{
		heightUnit = drop.options [drop.value].text;
			heightScriptFinal.calcHeight ();
	}
}