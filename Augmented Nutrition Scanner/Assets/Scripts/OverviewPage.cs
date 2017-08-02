using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OverviewPage : MonoBehaviour {
	public ZoneControl[] zones;

	private SwappableManagement parent;
	// Use this for initialization
	void Start () {
		parent = transform.parent.gameObject.GetComponent<SwappableManagement> ();
	}
	public void SetValues() {
		foreach (ZoneControl zone in zones) {
			zone.SetValues ();
		}
	}
	public void TeleportTo() {
	}
	// Update is called once per frame
	void Update () {
		
	}
}
