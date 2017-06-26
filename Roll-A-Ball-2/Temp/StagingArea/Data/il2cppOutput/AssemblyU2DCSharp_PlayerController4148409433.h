#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Int32 PlayerController::count
	int32_t ___count_3;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t356221433 * ___countText_4;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t356221433 * ___winText_5;
	// UnityEngine.GameObject PlayerController::warpA
	GameObject_t1756533147 * ___warpA_6;
	// UnityEngine.GameObject PlayerController::warpB
	GameObject_t1756533147 * ___warpB_7;
	// System.Single PlayerController::boost
	float ___boost_8;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_9;
	// System.Single PlayerController::maxSpeed
	float ___maxSpeed_10;
	// UnityEngine.GameObject PlayerController::gameOver
	GameObject_t1756533147 * ___gameOver_11;
	// System.Boolean PlayerController::hasLeft
	bool ___hasLeft_12;
	// UnityEngine.Vector3 PlayerController::jump
	Vector3_t2243707580  ___jump_13;
	// System.Boolean PlayerController::flag
	bool ___flag_14;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_15;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t4233889191 * ___rb_16;
	// UnityEngine.Transform PlayerController::playerTransform
	Transform_t3275118058 * ___playerTransform_17;
	// UnityEngine.Animator PlayerController::animator
	Animator_t69676727 * ___animator_18;
	// UnityEngine.Vector3 PlayerController::scaleDown
	Vector3_t2243707580  ___scaleDown_19;
	// UnityEngine.Vector3 PlayerController::scaleUp
	Vector3_t2243707580  ___scaleUp_20;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_countText_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___countText_4)); }
	inline Text_t356221433 * get_countText_4() const { return ___countText_4; }
	inline Text_t356221433 ** get_address_of_countText_4() { return &___countText_4; }
	inline void set_countText_4(Text_t356221433 * value)
	{
		___countText_4 = value;
		Il2CppCodeGenWriteBarrier(&___countText_4, value);
	}

	inline static int32_t get_offset_of_winText_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___winText_5)); }
	inline Text_t356221433 * get_winText_5() const { return ___winText_5; }
	inline Text_t356221433 ** get_address_of_winText_5() { return &___winText_5; }
	inline void set_winText_5(Text_t356221433 * value)
	{
		___winText_5 = value;
		Il2CppCodeGenWriteBarrier(&___winText_5, value);
	}

	inline static int32_t get_offset_of_warpA_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___warpA_6)); }
	inline GameObject_t1756533147 * get_warpA_6() const { return ___warpA_6; }
	inline GameObject_t1756533147 ** get_address_of_warpA_6() { return &___warpA_6; }
	inline void set_warpA_6(GameObject_t1756533147 * value)
	{
		___warpA_6 = value;
		Il2CppCodeGenWriteBarrier(&___warpA_6, value);
	}

	inline static int32_t get_offset_of_warpB_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___warpB_7)); }
	inline GameObject_t1756533147 * get_warpB_7() const { return ___warpB_7; }
	inline GameObject_t1756533147 ** get_address_of_warpB_7() { return &___warpB_7; }
	inline void set_warpB_7(GameObject_t1756533147 * value)
	{
		___warpB_7 = value;
		Il2CppCodeGenWriteBarrier(&___warpB_7, value);
	}

	inline static int32_t get_offset_of_boost_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boost_8)); }
	inline float get_boost_8() const { return ___boost_8; }
	inline float* get_address_of_boost_8() { return &___boost_8; }
	inline void set_boost_8(float value)
	{
		___boost_8 = value;
	}

	inline static int32_t get_offset_of_jumpForce_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpForce_9)); }
	inline float get_jumpForce_9() const { return ___jumpForce_9; }
	inline float* get_address_of_jumpForce_9() { return &___jumpForce_9; }
	inline void set_jumpForce_9(float value)
	{
		___jumpForce_9 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___maxSpeed_10)); }
	inline float get_maxSpeed_10() const { return ___maxSpeed_10; }
	inline float* get_address_of_maxSpeed_10() { return &___maxSpeed_10; }
	inline void set_maxSpeed_10(float value)
	{
		___maxSpeed_10 = value;
	}

	inline static int32_t get_offset_of_gameOver_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gameOver_11)); }
	inline GameObject_t1756533147 * get_gameOver_11() const { return ___gameOver_11; }
	inline GameObject_t1756533147 ** get_address_of_gameOver_11() { return &___gameOver_11; }
	inline void set_gameOver_11(GameObject_t1756533147 * value)
	{
		___gameOver_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameOver_11, value);
	}

	inline static int32_t get_offset_of_hasLeft_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hasLeft_12)); }
	inline bool get_hasLeft_12() const { return ___hasLeft_12; }
	inline bool* get_address_of_hasLeft_12() { return &___hasLeft_12; }
	inline void set_hasLeft_12(bool value)
	{
		___hasLeft_12 = value;
	}

	inline static int32_t get_offset_of_jump_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jump_13)); }
	inline Vector3_t2243707580  get_jump_13() const { return ___jump_13; }
	inline Vector3_t2243707580 * get_address_of_jump_13() { return &___jump_13; }
	inline void set_jump_13(Vector3_t2243707580  value)
	{
		___jump_13 = value;
	}

	inline static int32_t get_offset_of_flag_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___flag_14)); }
	inline bool get_flag_14() const { return ___flag_14; }
	inline bool* get_address_of_flag_14() { return &___flag_14; }
	inline void set_flag_14(bool value)
	{
		___flag_14 = value;
	}

	inline static int32_t get_offset_of_isGrounded_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isGrounded_15)); }
	inline bool get_isGrounded_15() const { return ___isGrounded_15; }
	inline bool* get_address_of_isGrounded_15() { return &___isGrounded_15; }
	inline void set_isGrounded_15(bool value)
	{
		___isGrounded_15 = value;
	}

	inline static int32_t get_offset_of_rb_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb_16)); }
	inline Rigidbody_t4233889191 * get_rb_16() const { return ___rb_16; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_16() { return &___rb_16; }
	inline void set_rb_16(Rigidbody_t4233889191 * value)
	{
		___rb_16 = value;
		Il2CppCodeGenWriteBarrier(&___rb_16, value);
	}

	inline static int32_t get_offset_of_playerTransform_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerTransform_17)); }
	inline Transform_t3275118058 * get_playerTransform_17() const { return ___playerTransform_17; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_17() { return &___playerTransform_17; }
	inline void set_playerTransform_17(Transform_t3275118058 * value)
	{
		___playerTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_17, value);
	}

	inline static int32_t get_offset_of_animator_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___animator_18)); }
	inline Animator_t69676727 * get_animator_18() const { return ___animator_18; }
	inline Animator_t69676727 ** get_address_of_animator_18() { return &___animator_18; }
	inline void set_animator_18(Animator_t69676727 * value)
	{
		___animator_18 = value;
		Il2CppCodeGenWriteBarrier(&___animator_18, value);
	}

	inline static int32_t get_offset_of_scaleDown_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___scaleDown_19)); }
	inline Vector3_t2243707580  get_scaleDown_19() const { return ___scaleDown_19; }
	inline Vector3_t2243707580 * get_address_of_scaleDown_19() { return &___scaleDown_19; }
	inline void set_scaleDown_19(Vector3_t2243707580  value)
	{
		___scaleDown_19 = value;
	}

	inline static int32_t get_offset_of_scaleUp_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___scaleUp_20)); }
	inline Vector3_t2243707580  get_scaleUp_20() const { return ___scaleUp_20; }
	inline Vector3_t2243707580 * get_address_of_scaleUp_20() { return &___scaleUp_20; }
	inline void set_scaleUp_20(Vector3_t2243707580  value)
	{
		___scaleUp_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
