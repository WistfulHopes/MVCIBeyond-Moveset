#pragma once
#include "Engine.h"
#include "ESound_CMN.generated.h"

UENUM()
enum class ESound_CMN : uint8 {
    HIT_PUNCH_S,
    HIT_PUNCH_M,
    HIT_PUNCH_L,
    HIT_PUNCH_BODY_S,
    HIT_PUNCH_BODY_M,
    HIT_PUNCH_BODY_L,
    HIT_PUNCH_LEG_S,
    HIT_PUNCH_LEG_M,
    HIT_PUNCH_LEG_L,
    HIT_KICK_S,
    HIT_KICK_M,
    HIT_KICK_L,
    HIT_KICK_BODY_S,
    HIT_KICK_BODY_M,
    HIT_KICK_BODY_L,
    HIT_KICK_LEG_S,
    HIT_KICK_LEG_M,
    HIT_KICK_LEG_L,
    HIT_SP_LAYER_S,
    HIT_SP_LAYER_M,
    HIT_SP_LAYER_L,
    HIT_SP_LAYER_UNIQ,
    HIT_KNIFE_S,
    HIT_KNIFE_M,
    HIT_KNIFE_L,
    HIT_ENERGY_S,
    HIT_ENERGY_M,
    HIT_ENERGY_L,
    HIT_TIGHTEN,
    HIT_BITE,
    HIT_BONE,
    HIT_STUB,
    HIT_GROUND,
    HIT_GRIP,
    HIT_CHAIN_1,
    HIT_CHAIN_2,
    HIT_CHAIN_3,
    DEATHHIT_PUNCH_S,
    DEATHHIT_PUNCH_M,
    DEATHHIT_PUNCH_L,
    DEATHHIT_PUNCH_BODY_S,
    DEATHHIT_PUNCH_BODY_M,
    DEATHHIT_PUNCH_BODY_L,
    DEATHHIT_PUNCH_LEG_S,
    DEATHHIT_PUNCH_LEG_M,
    DEATHHIT_PUNCH_LEG_L,
    DEATHHIT_KICK_S,
    DEATHHIT_KICK_M,
    DEATHHIT_KICK_L,
    DEATHHIT_KICK_BODY_S,
    DEATHHIT_KICK_BODY_M,
    DEATHHIT_KICK_BODY_L,
    DEATHHIT_KICK_LEG_S,
    DEATHHIT_KICK_LEG_M,
    DEATHHIT_KICK_LEG_L,
    DEATHHIT_SP_LAYER_S,
    DEATHHIT_SP_LAYER_M,
    DEATHHIT_SP_LAYER_L,
    DEATHHIT_SP_LAYER_UNIQ,
    DEATHHIT_KNIFE_S,
    DEATHHIT_KNIFE_M,
    DEATHHIT_KNIFE_L,
    DEATHHIT_ENERGY_S,
    DEATHHIT_ENERGY_M,
    DEATHHIT_ENERGY_L,
    DEATHHIT_TIGHTEN,
    DEATHHIT_BITE,
    DEATHHIT_BONE,
    DEATHHIT_STUB,
    DEATHHIT_GROUND,
    DEATHHIT_GRIP,
    DEATHHIT_CHAIN_1,
    DEATHHIT_CHAIN_2,
    DEATHHIT_CHAIN_3,
    GUARD_S,
    GUARD_M,
    GUARD_L,
    GUARD_METAL,
    GUARD_BREAK,
    OTHER_SUPERARMOR_SUCCESS,
    GUARD_METAL_S,
    GUARD_METAL_M,
    GUARD_METAL_L,
    THROWHIT_NORMAL,
    THROWHIT_LARG,
    THROW_OUT,
    TOBIWAZA_OFFSET,
    THROW_SWISH,
    CHARAWAZA_OFFSET,
    OFFSET_SMALL,
    STATE_CRITICAL,
    HIT_OBJ_CAN,
    HIT_OBJ_BANANA_SLIP,
    STAN0_STAR,
    STAN1_HIYOKO,
    STAN2_SKULL,
    WALL_HIT_CMN,
    EFFECT_PHYCO,
    EFFECT_ICE,
    EFFECT_BLAST,
    EFFECT_POISON,
    EFFECT_EXPL,
    BASIC_JUMP_FS_TRI,
    BASIC_JUMP_CMN,
    BASIC_JUMP_TRI,
    BASIC_STEP_FRONT,
    BASIC_STEP_BACK,
    BASIC_UKEMI,
    BASIC_STANDUP,
    EFFECT_FIRE,
    EFFECT_ELEC,
    OTHER_SLIDING_LONG,
    OTHER_V_REVERSAL_SUCCESS,
    OTHER_SLIDING_SHORT,
    OTHER_ATEMI_SUCCESS,
    OTHER_EX_SPLASH,
    OTHER_EX_HATSUDOU,
    OTHER_VT_HATSUDOU_LOW,
    OTHER_VT_HATSUDOU_FLASH,
    OTHER_INTRO_CAMERA_MOVE,
    OTHER_CA_HATSUDOU,
    FINISH_AKEMBONO_A,
    FINISH_AKEMBONO_B,
    FINISH_PUCHBONO,
    ROUNDCALL_1,
    ROUNDCALL_2,
    ROUNDCALL_3,
    ROUNDCALL_4,
    ROUNDCALL_5,
    ROUNDCALL_6,
    ROUNDCALL_7,
    ROUNDCALL_8,
    ROUNDCALL_9,
    ROUNDCALL_FINAL,
    ROUNDCALL_EXTRA,
    ROUNDCALL_GETREADY,
    ROUNDCALL_READY,
    ROUNDCALL_GO,
    ROUNDCALL_READY2,
    ROUNDCALL_GO2,
    ROUNDCALL_LETSGO,
    ROUNDCALL_FIGHT_1,
    ROUNDCALL_FIGHT_2,
    ROUNDCALL_FIGHT_3,
    ROUNDCALL_FIGHT_4,
    ROUNDCALL_FIGHT_5,
    ROUNDCALL_FIGHT_6,
    ROUNDCALL_FIGHT_7,
    ROUNDCALL_FIGHT_8,
    ROUNDCALL_FIGHT_9,
    ROUNDCALL_FIGHT_FINAL,
    ROUNDCALL_FIGHT_EXTRA,
    ROUNDCALL_PERFECT_KO,
    ROUNDCALL_DOUBLE_KO,
    ROUNDCALL_TIMEOVER,
    ROUNDCALL_DRAW,
    ROUNDCALL_YOUWIN,
    ROUNDCALL_YOULOSE,
    ROUNDCALL_KO,
    ROUNDCALL_SE_ROUNDCALL,
    ROUNDCALL_SE_FIGHT,
    ROUNDCALL_SE_KO,
    ROUNDCALL_SE_PERFECT_KO,
    ROUNDCALL_SE_DOUBLE_KO,
    ROUNDCALL_SE_DRAWGAME,
    ROUNDCALL_SE_TIMEOVER,
    RESAULT_IN,
    DUCK_MINDGEM,
    DUCK_POWGEM,
    DUCK_REALITYGEM,
    DUCK_SOULGEM,
    DUCK_SPACEGEM,
    DUCK_TIMEGEM,
    DUCK_TIMEOVER,
    DUCK_KO,
    DUCK_FIGHT,
    DUCK_READY,
};

