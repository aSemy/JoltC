#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const unsigned long JPC_SoftBodyShape_GetSubShapeIDBits(
  JPC_SoftBodyShape_t * self
);

const unsigned long JPC_SoftBodyShape_GetFaceIndex(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

unsigned long JPC_SoftBodyShape_GetRefCount(
  JPC_SoftBodyShape_t * self
);

void JPC_SoftBodyShape_AddRef(
  JPC_SoftBodyShape_t * self
);

void JPC_SoftBodyShape_Release(
  JPC_SoftBodyShape_t * self
);

JPC_EShapeType JPC_SoftBodyShape_GetType(
  JPC_SoftBodyShape_t * self
);

JPC_EShapeSubType JPC_SoftBodyShape_GetSubType(
  JPC_SoftBodyShape_t * self
);

bool JPC_SoftBodyShape_MustBeStatic(
  JPC_SoftBodyShape_t * self
);

JPC_AABox_t * JPC_SoftBodyShape_GetLocalBounds(
  JPC_SoftBodyShape_t * self
);

JPC_AABox_t * JPC_SoftBodyShape_GetWorldSpaceBounds(
  JPC_SoftBodyShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_SoftBodyShape_GetCenterOfMass(
  JPC_SoftBodyShape_t * self
);

unsigned long long int JPC_SoftBodyShape_GetUserData(
  JPC_SoftBodyShape_t * self
);

void JPC_SoftBodyShape_SetUserData(
  JPC_SoftBodyShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_SoftBodyShape_GetSubShapeIDBitsRecursive(
  JPC_SoftBodyShape_t * self
);

float JPC_SoftBodyShape_GetInnerRadius(
  JPC_SoftBodyShape_t * self
);

JPC_MassProperties_t * JPC_SoftBodyShape_GetMassProperties(
  JPC_SoftBodyShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_SoftBodyShape_GetMaterial(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_SoftBodyShape_GetSurfaceNormal(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_SoftBodyShape_GetSubShapeUserData(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_SoftBodyShape_GetSubShapeTransformedShape(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_SoftBodyShape_GetVolume(
  JPC_SoftBodyShape_t * self
);

bool JPC_SoftBodyShape_IsValidScale(
  JPC_SoftBodyShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_SoftBodyShape_ScaleShape(
  JPC_SoftBodyShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

