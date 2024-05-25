#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_ExtendedUpdateSettings_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mStickToFloorStepDown,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepUp,
  char** outErrMsg
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward,
  char** outErrMsg
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest,
  char** outErrMsg
);

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepDownExtra,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

