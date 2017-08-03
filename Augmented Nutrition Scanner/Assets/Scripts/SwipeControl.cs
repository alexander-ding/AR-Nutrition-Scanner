using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeControl : MonoBehaviour {
    static private bool swipeLeft, swipeRight, swipeUp, swipeDown;
	static private bool isDragging = false;
	static private Vector2 startTouch, swipeDelta;
	static private float limit;

    private void Start() {
        limit = (Screen.width + Screen.height)/8;
    }
    private void Update() {
        swipeLeft = swipeRight = swipeUp = swipeDown = false;

        #region Standalone Inputs
        if (Input.GetMouseButtonDown(0)) {
            isDragging = true;
            startTouch = Input.mousePosition;
        } else if (Input.GetMouseButtonUp(0)) {
            isDragging = false;
            Reset();
        }
        #endregion
        #region Mobile Inputs
        if (Input.touches.Length > 0) {
            if (Input.touches[0].phase == TouchPhase.Began) {
                isDragging = true;
                startTouch = Input.touches[0].position;
            } else if (Input.touches[0].phase == TouchPhase.Ended || Input.touches[0].phase == TouchPhase.Canceled) {
                isDragging = false;
                Reset();
            }
        }
        #endregion

        // distance calculation
        swipeDelta = Vector2.zero;
        if (isDragging) {
            if (Input.touches.Length != 0)
                swipeDelta = Input.touches[0].position - startTouch;
            else if (Input.GetMouseButton(0))
                swipeDelta = (Vector2)Input.mousePosition - startTouch;
        }

        // did we cross?
        if (swipeDelta.magnitude > limit) {
            // direction? 
            float x = swipeDelta.x;
            float y = swipeDelta.y;
            if (Mathf.Abs(x) > Mathf.Abs(y)) {
                // left/right
				if (x < 0)
					swipeLeft = true;
				else {
					swipeRight = true; NotifySwappable ();
				}

            } else {
                // up/down
                if (y < 0)
                    swipeDown = true;
                else
                    swipeUp = true;
            }

            Reset();
        }
    }
	private void NotifySwappable() {
		SwappableManagement sm = transform.gameObject.GetComponent<SwappableManagement> ();
		sm.TrySwipeDashboard ();
	}
    private void Reset() {
        startTouch = swipeDelta = Vector2.zero;
        isDragging = false;
    }

	static public Vector2 SwipeDelta { get { return swipeDelta; } }
	static public bool IsDragging { get { return isDragging; } }
	static public bool SwipeLeft {  get { return swipeLeft; } }
	static public bool SwipeRight {  get { return swipeRight; } }
	static public bool SwipeUp { get { return swipeUp; } }
	static public bool SwipeDown { get { return swipeDown; } }
}
