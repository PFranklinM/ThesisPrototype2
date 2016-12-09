using UnityEngine;
using System.Collections;

public class audioManager : MonoBehaviour {

	public AudioSource audio1;
	public AudioSource audio2;

	public bouncingEnemySpawner combatManager;

	public shadowCharacterTextBoxManager SCTextBox;
	public mainCharacterTextBoxManager MCTextBox;

	// Use this for initialization
	void Start () {

		audio1.Play ();
		audio1.volume = 1f;

		combatManager = FindObjectOfType<bouncingEnemySpawner> ();
		SCTextBox = FindObjectOfType<shadowCharacterTextBoxManager> ();
		MCTextBox = FindObjectOfType<mainCharacterTextBoxManager> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		if (combatManager.playerInCombat == true && audio2.isPlaying == false) {
			playSong2 ();

			if (audio1.volume > 0) {
				audio1.volume = Mathf.Lerp (audio1.volume, 0.0f, 1.0f * Time.deltaTime * 25f);
			}

			if (audio2.volume < 1) {
				audio2.volume = Mathf.Lerp (audio2.volume, 1.0f, 1.0f * Time.deltaTime * 25f);
			}
			audio1.Pause ();
		}

		if (combatManager.playerInCombat == false && audio1.isPlaying == false) {
			playSong1 ();

			if (audio2.volume > 0) {
				audio2.volume = Mathf.Lerp (audio1.volume, 0.0f, 1.0f * Time.deltaTime * 25f);
			}

			if (audio1.volume < 1) {
				audio1.volume = Mathf.Lerp (audio2.volume, 1.0f, 1.0f * Time.deltaTime * 25f);
			}
			audio2.Pause ();
		}
	
	}

	void playSong2(){
		audio2.Play ();
	}

	void playSong1(){
		audio1.Play ();
	}
}
