using UnityEngine;
using System.Collections;

using System;
using System.Net;
using System.Net.Mail;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;

public class emailTest : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.gameObject.tag == "player") {

			MailMessage mail = new MailMessage();

			mail.From = new MailAddress("paul.frank.mallon@gmail.com");
			mail.To.Add("PFMfilm@gmail.com");
			mail.Subject = "Santak";
			mail.Body = "The player touched you in a game!";

			SmtpClient smtpServer = new SmtpClient("smtp.gmail.com");
			smtpServer.Port = 587;
			smtpServer.Credentials = new System.Net.NetworkCredential("paul.frank.mallon@gmail.com", "Itsatrap1!") as ICredentialsByHost;
			smtpServer.EnableSsl = true;
			ServicePointManager.ServerCertificateValidationCallback = 
				delegate(object s, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors) 
			{ return true; };
			smtpServer.Send(mail);
			Debug.Log("success");

		}
	}
}
