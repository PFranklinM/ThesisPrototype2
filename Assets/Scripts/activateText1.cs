using UnityEngine;
using System.Collections;

public class activateText1 : MonoBehaviour {

	public TextAsset theText;

	public int startLine;
	public int endLine;

	public textBoxManager textBox;

	public GameObject lockedInWall;

	// Use this for initialization
	void Start () {

		textBox = FindObjectOfType<textBoxManager> ();

		lockedInWall.SetActive (false);
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D coll){
		if (coll.gameObject.tag == "player") {
			textBox.reloadScript (theText);
			textBox.currentLine = startLine;
			textBox.endAtLine = endLine;
			textBox.enableTextBox ();

			lockedInWall.SetActive (true);
		}
	}
}
