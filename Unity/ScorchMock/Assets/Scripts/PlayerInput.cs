﻿using UnityEngine;
using System.Collections;

[RequireComponent(typeof(PlayerPhysics))]
public class PlayerInput: MonoBehaviour {

	//Player Handling
	public float gravity = 20;
	public float speed = 8;
	public float acceleration = 30;
	public float jumpHeight = 12;

	private float currentSpeed;
	private float targetSpeed;
	private Vector2 amountToMove;

	private PlayerPhysics PlayerPhysics;

	// Use this for initialization
	void Start () {
		PlayerPhysics = GetComponent<PlayerPhysics>();


	}
	
	// Update is called once per frame
	void Update () {
		targetSpeed = Input.GetAxisRaw ("Horizontal") * speed;
		currentSpeed = IncrementTowards (currentSpeed, targetSpeed, acceleration);


		if (PlayerPhysics.grounded) {
			amountToMove.y = 0;
			// Jump
			if (Input.GetButtonDown("Jump")){
				amountToMove.y = jumpHeight;
			}
		}

		amountToMove.x = currentSpeed;
		amountToMove.y -= gravity * Time.deltaTime;
		PlayerPhysics.move(amountToMove * Time.deltaTime);
	}

	private float IncrementTowards(float n, float target, float a){

				if (n == target) {
						return n;
				} else {
						float dir = Mathf.Sign (target - n); // must n be increased or decreased to get closer to target
						n += a * Time.deltaTime * dir;
						return (dir == Mathf.Sign (target - n)) ? n : target; //id n has now passed target then return target, otherwise return n
				}
		}
}
