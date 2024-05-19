#pragma once
#include "Engine.h"
#include "ECharacterAssetActionStatus.generated.h"

UENUM()
enum class ECharacterAssetActionStatus : uint8 {
    N_FOOTWORK,
    N_WALK,
    N_JUMP,
    N_JUMP_NORM,
    N_JUMP_LAND,
    N_JUMP_RET,
    N_SITD,
    N_SIT,
    N_STAND,
    N_STAND_TURN,
    N_SIT_TURN,
    N_DASH,
    N_NOKI,
    N_PIYO,
    N_SJUMP,
    N_SJUMP_NORM,
    N_SJUMP_DMG,
    N_SJUMP_RET,
    N_FALL,
    N_GETUP,
    N_DEF,
    N_JDEF,
    N_ATCK,
    N_SPECIAL,
    N_WIN,
    N_SLEEP,
    N_FLYING,
    N_WJUMP,
    N_WSJUMP,
    N_TJUMP,
    N_KDASH,
    N_UKEMI,
    N_TOUCH,
    N_HYPER,
    N_CATCH,
    N_HOLD,
    N_DAMAGE,
    N_FRAME_IN,
    N_GEM,
    N_WITHDRAW,
    N_NONE,
};

