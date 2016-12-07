using UnityEngine;
using System.Collections;

public class activateText1 : MonoBehaviour {

	public TextAsset theText;

	public int startLine;
	public int endLine;

	public mainCharacterTextBoxManager textBox;

	// Use this for initialization
	void Start () {

		textBox = FindObjectOfType<mainCharacterTextBoxManager> ();

		textBox.reloadScript (theText);
		textBox.currentLine = startLine;
		textBox.endAtLine = endLine;
		textBox.enableTextBox ();
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
