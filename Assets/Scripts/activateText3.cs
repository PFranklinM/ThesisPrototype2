using UnityEngine;
using System.Collections;

public class activateText3 : MonoBehaviour {

	public TextAsset theText;

	public int startLine;
	public int endLine;

	public mainCharacterTextBoxManager MCTextBox;
	public shadowCharacterTextBoxManager SCTextBox;

	bool textHasPlayed = false;

//	bool otherCharacterTalk = false;

	public activateText2 previousText;

	// Use this for initialization
	void Start () {

		MCTextBox = FindObjectOfType<mainCharacterTextBoxManager> ();
		SCTextBox = FindObjectOfType<shadowCharacterTextBoxManager> ();
		previousText = FindObjectOfType<activateText2> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		if (previousText.otherCharacterTalk == true && SCTextBox.isActive == false) {
			nextPlayerTalking ();
		}
	
	}

	void nextPlayerTalking(){
		MCTextBox.reloadScript (theText);
		MCTextBox.currentLine = startLine;
		MCTextBox.endAtLine = endLine;
		MCTextBox.enableTextBox ();

		previousText.otherCharacterTalk = false;
	}
}
