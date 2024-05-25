#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_Shape_GetRefCount(
  JPC_Shape_t * self
);

void JPC_Shape_AddRef(
  JPC_Shape_t * self
);

void JPC_Shape_Release(
  JPC_Shape_t * self
);

JPC_EShapeType JPC_Shape_GetType(
  JPC_Shape_t * self
);

JPC_EShapeSubType JPC_Shape_GetSubType(
  JPC_Shape_t * self
);

bool JPC_Shape_MustBeStatic(
  JPC_Shape_t * self
);

JPC_AABox_t * JPC_Shape_GetLocalBounds(
  JPC_Shape_t * self
);

JPC_AABox_t * JPC_Shape_GetWorldSpaceBounds(
  JPC_Shape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_Shape_GetCenterOfMass(
  JPC_Shape_t * self
);

unsigned long long int JPC_Shape_GetUserData(
  JPC_Shape_t * self
);

void JPC_Shape_SetUserData(
  JPC_Shape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_Shape_GetSubShapeIDBitsRecursive(
  JPC_Shape_t * self
);

float JPC_Shape_GetInnerRadius(
  JPC_Shape_t * self
);

JPC_MassProperties_t * JPC_Shape_GetMassProperties(
  JPC_Shape_t * self
);

const JPC_PhysicsMaterial_t * JPC_Shape_GetMaterial(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_Shape_GetSurfaceNormal(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_Shape_GetSubShapeUserData(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_Shape_GetSubShapeTransformedShape(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_Shape_GetVolume(
  JPC_Shape_t * self
);

bool JPC_Shape_IsValidScale(
  JPC_Shape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_Shape_ScaleShape(
  JPC_Shape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

