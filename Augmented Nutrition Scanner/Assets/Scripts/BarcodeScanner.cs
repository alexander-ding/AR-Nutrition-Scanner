using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using ZXing;
using ZXing.QrCode;


public class BarcodeScanner : MonoBehaviour {
    private WebCamTexture camTexture = null;
    private Rect screenRect;
    private void Start()
    {
        InvokeRepeating("Scan", 0f, 0.6f);
    }
    void Update()
    {
        if (camTexture != null)
        {
            camTexture.Play();
        }
    }
    public void SetCamTexture (WebCamTexture input)
    {
        camTexture = input;
    }
    void Scan()
    {
        if (camTexture == null) return;
        // drawing the camera on screen
        // GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);
        // do the reading — you might want to attempt to read less often than you draw on the screen for performance sake
        try
        {
            IBarcodeReader barcodeReader = new BarcodeReader();
            // decode the current frame
            var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);
            if (result != null)
            {
                Debug.Log("DECODED TEXT FROM QR: " +result.Text);
                foreach (ResultPoint point in result.ResultPoints)
                {
                    Debug.Log("X: " + point.X + "; Y: " + point.Y);
                }
                
                PopUpManagement.NewPopUp(result.Text);
            }
        }
        catch (UnityException ex) { Debug.LogWarning(ex.Message); }
    }
}