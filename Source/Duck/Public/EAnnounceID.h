#pragma once
#include "Engine.h"
#include "EAnnounceID.generated.h"

UENUM()
enum class EAnnounceID : uint8 {
    ANNOUNCE_READY,
    ANNOUNCE_FIGHT,
    ANNOUNCE_KO,
    ANNOUNCE_KO_DOUBLE,
    ANNOUNCE_KO_PERFECT,
    ANNOUNCE_DRAW,
    ANNOUNCE_TIME_UP,
    ANNOUNCE_WIN,
    ANNOUNCE_ROUND_COUNT,
    ANNOUNCE_NEW_CHALLENGER,
    ANNOUNCE_CLEAR,
    ANNOUNCE_COMPLETE,
    ANNOUNCE_LOSE,
    ANNOUNCE_FAILED,
};

