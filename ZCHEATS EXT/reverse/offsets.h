#pragma once
#include <Windows.h>

#define GWorld 0xEE2F8E8
#define VIEW_POINT 0xED57310


namespace OFFSETS
{
    uintptr_t WorldSettings = 0x2A0;
    uintptr_t CurrentVehicle = 0x2590;
    uintptr_t CachedFuelComponent = 0x10F0;
    uintptr_t bUseGravity = 0x6DA;
    uintptr_t CurrentWeapon = 0x948;
    uintptr_t entity_actor = 0x310;
    uintptr_t GlobalAnimRateScale = 0xa58;
    uintptr_t UWorld = 0xEE2F8E8;
    uintptr_t ViewPoint = 0xED57310;
    uintptr_t GameInstance = 0x1B8;
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t PlayerCameraManager = 0x348;
    uintptr_t LocalPawn = 0x338;
    uintptr_t PlayerState = 0x2B0;
    uintptr_t RootComponent = 0x198;
    uintptr_t RelativeLocation = 0x128;
    uintptr_t GameState = 0x158;
    uintptr_t PlayerArray = 0x2A8;
    uintptr_t WeaponData = 0x438;
    uintptr_t PawnPrivate = 0x308;
    uintptr_t TeamIndex = 0x10D0;
    uintptr_t RotationInput = 0x520;
    uintptr_t bIsReloadingWeapon = 0x350;
    uintptr_t AmmoCount = 0xBFC;
    uintptr_t ItemType = 0x70;
    uintptr_t DisplayName = 0x98;
    uintptr_t FText = 0x38;
    uintptr_t Tier = 0x73;
    uintptr_t Mesh = 0x318;
    uintptr_t LastSubmitTime = 0x360;
    uintptr_t LastRenderTimeOnScreen = 0x368;
    uintptr_t bIsDying = 0x750;
    uintptr_t isDBNO = 0x872;
    uintptr_t BoneArray = 0x600;
    uintptr_t BoneArrayCache = 0x648;
    uintptr_t pNameStructure = 0xAE0;
    uintptr_t ComponentToWorld = 0x240;
    uintptr_t PawnMaterials_ALL = 0x56C0;
    uintptr_t Wireframe = 0x194;
    uintptr_t PersistentLevel = 0x30;
    uintptr_t ActorCount = 0xA0;
    uintptr_t AActor = 0x98;
    uintptr_t TeamId = 0x10D8;
    uintptr_t Levels = 0x170;
    uintptr_t IsCached = 0x648;
    uintptr_t ReviveFromDBNOTime = 0x46b8;
}
