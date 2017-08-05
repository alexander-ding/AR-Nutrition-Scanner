using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel3Switch : MonoBehaviour
{
    public GameObject Panel1;
    public GameObject Panel2;
    public GameObject Button3;
    public GameObject Panel3;
    public void click()
    {
        Panel1.SetActive(false);
        Panel2.SetActive(false);
        Button3.SetActive(false);
        Panel3.SetActive(true);

    }
}
