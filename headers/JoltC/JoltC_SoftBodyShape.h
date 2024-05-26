#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const unsigned long JoltC_SoftBodyShape_GetSubShapeIDBits(
  JoltC_SoftBodyShape_t * self
);

const unsigned long JoltC_SoftBodyShape_GetFaceIndex(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

unsigned long JoltC_SoftBodyShape_GetRefCount(
  JoltC_SoftBodyShape_t * self
);

void JoltC_SoftBodyShape_AddRef(
  JoltC_SoftBodyShape_t * self
);

void JoltC_SoftBodyShape_Release(
  JoltC_SoftBodyShape_t * self
);

JoltC_EShapeType JoltC_SoftBodyShape_GetType(
  JoltC_SoftBodyShape_t * self
);

JoltC_EShapeSubType JoltC_SoftBodyShape_GetSubType(
  JoltC_SoftBodyShape_t * self
);

bool JoltC_SoftBodyShape_MustBeStatic(
  JoltC_SoftBodyShape_t * self
);

JoltC_AABox_t * JoltC_SoftBodyShape_GetLocalBounds(
  JoltC_SoftBodyShape_t * self
);

JoltC_AABox_t * JoltC_SoftBodyShape_GetWorldSpaceBounds(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_SoftBodyShape_GetCenterOfMass(
  JoltC_SoftBodyShape_t * self
);

unsigned long long int JoltC_SoftBodyShape_GetUserData(
  JoltC_SoftBodyShape_t * self
);

void JoltC_SoftBodyShape_SetUserData(
  JoltC_SoftBodyShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_SoftBodyShape_GetSubShapeIDBitsRecursive(
  JoltC_SoftBodyShape_t * self
);

float JoltC_SoftBodyShape_GetInnerRadius(
  JoltC_SoftBodyShape_t * self
);

JoltC_MassProperties_t * JoltC_SoftBodyShape_GetMassProperties(
  JoltC_SoftBodyShape_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_SoftBodyShape_GetMaterial(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_SoftBodyShape_GetSurfaceNormal(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_SoftBodyShape_GetSubShapeUserData(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_SoftBodyShape_GetSubShapeTransformedShape(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_SoftBodyShape_GetVolume(
  JoltC_SoftBodyShape_t * self
);

bool JoltC_SoftBodyShape_IsValidScale(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_SoftBodyShape_ScaleShape(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

