using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class playerMove : MonoBehaviour {

	public GameObject player;

	public GameObject cameraCollider;

	public GameObject playerShadow;

	Rigidbody2D rb;

	int jumpCounter;

	bool playerIsFlying;

	public bool screenTransition;

	float shadowMoveAmount = 0.5f;
	float shadowMoveTimer = 0;

	public bool facingLeft;
	public bool facingRight;

	bool playerIsAirborn;

	int health;

	public GameObject healthText;

	//textBoxMovement
	public bool canMove;

	//player ability bools
	public bool playerHasFlight;
	public bool playerHasMelee;
	public bool playerHasShield;
	public bool playerHasDoubleJump;

	//player has met shadow bool
	public bool playerHasShadow;

	// Use this for initialization
	void Start () {

		rb = GetComponent<Rigidbody2D>();

		jumpCounter = 0;

		playerIsFlying = false;

		facingLeft = false;
		facingRight = true;

		playerIsAirborn = false;

		screenTransition = false;

		health = 10;

		playerHasFlight = true;

		playerHasShadow = false;
	
	}
	
	// Update is called once per frame
	void Update () {

		if (canMove == false) {
			return;
		}

		Vector3 playerPos = new Vector3 (player.transform.position.x,
			player.transform.position.y,
			player.transform.position.z);

		Vector3 shadowPos = new Vector3 (playerShadow.transform.position.x,
			playerShadow.transform.position.y,
			playerShadow.transform.position.z);

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

		if (playerHasShadow == true) {
			if (facingLeft == true) {
				shadowPos.x = playerPos.x + 3.5f;
			}

			if (facingRight == true) {
				shadowPos.x = playerPos.x - 3.5f;
			}
		}

		shadowPos.y -= shadowMoveAmount * Time.deltaTime;

		shadowMoveTimer += Time.deltaTime;

		if(shadowMoveTimer >= 1) {
			shadowMoveAmount = -shadowMoveAmount;
			shadowMoveTimer = 0;
		}

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

			if (playerHasShadow == true) {
				if (playerIsAirborn == true) {
					shadowPos.y = playerPos.y + 0.5f;
				}
			}

		}

		//screen transitions
		if (screenTransition == true && facingRight == true) {
			playerPos.x += 10 * Time.deltaTime;
		}

		if(screenTransition == true && facingLeft == true) {
			playerPos.x -= 10 * Time.deltaTime;
		}

		playerShadow.transform.position = shadowPos;

		player.transform.position = playerPos;

//		Physics2D.IgnoreCollision(cameraCollider.GetComponent<Collider2D>(), player.GetComponent<Collider2D>());

		//health and dying
		Text playerHealthText = healthText.GetComponent<Text>();
		playerHealthText.text = "Health: " + health;

		if (health <= 0) {
			Application.LoadLevel ("Dead");
		}
	
	}

	void FixedUpdate () {

		if (canMove == false) {
			return;
		}

		if (screenTransition == false) {

			if (playerHasFlight == true) {
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

	}

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.gameObject.tag == "ground") {

			Vector3 playerPos = new Vector3 (player.transform.position.x,
				player.transform.position.y,
				player.transform.position.z);

			Vector3 shadowPos = new Vector3 (playerShadow.transform.position.x,
				playerShadow.transform.position.y,
				playerShadow.transform.position.z);

			jumpCounter = 0;
			playerIsFlying = false;
			playerIsAirborn = false;


			if (playerHasShadow == true) {
				shadowPos.y = playerPos.y + 0.5f;
			}

			player.GetComponent<Rigidbody2D> ().drag = 1.0f;
			player.GetComponent<Rigidbody2D> ().gravityScale = 15.0f;

			playerShadow.transform.position = shadowPos;

			player.transform.position = playerPos;
		}

		if (coll.gameObject.tag == "enemy") {

			health -= 1;
		}

	}
}
