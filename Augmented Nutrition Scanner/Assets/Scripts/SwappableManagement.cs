using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwappableManagement : MonoBehaviour {
    public MiddleManagement[] pages;
    private const int frames = 60;
    private float width;
    private List<Swiper> swipers = new List<Swiper>();

	private int loadedIndex = 0;
	// Use this for initialization
	void Start () {
        GetWidth();
	}
    public void Initialize(NutritionJSON input)
    {
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
		loadedIndex = 0;
    }
	public void SetValues() {
		foreach (MiddleManagement page in pages) {
			page.SetValues ();
		}
	}
    void GetWidth() { width = Screen.width*2; } // to be fixed
    void SetRight(int index) {
        GetWidth();
        RectTransform tf = pages[index].gameObject.GetComponent<RectTransform>();
        tf.localPosition = new Vector3 (width, 0, 0);
    }
    void DisableExcept(int index) {
        for (int i = 0; i < pages.Length; i++) {
            if (i != index)
            {
                pages[i].gameObject.SetActive(false);
            }
        }
    }
    public void SwipeNutrition(string input) {
		GetWidth ();
        int index;
        Unique.StringToIndices.TryGetValue(input, out index);
		pages [index].gameObject.SetActive (true);
        _Swipe(index, 0f);
		_Swipe (0, -width);
		loadedIndex = index;
	}
	public void SwipeDashboard() {
		GetWidth ();
		pages [0].gameObject.SetActive (true);
		_Swipe(loadedIndex, width);
		_Swipe (0, 0);
		loadedIndex = 0;
	}
	public void Done(int index) {
		if (loadedIndex == index) {
			DisableExcept (index);
		}
	}
	public void TrySwipeDashboard() {
		if (loadedIndex != 0) {

			foreach (Swiper swiper in swipers) {
				swipers.Remove (swiper);
			}
			SwipeDashboard ();
		}
	}
    void _Swipe(int index, float destination) {
        Swiper swiper = new Swiper(this, pages[index], destination, index);
        swipers.Add(swiper);
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

}
