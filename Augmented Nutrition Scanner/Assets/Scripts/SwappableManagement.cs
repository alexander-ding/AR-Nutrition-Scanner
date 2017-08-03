using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwappableManagement : MonoBehaviour {
    public MiddleManagement[] pages;
    private const int frames = 60;
    private NutritionJSON nutrition;
    private float width;
    private List<Swiper> swipers = new List<Swiper>();
    private MiddleManagement currentPage;
	// Use this for initialization
	void Start () {
        GetWidth();
        foreach (MiddleManagement page in pages)
        {
            Debug.Log("Type: " + page.type);
        }
        MockJSON();
	}
    public void Initialize(NutritionJSON input)
    {
        nutrition = input;
        foreach (MiddleManagement page in pages) {
            page.Initialize(input);
        }
        for (int index = 0; index < pages.Length; index++)
        {
            if (pages[index].type != 0)
            {
                SetRight(index);
                pages[index].gameObject.SetActive(false);
            }
        }
        currentPage = pages[0];
        SetValues();
    }
    void GetWidth() { width = Screen.width; } // to be fixed
    void SetRight(int index) {
        GetWidth();
        RectTransform tf = pages[index].gameObject.GetComponent<RectTransform>();
        tf.localPosition = new Vector3 (width, 0, 0);
    }
    public void DisableExcept(int index) {
        for (int i = 0; i < pages.Length; i++) {
            if (i != index)
            {
                pages[i].gameObject.SetActive(false);
            }
        }
    }
    public void SwipeInLeft(string input) {
        int index;
        Unique.StringToIndices.TryGetValue(input, out index);
        _SwipeInLeft(index);
	}

    void _SwipeInLeft(int index) {
        pages[index].gameObject.SetActive(true);

        Swiper swiper = new Swiper(this, pages[index], 0f, index);
        swipers.Add(swiper);
        pages[index].SetValue();
    }
    public void SwipeInRight(string input)
    {
        int index;
        Unique.StringToIndices.TryGetValue(input, out index);
        _SwipeInRight(index);
    }
    void _SwipeInRight(int index)
    {
        pages[index].gameObject.SetActive(true);
        GetWidth();
        Swiper swiper = new Swiper(this, pages[index], width, index);
        swipers.Add(swiper);
        pages[index].SetValue();
    }

    void SetValues() {
        foreach (MiddleManagement page in pages) {
            page.SetValue();
        }
	}
	// Update is called once per frame
	void Update () {
		foreach (Swiper swiper in swipers) {
            swiper.Update();
        }
        foreach (Swiper swiper in swipers)
        {
            if (!swiper.ShouldStep()) {
                swipers.Remove(swiper);
            }
        }
    }
    void MockJSON()
    {
        var headers = new Dictionary<string, string> { };
        headers.Add("X-Mashape-Authorization", Unique.ApiKey);
        WWW www = new WWW(Unique.Home + "/item?upc=" + "123", null, headers);

        StartCoroutine(WaitForRequest(www));
    }
    IEnumerator WaitForRequest(WWW www)
    {
        yield return www;
        if (www.error == "")
        {
            nutrition = JsonUtility.FromJson<NutritionJSON>(www.text);
            Initialize(nutrition);
        }
        else
        {
            Debug.Log("WWW Error: " + www.error);
        }

    }
}
