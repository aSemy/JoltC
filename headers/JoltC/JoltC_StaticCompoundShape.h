#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_StaticCompoundShape_GetNumSubShapes(
  JPC_StaticCompoundShape_t * self
);

const JPC_CompoundShapeSubShape_t * JPC_StaticCompoundShape_GetSubShape(
  JPC_StaticCompoundShape_t * self,
  long inIdx
);

unsigned long JPC_StaticCompoundShape_GetRefCount(
  JPC_StaticCompoundShape_t * self
);

void JPC_StaticCompoundShape_AddRef(
  JPC_StaticCompoundShape_t * self
);

void JPC_StaticCompoundShape_Release(
  JPC_StaticCompoundShape_t * self
);

JPC_EShapeType JPC_StaticCompoundShape_GetType(
  JPC_StaticCompoundShape_t * self
);

JPC_EShapeSubType JPC_StaticCompoundShape_GetSubType(
  JPC_StaticCompoundShape_t * self
);

bool JPC_StaticCompoundShape_MustBeStatic(
  JPC_StaticCompoundShape_t * self
);

JPC_AABox_t * JPC_StaticCompoundShape_GetLocalBounds(
  JPC_StaticCompoundShape_t * self
);

JPC_AABox_t * JPC_StaticCompoundShape_GetWorldSpaceBounds(
  JPC_StaticCompoundShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
);

JPC_Vec3_t * JPC_StaticCompoundShape_GetCenterOfMass(
  JPC_StaticCompoundShape_t * self
);

unsigned long long int JPC_StaticCompoundShape_GetUserData(
  JPC_StaticCompoundShape_t * self
);

void JPC_StaticCompoundShape_SetUserData(
  JPC_StaticCompoundShape_t * self,
  unsigned long long int inUserData
);

unsigned long JPC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JPC_StaticCompoundShape_t * self
);

float JPC_StaticCompoundShape_GetInnerRadius(
  JPC_StaticCompoundShape_t * self
);

JPC_MassProperties_t * JPC_StaticCompoundShape_GetMassProperties(
  JPC_StaticCompoundShape_t * self
);

const JPC_PhysicsMaterial_t * JPC_StaticCompoundShape_GetMaterial(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_Vec3_t * JPC_StaticCompoundShape_GetSurfaceNormal(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JPC_StaticCompoundShape_GetSubShapeUserData(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

JPC_TransformedShape_t * JPC_StaticCompoundShape_GetSubShapeTransformedShape(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
);

float JPC_StaticCompoundShape_GetVolume(
  JPC_StaticCompoundShape_t * self
);

bool JPC_StaticCompoundShape_IsValidScale(
  JPC_StaticCompoundShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_Shape_ShapeResult_t * JPC_StaticCompoundShape_ScaleShape(
  JPC_StaticCompoundShape_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions


#ifdef __cplusplus
}
#endif

