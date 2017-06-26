using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Collections.Generic;

public class TileManager : MonoBehaviour {

	public List<GameObject> activeTiles;

	public GameObject[] tilePrefabs;
	public Transform playerTransform;
	private float spawnZ = -12.0f;
	private float tileLength = 20.0f;
	private int numTiles = 7;
	private float safeZone = 15.0f;
	private int lastIndex = 0;



	// Use this for initialization
	void Start () {
		playerTransform = GameObject.FindGameObjectWithTag ("Player").transform;
		activeTiles = new List<GameObject> (10);
		for (int i = 0; i < numTiles; i++) {
			SpawnTile ();
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (playerTransform.position.z - safeZone > (spawnZ - numTiles * tileLength)) {
			SpawnTile ();
			DeleteTile ();
		}

	}

	void SpawnTile(int prefabIndex = -1){
		GameObject go;
		go = Instantiate (tilePrefabs [RandomTile ()]) as GameObject;
		go.transform.SetParent (transform);
		go.transform.position = Vector3.forward * spawnZ;
		spawnZ += tileLength;
		activeTiles.Add (go);
		//print ("tile printed");
	}

	void DeleteTile(){
		Destroy (activeTiles [0]);
		activeTiles.RemoveAt (0);
	}

	int RandomTile(){
		if (tilePrefabs.Length <= 1) {
			return 0;
		}
		int randomIndex = lastIndex;
		while (randomIndex == lastIndex) {
			randomIndex = UnityEngine.Random.Range (0, tilePrefabs.Length);
		}
		return lastIndex = randomIndex;
	}
}
