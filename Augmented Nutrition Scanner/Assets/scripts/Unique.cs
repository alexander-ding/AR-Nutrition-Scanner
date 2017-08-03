using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unique {
	static public string ApiKey = "c0AxLI8FC6mshMcrq5buOTtMbZnhp1Yn22SjsnHQ3za3k7XBQG";
	static public string Home = "https://nutritionix-api.p.mashape.com/v1_1";
	//static public string Home = "localhost:1234/api";
	static public Hashtable PopUps = new Hashtable();
    static public Hashtable Displays = new Hashtable();
	static public Dictionary<string, BarInfo> BarInfos = new Dictionary<string, BarInfo>() {
		{"carbs", new BarInfo("carbs", "g", BarInfo.StringToColor("#FFCC33FF") )},
		{"calories", new BarInfo("calories", "kcal", BarInfo.StringToColor("#FF9934FF"))},
		{"sodium", new BarInfo("sodium", "mg", BarInfo.StringToColor("#FF9934FF"))},
		{"fat", new BarInfo("fat", "g", BarInfo.StringToColor("#FF3333FF"))},
		{"protein", new BarInfo("protein", "g", BarInfo.StringToColor("#4073B9FF"))},
		{"sugar", new BarInfo("sugar", "g", BarInfo.StringToColor("#33CC33FF"))},
		{"unknown", new BarInfo("unknown", "", BarInfo.StringToColor("#E2BFA9FF"))},
	};
    static public Dictionary<string, int> StringToIndices = new Dictionary<string, int>() {
        {"overview", 0},
        {"calories", 1},
        {"sodium", 2},
        {"sugar", 3},
        {"fat", 4},
        {"protein", 5},
    };
}
