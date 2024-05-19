#pragma once
#include "Engine.h"
#include "EEventParamType.generated.h"

UENUM()
enum class EEventParamType : uint8 {
    NONE,
    LOCK,
    UNLOCK,
    FLY,
    WORLD_BEGIN,
    WORLD_END,
    DISABLE_TIME,
    DAMAGE_CALC,
    SUB_HIT_NO,
    CAMERA_FLAG,
    SCREEN_VIB,
    HITMARK,
    LANDING,
    STYLE_CHANGE,
    STYLE_TIMER,
    GAUGE_ADD,
    DAMAGE_SET,
    SUPER_ARMOR,
    DAMAGE_TAISEI,
    ATTACK_HOSEI,
    DEFENSE_HOSEI,
    DAMAGE_ABSORB,
    SPEED_UP,
    SHC_GAIN_HOSEI,
    GEM_GAIN_HOSEI,
    UNIQUE_PARAM,
    UNIQUE_TIMER,
    NOBI_MAX UMETA(Hidden),
    NICE_BOTTLE,
    CREATE_LIGHT,
    DRAW_VECTOR,
    SET_WORLD_POS,
    SET_SCREEN_POS,
    SET_SELF_OFS,
    SET_PARENT_OFS,
    SET_RIVAL_OFS,
    SET_TARGET_OFS,
    SET_LOCK_OFS,
    SET_ADJ_ROT_Y,
    CAMERA_POS,
    CAMERA_OFS,
    ERASE_SHOT_CATEGORY,
    SET_ORBIT_INIT,
    SET_ORBIT_PARAM,
    ITEM_DROP,
    ANOTHER_WORLD,
    RESET_CHARGE,
    RUTHLESS_WALL,
    IGNORE_VIB,
    RESET_COMMAND,
    CALC_STORY_GAUGE,
    STORY_ATTACK,
    STORY_DEFENSE,
    STORY_SPEED,
    STORY_ARMOR,
    STORY_REGEN_VITAL,
    STORY_REGEN_HYPER,
    STORY_GAIN_HYPER,
    STORY_GAIN_GEM,
    STORY_POISON,
    STORY_STUN,
    STORY_RECOVER_VT,
    STORY_RECOVER_HC,
    Z_FREE,
    WITHDRAWAL,
    SET_DURABILITY,
    STORY_EFFECT,
    RESET_CLOTHING,
};

