using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OverlayFillScreen : MonoBehaviour {
    public RectTransform rt;
    // Use this for initialization
    void Start()
    {
        UpdateOverlay();
    }

    void OnRectTransformDimensionsChange()
    {
        UpdateOverlay();
    }
    void UpdateOverlay() {
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.sizeDelta = Vector2.zero;
    }
	void Update () {
		
	}
}
