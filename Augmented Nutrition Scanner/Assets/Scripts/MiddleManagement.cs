using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiddleManagement : MonoBehaviour {
    public int type; // 0 = overview; 1 = calories; 2 = nutritions;
    public NutritionPage nutritionPage;
    public CaloriesPage caloriesPage;
    public OverviewPage overviewPage;

	// Use this for initialization
	void Start () {
	}
    public void Initialize(NutritionJSON input)
    {
        switch (type)
        {
            case 0:
                overviewPage.Initialize(input);
                return;
            case 1:
                caloriesPage.Initialize(input);
                return;
            case 2:
                nutritionPage.Initialize(input);
                return;
        }
    }
	public void SetValues()
	{
		switch (type)
		{
		case 0:
			overviewPage.SetValues();
			return;
		case 1:
			caloriesPage.SetValues();
			return;
		case 2:
			nutritionPage.SetValues();
			return;
		}
	}
	// Update is called once per frame
	void Update () {
		
	}
}
