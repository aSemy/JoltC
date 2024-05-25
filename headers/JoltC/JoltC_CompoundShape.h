#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_CompoundShape_GetNumSubShapes(
  JPC_CompoundShape_t * self
);

const JPC_CompoundShapeSubShape_t * JPC_CompoundShape_GetSubShape(
  JPC_CompoundShape_t * self,
  long inIdx
);

unsigned long JPC_CompoundShape_GetRefCount(
  JPC_CompoundShape_t * self
);

void JPC_CompoundShape_AddRef(
  JPC_CompoundShape_t * self
);

void JPC_CompoundShape_Release(
  JPC_CompoundShape_t * self
);

JPC_EShapeType JPC_CompoundShape_GetType(
  JPC_CompoundShape_t * self
);

JPC_EShapeSubType JPC_CompoundShape_GetSubType(
  JPC_CompoundShape_t * self
);

bool JPC_CompoundShape_MustBeStatic(
  JPC_CompoundShape_t * self
);

JPC_AABox_t * JPC_CompoundShape_GetLocalBounds(
  JPC_CompoundShape_t * self
);

JPC_AABox_t * JPC_CompoundShape_GetWorldSpaceBounds(
  JPC_CompoundShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_CompoundShape_GetCenterOfMass(
  JPC_CompoundShape_t * self
);

unsigned long long int JPC_CompoundShape_GetUserData(
  JPC_CompoundShape_t * self
);

void JPC_CompoundShape_SetUserData(
  JPC_CompoundShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_CompoundShape_GetSubShapeIDBitsRecursive(
  JPC_CompoundShape_t * self
);

float JPC_CompoundShape_GetInnerRadius(
  JPC_CompoundShape_t * self
);

JPC_MassProperties_t * JPC_CompoundShape_GetMassProperties(
  JPC_CompoundShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_CompoundShape_GetMaterial(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_CompoundShape_GetSurfaceNormal(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_CompoundShape_GetSubShapeUserData(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_CompoundShape_GetSubShapeTransformedShape(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_CompoundShape_GetVolume(
  JPC_CompoundShape_t * self
);

bool JPC_CompoundShape_IsValidScale(
  JPC_CompoundShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_CompoundShape_ScaleShape(
  JPC_CompoundShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

