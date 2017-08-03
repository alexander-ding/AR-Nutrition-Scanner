﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeControl : MonoBehaviour {
    private bool tap, swipeLeft, swipeRight, swipeUp, swipeDown;
    private bool isDragging = false;
    private Vector2 startTouch, swipeDelta;
    private float limit;

    private void Start() {
        limit = (Screen.width + Screen.height)/8;
    }
    private void Update() {
        tap = swipeLeft = swipeRight = swipeUp = swipeDown = false;

        #region Standalone Inputs
        if (Input.GetMouseButtonDown(0)) {
            tap = true;
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
                tap = true;
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
                    Debug.Log("Swipe left"); // swipeLeft = true;
                else
                    Debug.Log("Swipe right"); // swipeRight = true;

            } else {
                // up/down
                if (y < 0)
                    Debug.Log("Swipe down"); // swipeDown = true;
                else
                    Debug.Log("Swipe up"); // swipeUp = true;
            }

            Reset();
        }
    }
    private void Reset() {
        startTouch = swipeDelta = Vector2.zero;
        isDragging = false;
    }

    public Vector2 SwipeDelta { get { return swipeDelta; } }
    public bool SwipeLeft {  get { return swipeLeft; } }
    public bool SwipeRight {  get { return swipeRight; } }
    public bool SwipeUp { get { return swipeUp; } }
    public bool SwipeDown { get { return swipeDown; } }
}
