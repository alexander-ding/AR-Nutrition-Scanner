using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel12Switch : MonoBehaviour
{
    public GameObject Panel1;
    public GameObject Panel2;

    public void click()
    {
        Panel1.SetActive(true);
        Panel2.SetActive(false);

    }
}
