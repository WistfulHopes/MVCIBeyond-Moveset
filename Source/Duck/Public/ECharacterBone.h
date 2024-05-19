#pragma once
#include "Engine.h"
#include "ECharacterBone.generated.h"

UENUM()
enum class ECharacterBone : uint8 {
    Y_null,
    X_j1,
    Z_j2,
    hip_j3,
    waist_j4,
    breast_j5,
    neck_j6,
    head_j7,
    L_collar_j8,
    L_harm_j9,
    L_larm_j10,
    L_hand_j11,
    L_finOy01_j50,
    L_finOy02_j51,
    L_finOy03_j52,
    L_finHi01_j53,
    L_finHi02_j54,
    L_finHi03_j55,
    L_finNa01_j56,
    L_finNa02_j57,
    L_finNa03_j58,
    L_finKu01_j59,
    L_finKu02_j60,
    L_finKu03_j61,
    L_finKo01_j62,
    L_finKo02_j63,
    L_finKo03_j64,
    L_finKo04_j65,
    R_collar_j12,
    R_harm_j13,
    R_larm_j14,
    R_hand_j15,
    R_finOy01_j70,
    R_finOy02_j71,
    R_finOy03_j72,
    R_finHi01_j73,
    R_finHi02_j74,
    R_finHi03_j75,
    R_finNa01_j76,
    R_finNa02_j77,
    R_finNa03_j78,
    R_finKu01_j79,
    R_finKu02_j80,
    R_finKu03_j81,
    R_finKo01_j82,
    R_finKo02_j83,
    R_finKo03_j84,
    R_finKo04_j85,
    L_hleg_j16,
    L_lleg_j17,
    L_foot_j18,
    L_toe_j19,
    R_hleg_j20,
    R_lleg_j21,
    R_foot_j22,
    R_toe_j23,
};

