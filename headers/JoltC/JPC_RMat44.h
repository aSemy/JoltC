#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RMat44_t * JPC_RMat44_new();

//endregion constructors

//region functions

JPC_RMat44_t * JPC_RMat44_sZero();

JPC_RMat44_t * JPC_RMat44_sIdentity();

JPC_RMat44_t * JPC_RMat44_sRotation(
  const JPC_Quat_t * inQ
);

JPC_RMat44_t * JPC_RMat44_sTranslation(
  const JPC_RVec3_t * inTranslation
);

JPC_RMat44_t * JPC_RMat44_sRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_RVec3_t * inTranslation
);

JPC_RMat44_t * JPC_RMat44_sInverseRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_RVec3_t * inTranslation
);

JPC_Vec3_t * JPC_RMat44_GetAxisX(
  JPC_RMat44_t * self
);

JPC_Vec3_t * JPC_RMat44_GetAxisY(
  JPC_RMat44_t * self
);

JPC_Vec3_t * JPC_RMat44_GetAxisZ(
  JPC_RMat44_t * self
);

JPC_Mat44_t * JPC_RMat44_GetRotation(
  JPC_RMat44_t * self
);

JPC_Quat_t * JPC_RMat44_GetQuaternion(
  JPC_RMat44_t * self
);

JPC_RVec3_t * JPC_RMat44_GetTranslation(
  JPC_RMat44_t * self
);

bool JPC_RMat44_IsClose(
  JPC_RMat44_t * self,
  const JPC_RMat44_t * inM,
  double inMaxDistSq
);

JPC_Vec3_t * JPC_RMat44_Multiply3x3(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
);

JPC_Vec3_t * JPC_RMat44_Multiply3x3Transposed(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
);

JPC_Mat44_t * JPC_RMat44_Transposed3x3(
  JPC_RMat44_t * self
);

JPC_RMat44_t * JPC_RMat44_Inversed(
  JPC_RMat44_t * self
);

JPC_RMat44_t * JPC_RMat44_InversedRotationTranslation(
  JPC_RMat44_t * self
);

JPC_RMat44_t * JPC_RMat44_PreTranslated(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inTranslation
);

JPC_RMat44_t * JPC_RMat44_PostTranslated(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inTranslation
);

JPC_RMat44_t * JPC_RMat44_PreScaled(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inScale
);

JPC_RMat44_t * JPC_RMat44_PostScaled(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inScale
);

void JPC_RMat44_SetColumn3(
  JPC_RMat44_t * self,
  long inCol,
  const JPC_Vec3_t * inV
);

void JPC_RMat44_SetAxisX(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_RMat44_SetAxisY(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_RMat44_SetAxisZ(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
);

void JPC_RMat44_SetTranslation(
  JPC_RMat44_t * self,
  const JPC_RVec3_t * inV
);

void JPC_RMat44_SetColumn4(
  JPC_RMat44_t * self,
  long inCol,
  const JPC_Vec4_t * inV
);

//endregion functions


#ifdef __cplusplus
}
#endif

