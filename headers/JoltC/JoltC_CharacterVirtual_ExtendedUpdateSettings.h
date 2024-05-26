#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_ExtendedUpdateSettings_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_new();

//endregion

//region properties

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mStickToFloorStepDown
);

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepUp
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact
);

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepDownExtra
);

//endregion


#ifdef __cplusplus
}
#endif

