using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PieGraph : MonoBehaviour {
    public float[] values;
    public Color[] wedgeColors;
    public Image wedgePrefab;

    private const int totalFrames = 100;

    private float total = 0f;
    private int length = 0;
    private Vector2[] instructions;
    private Image[] wedges;
    private int currentID = int.MaxValue;
	// Use this for initialization
	void Start () {
        MakeGraph(); // for testing
	}
    public void SetValues(float[] inputs){
        values = inputs;
    }
    void Initialize() {
        length = values.Length;
        instructions = new Vector2[length];
        wedges = new Image[length];
        total = 0f;
        currentID = int.MaxValue;
    }
	void MakeGraph() {
        Initialize();
        for (int i = 0; i < length; i++) {
            total += values[i];
        }
        float current = 0f;
        for (int i = 0; i < length; i++)
        {
            instructions[i].x = current;
            current += values[i] / total;
            if (i == (length - 1)) {
                instructions[i].y = 1;
            } else {
                instructions[i].y = current;
            }
            Image newWedge = Instantiate(wedgePrefab) as Image;
            newWedge.transform.SetParent(transform, false);
            newWedge.color = wedgeColors[i];
            newWedge.transform.SetAsFirstSibling();
            wedges[i] = newWedge;
        }
        currentID = 0;
    }
    void Step(int id) {
        if (id >= length) return;
        float desired = instructions[id].y;
        float current = wedges[id].fillAmount;
        float step = 1f / totalFrames;
        if (Mathf.Abs(desired - current - step) < step)
        {
            wedges[id].fillAmount = desired;
            currentID++;
            if (currentID < length)
            {
                wedges[currentID].fillAmount = instructions[currentID].x;
            }
        } else
        {
            wedges[id].fillAmount = current + step;
        }
    }
	// Update is called once per frame
	void Update () {
		if (currentID < length)
        {
            Step(currentID);
        }
	}
}
