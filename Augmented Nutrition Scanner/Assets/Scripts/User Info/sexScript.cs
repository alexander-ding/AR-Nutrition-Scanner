using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class sexScript : MonoBehaviour
{
    static public bool sex;
    static public bool sexCheck;
	public Button ButtonF;
	public Button ButtonM;
    public void setSex(bool inputSex)
    {
        sex = inputSex;
        if (sex)
		{
			ButtonF.interactable = false;
			ButtonM.interactable = true;
        }
        else
        {
			ButtonM.interactable = false;
			ButtonF.interactable = true;
        }
        sexCheck = true;
    }
}
