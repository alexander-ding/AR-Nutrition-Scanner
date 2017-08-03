using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OverviewPage : MonoBehaviour {
	public ZoneControl[] zones;
	// Use this for initialization
	void Start () {
	}
    public void Initialize(NutritionJSON nutrition) {
        foreach (ZoneControl zone in zones) {
            zone.Initialize(nutrition);
        }
        SetValues();
    }
	public void SetValues() {
		foreach (ZoneControl zone in zones) {
			zone.SetValues ();
		}
	}
	// Update is called once per frame
	void Update () {
		
	}
}
