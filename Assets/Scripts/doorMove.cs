using UnityEngine;
using System.Collections;

public class doorMove : MonoBehaviour {

	bool doorIsClosed = true;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.gameObject.tag == "bullet") {
			Vector3 doorPos = new Vector3 (transform.position.x,
				transform.position.y,
				transform.position.z);

			if (doorIsClosed == true) {
				doorPos.y += 15f;
				doorIsClosed = false;
			}

			transform.position = doorPos;
		}
	}
}
