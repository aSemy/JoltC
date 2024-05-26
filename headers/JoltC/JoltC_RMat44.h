#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RMat44_t * JoltC_RMat44_new();

//endregion

//region functions

JoltC_RMat44_t * JoltC_RMat44_sZero();

JoltC_RMat44_t * JoltC_RMat44_sIdentity();

JoltC_RMat44_t * JoltC_RMat44_sRotation(
  const JoltC_Quat_t * inQ
);

JoltC_RMat44_t * JoltC_RMat44_sTranslation(
  const JoltC_RVec3_t * inTranslation
);

JoltC_RMat44_t * JoltC_RMat44_sRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_RVec3_t * inTranslation
);

JoltC_RMat44_t * JoltC_RMat44_sInverseRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_RVec3_t * inTranslation
);

JoltC_Vec3_t * JoltC_RMat44_GetAxisX(
  JoltC_RMat44_t * self
);

JoltC_Vec3_t * JoltC_RMat44_GetAxisY(
  JoltC_RMat44_t * self
);

JoltC_Vec3_t * JoltC_RMat44_GetAxisZ(
  JoltC_RMat44_t * self
);

JoltC_Mat44_t * JoltC_RMat44_GetRotation(
  JoltC_RMat44_t * self
);

JoltC_Quat_t * JoltC_RMat44_GetQuaternion(
  JoltC_RMat44_t * self
);

JoltC_RVec3_t * JoltC_RMat44_GetTranslation(
  JoltC_RMat44_t * self
);

bool JoltC_RMat44_IsClose(
  JoltC_RMat44_t * self,
  const JoltC_RMat44_t * inM,
  double inMaxDistSq
);

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV
);

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3Transposed(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV
);

JoltC_Mat44_t * JoltC_RMat44_Transposed3x3(
  JoltC_RMat44_t * self
);

JoltC_RMat44_t * JoltC_RMat44_Inversed(
  JoltC_RMat44_t * self
);

JoltC_RMat44_t * JoltC_RMat44_InversedRotationTranslation(
  JoltC_RMat44_t * self
);

JoltC_RMat44_t * JoltC_RMat44_PreTranslated(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inTranslation
);

JoltC_RMat44_t * JoltC_RMat44_PostTranslated(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inTranslation
);

JoltC_RMat44_t * JoltC_RMat44_PreScaled(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_RMat44_t * JoltC_RMat44_PostScaled(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inScale
);

void JoltC_RMat44_SetColumn3(
  JoltC_RMat44_t * self,
  long inCol,
  const JoltC_Vec3_t * inV
);

void JoltC_RMat44_SetAxisX(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV
);

void JoltC_RMat44_SetAxisY(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV
);

void JoltC_RMat44_SetAxisZ(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV
);

void JoltC_RMat44_SetTranslation(
  JoltC_RMat44_t * self,
  const JoltC_RVec3_t * inV
);

void JoltC_RMat44_SetColumn4(
  JoltC_RMat44_t * self,
  long inCol,
  const JoltC_Vec4_t * inV
);

//endregion


#ifdef __cplusplus
}
#endif

