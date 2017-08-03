using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorArrayRotate : MonoBehaviour {

	static Color32[] colorResult;

	public enum Rotate
	{
		Left,
		Right
	}

	public static Color32[] RotateTexture(Color32[] colorSource, int width, int height, Rotate rotation)
	{
		colorResult = new Color32[colorSource.Length];

		int count = 0;
		int newWidth = height;
		int newHeight = width;
		int index = 0;

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if(rotation == Rotate.Left)
					index = (width * (height - j)) - width + i;
				else
					index = (width * (j + 1)) - (i + 1);

				colorResult[count] = colorSource[index];
				count++;
			}
		}
		 
		return colorSource;
	}
}