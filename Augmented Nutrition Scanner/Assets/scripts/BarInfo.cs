using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarInfo {
	public Color barColor;
	public string name;
	public string unit;
	public Sprite picture;
	public BarInfo(string _name, string _unit, Color _barColor) {
		barColor = _barColor; name = _name; unit = _unit;
		picture = Resources.Load<Sprite> ("Sprites/" + name);
	}
	static public Color StringToColor(string hex) {
		Color myColor = new Color ();
		if (ColorUtility.TryParseHtmlString (hex, out myColor)) {
			return myColor;
		} else {
			return Color.blue;
		}

	}

}