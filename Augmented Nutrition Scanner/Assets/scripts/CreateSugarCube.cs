using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class CreateSugarCube : MonoBehaviour {
	public GameObject cube;
	private uint _total = 0;
	private uint _current = 0;
	private uint _frame = 1;
	private uint _currentFrame = 1;
	// Use this for initialization
	void Start () {
	}
	public void Test(int total) {
		MakeSugarCubes ((uint)total, 60);
	}
	public void MakeSugarCubes(uint total, uint frame) {
		  _frame = frame; _currentFrame = 1;
		if (IsGenerating ()) {
			_total += total;
		} else {
			_total = total; _current = 0;
		}
			
	}
	void Update () {
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
			GameObject go = Instantiate (cube);
			go.transform.position = new Vector3(Random.Range(-3f, 3f),50 + Random.Range(-3f, 3f),Random.Range(-3f, 3f)) ;
			go.transform.eulerAngles = new Vector3 (Random.Range (0, 180), Random.Range (0, 180), Random.Range (0, 180));
			go.SetActive (true);
			_current++;
		}
		_currentFrame++;
	}
}
