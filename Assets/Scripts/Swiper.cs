using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swiper {
    private RectTransform page;
    private int index;
    private float destination;
    private float step;
    private SwappableManagement parent;
	private bool overrideShouldStep = true;
    public Swiper (SwappableManagement _parent, MiddleManagement pageToSwipe, float _destination, int _index, int _frames = 20) {
        page = pageToSwipe.gameObject.GetComponent<RectTransform>();
        destination = _destination;
        step = (destination - page.localPosition.x) / _frames;
        parent = _parent;
        index = _index;
    }
    void SetTo(float number) {
        page.localPosition = new Vector3(number, 0, 0);
    }
	public bool ShouldStep() { 
		if (!overrideShouldStep) {
			return false;
		} else {
			return page.localPosition.x != destination;
		}
	}
	public void Destroy() {
		overrideShouldStep = false;
	}
	void TryStep() {
        float current = page.localPosition.x;
        if (Mathf.Abs(current - destination) <= Mathf.Abs(step)) {
            SetTo(destination);
        } else {
            SetTo(current + step);
        }
		if (!ShouldStep()) {
			parent.Done (index);
			overrideShouldStep = false;
		}
    }
    // Update is called once per frame
	public void Update () {
		if (ShouldStep()) {
            TryStep();
        }
	}
}
