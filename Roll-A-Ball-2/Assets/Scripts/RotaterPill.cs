using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotaterPill : MonoBehaviour {

	// Update is called once per frame
	void Update () {
		transform.Rotate (new Vector3 (0, -300, 0) * Time.deltaTime);
	}
}