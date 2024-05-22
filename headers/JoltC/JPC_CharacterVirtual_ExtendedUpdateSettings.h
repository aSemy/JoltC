#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtual_ExtendedUpdateSettings_t * JPC_CharacterVirtual_ExtendedUpdateSettings_new();

//endregion constructors

//region properties

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mStickToFloorStepDown
);

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mWalkStairsStepUp
);

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward
);

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest
);

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact
);

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mWalkStairsStepDownExtra
);

//endregion properties


#ifdef __cplusplus
}
#endif

