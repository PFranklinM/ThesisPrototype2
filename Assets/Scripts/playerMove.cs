using UnityEngine;
using System.Collections;

public class playerMove : MonoBehaviour {

	public GameObject player;

	public GameObject cameraCollider;

//	public GameObject playerShadow;

	Rigidbody2D rb;

	int jumpCounter;

	bool playerIsFlying;

	public bool screenTransition;

//	float shadowMoveAmount = 0.5f;
//	float shadowMoveTimer = 0;

	bool facingLeft;
	bool facingRight;

	bool playerIsAirborn;

	// Use this for initialization
	void Start () {

		rb = GetComponent<Rigidbody2D>();

		jumpCounter = 0;

		playerIsFlying = false;

		facingLeft = false;
		facingRight = true;

		playerIsAirborn = false;

		screenTransition = false;
	
	}
	
	// Update is called once per frame
	void Update () {

		Vector3 playerPos = new Vector3 (player.transform.position.x,
			player.transform.position.y,
			player.transform.position.z);

//		Vector3 shadowPos = new Vector3 (playerShadow.transform.position.x,
//			playerShadow.transform.position.y,
//			playerShadow.transform.position.z);

		if (screenTransition == false) {

			if (Input.GetKey (KeyCode.A)) {
				playerPos.x -= 15 * Time.deltaTime;
				facingLeft = true;
				facingRight = false;
			}

			if (Input.GetKey (KeyCode.D)) {
				playerPos.x += 15 * Time.deltaTime;
				facingLeft = false;
				facingRight = true;
			}
		}

		if (facingLeft == true) {
//			shadowPos.x = playerPos.x + 1.5f;
		}

		if (facingRight == true) {
//			shadowPos.x = playerPos.x - 1.5f;
		}

//		shadowPos.y -= shadowMoveAmount * Time.deltaTime;
//
//		shadowMoveTimer += Time.deltaTime;
//
//		if(shadowMoveTimer >= 1) {
//			shadowMoveAmount = -shadowMoveAmount;
//			shadowMoveTimer = 0;
//		}

		if (screenTransition == false) {

			if (Input.GetKeyDown (KeyCode.Space) && playerIsFlying == false) {
				jumpCounter++;

				if (jumpCounter <= 2) {

					rb.velocity = new Vector3 (0, 60, 0);
				}
			}

			if (Input.GetKey (KeyCode.Space)) {
				playerIsAirborn = true;
			}

			if (playerIsAirborn == true) {
//			shadowPos.y = playerPos.y + 0.5f;
			}

		}

		if (screenTransition == true) {
			playerPos.x += 15 * Time.deltaTime;
		}

//		playerShadow.transform.position = shadowPos;

		player.transform.position = playerPos;

		Physics2D.IgnoreCollision(cameraCollider.GetComponent<Collider2D>(), player.GetComponent<Collider2D>());
	
	}

	void FixedUpdate () {

		if (screenTransition == false) {

			if (Input.GetKey (KeyCode.W)) {
				player.GetComponent<Rigidbody2D> ().gravityScale = 0.0f;
				player.GetComponent<Rigidbody2D> ().drag = 10.0f;
				playerIsFlying = true;
				playerIsAirborn = true;

				if (playerIsFlying == true) {
					player.GetComponent<Rigidbody2D> ().AddForce (player.transform.up * 175f);
				}
			}

			if (Input.GetKey (KeyCode.S) && playerIsFlying == true) {
				player.GetComponent<Rigidbody2D> ().AddForce (player.transform.up * -175f);
			}

		}

	}

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.gameObject.tag == "ground") {

			Vector3 playerPos = new Vector3 (player.transform.position.x,
				player.transform.position.y,
				player.transform.position.z);

//			Vector3 shadowPos = new Vector3 (playerShadow.transform.position.x,
//				playerShadow.transform.position.y,
//				playerShadow.transform.position.z);

			jumpCounter = 0;
			playerIsFlying = false;
			playerIsAirborn = false;

//			shadowPos.y = playerPos.y + 0.5f;

			player.GetComponent<Rigidbody2D> ().drag = 1.0f;
			player.GetComponent<Rigidbody2D> ().gravityScale = 15.0f;

//			playerShadow.transform.position = shadowPos;

			player.transform.position = playerPos;
		}

		if (coll.gameObject.tag == "enemy") {
//			Debug.Log ("player was hit");
		}

	}
}
