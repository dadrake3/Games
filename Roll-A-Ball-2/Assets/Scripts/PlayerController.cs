using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class PlayerController : MonoBehaviour {

	public float speed;
	private int count;
	public Text countText;
	public Text winText;
	public GameObject warpA;
	public GameObject warpB;
	public float boost;
	public float jumpForce = 2.0f;
	public float maxSpeed = 10f;
	public GameObject gameOver;

	private bool hasLeft = false; 
	private Vector3 jump;
	private bool flag = true;
	private bool isGrounded;
	private Rigidbody rb;
	private Transform playerTransform;
	private Animator animator;
	private Vector3 scaleDown;
	private Vector3 scaleUp;


	void Start(){
		rb = GetComponent<Rigidbody> ();
		playerTransform = GetComponent<Transform> ();
		animator = GetComponent<Animator> ();
		count = 0;
		setCountText ();
		winText.text = "";
		jump = new Vector3(0.0f, 2.0f, 0.0f);			
		scaleDown = new Vector3(0.25f, 0.25f, 0.25f);
		scaleUp = new Vector3(2.0f, 2.0f, 2.0f);


	}

	void Update(){

		if (rb.transform.position.y < -1.0) {
			gameover ();
		}
		/*if (Input.GetKey ("down")) {
			playerTransform.localScale = scaleDown;
			animator.SetTrigger ("ScaleDown");
		}
		if (Input.GetKey ("down")) {
			playerTransform.localScale = scaleUp;
			animator.SetTrigger ("ScaleUp");
		}*/
	}

	//where physics calculations will go
	void FixedUpdate(){

		if(rb.velocity.magnitude > maxSpeed)
		{
			rb.velocity = rb.velocity.normalized * maxSpeed;
		}

		if (flag) {
			float moveHorizontal = Input.GetAxis ("Horizontal");
			float moveVertical = Input.GetAxis ("Vertical");

			Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
			rb.AddForce (movement * speed);
		}

	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Pickup")) {
			other.gameObject.SetActive (false);
			count++;
			setCountText ();
		} else if (other.gameObject.CompareTag ("StopPill")) {
			other.gameObject.SetActive (false);
			rb.velocity = Vector3.zero;
			rb.angularVelocity = Vector3.zero;
			flag = false;
			Invoke ("foo", 1.0f);
		} else if (other.gameObject.CompareTag ("Speedup")) {
			//Vector3 temp = new Vector3 (rb.velocity.x, 0.0f, rb.velocity.z * 10);
			maxSpeed = maxSpeed * 2;
			rb.velocity = rb.velocity * boost;

		} else if (other.gameObject.CompareTag ("WarpA")) {
			rb.position = GameObject.Find ("WarpB").transform.position + new Vector3 (2, 0.0f, 2);
		} else if (other.gameObject.CompareTag ("WarpB")) {
			rb.position = GameObject.Find ("WarpA").transform.position + new Vector3 (2, 0.0f, 2);
		} else if (other.gameObject.CompareTag ("Floor")) {
			isGrounded = true;
		} else if (other.gameObject.CompareTag ("Obstacle")) {
			this.GetComponent<SphereCollider> ().enabled = false;
		}
	}

	void OnTriggerExit(Collider other)
	{
		if (other.gameObject.CompareTag ("WarpA") || other.gameObject.CompareTag ("WarpB")){
			hasLeft = true;
		}
	}

	void setCountText(){
		countText.text = "Count: " + count.ToString ();
	}

	void foo() {
		flag = true;
	}

	void gameover(){
		gameOver.SetActive(true);
	
	}



}


