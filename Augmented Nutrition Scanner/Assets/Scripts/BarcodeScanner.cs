using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using ZXing;
using ZXing.OneD;
using ZXing.Common;


public class BarcodeScanner : MonoBehaviour {
	private static readonly List<BarcodeFormat>  Fmts = new List<BarcodeFormat> { BarcodeFormat.EAN_13, BarcodeFormat.EAN_8, BarcodeFormat.QR_CODE };

	private WebCamTexture camTexture = null;
	private bool cameraWorking = false;
	private Rect screenRect;
	private void Start()
	{
		InvokeRepeating("Scan", 0f, 0.6f);
	}
	void Update()
	{
		if (camTexture != null && !cameraWorking) {
			StartCoroutine(CheckCamera ());
		}
	}
	IEnumerator CheckCamera() {
		if (camTexture.didUpdateThisFrame) { 
			Color32[] colors = null; 
			while (camTexture.width <= 16) { 
				colors = camTexture.GetPixels32(); 
				yield return new WaitForEndOfFrame(); 
			} 
			cameraWorking = true;
		}
	}
	public void SetCamTexture (WebCamTexture input)
	{
		camTexture = input;
	}
	void Scan()
	{
		if (camTexture == null || !cameraWorking) return;
		// drawing the camera on screen
		// GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);
		// do the reading — you might want to attempt to read less often than you draw on the screen for performance sake
		try
		{
			BarcodeReader barcodeReader = new BarcodeReader
			{
				Options =
				{
					PossibleFormats = Fmts,
					ReturnCodabarStartEnd = true,
					PureBarcode = false
				}
				};
			// decode the current frame
			var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);
			if (result != null)
			{
				Debug.Log("DECODED TEXT: " +result.Text);
				GeneratePopUp(result.Text, result.ResultPoints);
			}
		}
		catch (UnityException ex) { Debug.LogWarning(ex.Message); }
	}
	void GeneratePopUp(string upc, ResultPoint[] points) {
		Vector2 screenPointAvg = new Vector2 ();
		foreach (ResultPoint point in points) {
			screenPointAvg += new Vector2 (point.X, point.Y);
		}
		screenPointAvg /= points.Length;
		float dist = GameObject.FindGameObjectWithTag ("WebCam").GetComponent<Canvas> ().planeDistance / 1.8f;
		Debug.Log (dist);
		Vector3 input = new Vector3 (screenPointAvg.x, screenPointAvg.y, dist);
		PopUpManagement.NewPopUp(upc, Camera.main.ScreenToWorldPoint (input));
	}
}