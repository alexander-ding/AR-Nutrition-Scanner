using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class SugarCubes : MonoBehaviour {
	public GameObject cube;
    public GameObject parent;
    public string upc;
	private uint _total = 0;
	private uint _current = 0;
	private uint _frame = 1;
	private uint _currentFrame = 1;
    private Vector3 _coord = new Vector3(0, 0, 0);
    private float _deltaXZ;
    private float _deltaY;
	// Use this for initialization
	void Start () {
		RetainOrientation ();
	}
	public void Test(int total) {
		MakeSugarCubes ((uint)total, new Vector3(0, 40, 0)); // (height - 1) * 2
	}
    // deltaXZ: weight * 3/2; deltaY: (height-1)*1.5
    public void MakeSugarCubes(uint total, Vector3 coord, float deltaXZ = 10f, float deltaY = 30f, uint frame = 60) {
		Transform tf = GameObject.FindGameObjectWithTag ("Wall").transform;
		if (IsGenerating ()) {
			_total += total;
		} else {
			_total = total; _current = 0;
		}
        if ((float)total / (float)frame > 1.2f) {
            frame = (uint) ((float) frame * ((float)total / (float)frame) / 1.2f);
        }
        _frame = frame; _currentFrame = 1; _coord = coord; _deltaXZ = deltaXZ; _deltaY = deltaY;
    }
	private void RetainOrientation() {
		parent.transform.forward = Vector3.forward;
	}
	void Update () {
		RetainOrientation ();
		if (IsGenerating())
			NewSugarCubes (CalculateNumbers());
	}
	private uint CalculateNumbers() {
		uint trial = (_total - _current) / (_frame - _currentFrame);
		if (trial * (_frame - _currentFrame) < (_total - _current)) {
			trial++;
		} else if (trial * (_frame - _currentFrame) > (_total - _current)){
			trial--;
		}
		return trial;
	}
	public bool IsGenerating() {
		return (_total > _current);
	}
	private void NewSugarCubes(uint number) {
		for (int i = 0; i < number; i++) {
			GameObject go = Instantiate<GameObject> (cube, parent.transform.GetChild(0).transform.GetChild(1).transform);
            go.transform.localPosition = new Vector3(_coord.x + Random.Range(-_deltaXZ, _deltaXZ), _coord.y + Random.Range(-_deltaY, _deltaY), _coord.z + Random.Range(-_deltaXZ, _deltaXZ)) ;
			go.transform.eulerAngles = new Vector3 (Random.Range (0, 180), Random.Range (0, 180), Random.Range (0, 180));
			go.SetActive (true);
			_current++;
		}
		_currentFrame++;
	}
    public void Destroy() {
        Unique.Displays.Remove(upc);
        Object.Destroy(parent);
        
    }
}
