#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileManager
struct  TileManager_t3422405329  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TileManager::activeTiles
	List_1_t1125654279 * ___activeTiles_2;
	// UnityEngine.GameObject[] TileManager::tilePrefabs
	GameObjectU5BU5D_t3057952154* ___tilePrefabs_3;
	// UnityEngine.Transform TileManager::playerTransform
	Transform_t3275118058 * ___playerTransform_4;
	// System.Single TileManager::spawnZ
	float ___spawnZ_5;
	// System.Single TileManager::tileLength
	float ___tileLength_6;
	// System.Int32 TileManager::numTiles
	int32_t ___numTiles_7;
	// System.Single TileManager::safeZone
	float ___safeZone_8;
	// System.Int32 TileManager::lastIndex
	int32_t ___lastIndex_9;

public:
	inline static int32_t get_offset_of_activeTiles_2() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___activeTiles_2)); }
	inline List_1_t1125654279 * get_activeTiles_2() const { return ___activeTiles_2; }
	inline List_1_t1125654279 ** get_address_of_activeTiles_2() { return &___activeTiles_2; }
	inline void set_activeTiles_2(List_1_t1125654279 * value)
	{
		___activeTiles_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeTiles_2, value);
	}

	inline static int32_t get_offset_of_tilePrefabs_3() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___tilePrefabs_3)); }
	inline GameObjectU5BU5D_t3057952154* get_tilePrefabs_3() const { return ___tilePrefabs_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_tilePrefabs_3() { return &___tilePrefabs_3; }
	inline void set_tilePrefabs_3(GameObjectU5BU5D_t3057952154* value)
	{
		___tilePrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___tilePrefabs_3, value);
	}

	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___playerTransform_4)); }
	inline Transform_t3275118058 * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_t3275118058 * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_4, value);
	}

	inline static int32_t get_offset_of_spawnZ_5() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___spawnZ_5)); }
	inline float get_spawnZ_5() const { return ___spawnZ_5; }
	inline float* get_address_of_spawnZ_5() { return &___spawnZ_5; }
	inline void set_spawnZ_5(float value)
	{
		___spawnZ_5 = value;
	}

	inline static int32_t get_offset_of_tileLength_6() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___tileLength_6)); }
	inline float get_tileLength_6() const { return ___tileLength_6; }
	inline float* get_address_of_tileLength_6() { return &___tileLength_6; }
	inline void set_tileLength_6(float value)
	{
		___tileLength_6 = value;
	}

	inline static int32_t get_offset_of_numTiles_7() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___numTiles_7)); }
	inline int32_t get_numTiles_7() const { return ___numTiles_7; }
	inline int32_t* get_address_of_numTiles_7() { return &___numTiles_7; }
	inline void set_numTiles_7(int32_t value)
	{
		___numTiles_7 = value;
	}

	inline static int32_t get_offset_of_safeZone_8() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___safeZone_8)); }
	inline float get_safeZone_8() const { return ___safeZone_8; }
	inline float* get_address_of_safeZone_8() { return &___safeZone_8; }
	inline void set_safeZone_8(float value)
	{
		___safeZone_8 = value;
	}

	inline static int32_t get_offset_of_lastIndex_9() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___lastIndex_9)); }
	inline int32_t get_lastIndex_9() const { return ___lastIndex_9; }
	inline int32_t* get_address_of_lastIndex_9() { return &___lastIndex_9; }
	inline void set_lastIndex_9(int32_t value)
	{
		___lastIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
