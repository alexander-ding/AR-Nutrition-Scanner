using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchToRaycast : MonoBehaviour
{
    public Transform playerTransform;
    Camera cameraComponent;

    Dictionary<int, HitTarget[]> currentHits;

    void Start()
    {
        cameraComponent = GetComponent<Camera>();
        Input.multiTouchEnabled = true;
        currentHits = new Dictionary<int, HitTarget[]>();

        if (playerTransform == null)
            playerTransform = transform;
    }

    void ReceiveTouchBegin(Vector2 position, int id)
    {
        Ray ray = cameraComponent.ScreenPointToRay(position);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            Collider hitCollider = hit.collider;
            Rigidbody hitBody = hit.rigidbody;

            if (hitCollider)
            {
                HitTarget[] targets = hitCollider.GetComponents<HitTarget>();
                foreach (HitTarget target in targets)
                    target.Hit(playerTransform);
                currentHits[id] = targets;
            }
        }
    }

    void ReceiveTouchEnd(int id)
    {
        if (!currentHits.ContainsKey(id))
            return;

        HitTarget[] targets = currentHits[id];
        foreach (HitTarget target in targets)
        {
            if (target)
                target.Release(playerTransform);
        }
        currentHits.Remove(id);
    }

    void ReceiveTouch(Touch touch)
    {
        if (touch.phase == TouchPhase.Began)
            ReceiveTouchBegin(touch.position, touch.fingerId);
        else if (touch.phase == TouchPhase.Ended)
            ReceiveTouchEnd(touch.fingerId);
    }

    void UpdateTouches()
    {
        for (int i = 0; i < Input.touchCount; ++i)
            ReceiveTouch(Input.touches[i]);
    }

    void UpdateMouse()
    {
        if (Input.GetMouseButtonDown(0))
            ReceiveTouchBegin(new Vector2(cameraComponent.pixelWidth / 2.0f, cameraComponent.pixelHeight / 2.0f), 0);
        if (Input.GetMouseButtonUp(0))
            ReceiveTouchEnd(0);
    }

    void Update()
    {
        if (cameraComponent == null)
            return;

        if (Input.touchSupported)
            UpdateTouches();
        else
            UpdateMouse();
    }
}
