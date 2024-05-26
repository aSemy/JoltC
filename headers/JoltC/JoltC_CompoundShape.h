#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_StaticCompoundShape_t into JoltC_CompoundShape_t.
 */
JoltC_CompoundShape_t * JoltC_CompoundShape_From_StaticCompoundShape(
  JoltC_StaticCompoundShape_t * subtype
);

//endregion

//region functions

long JoltC_CompoundShape_GetNumSubShapes(
  JoltC_CompoundShape_t * self
);

JoltC_CompoundShapeSubShape_t * JoltC_CompoundShape_GetSubShape(
  JoltC_CompoundShape_t * self,
  long inIdx
);

unsigned long JoltC_CompoundShape_GetRefCount(
  JoltC_CompoundShape_t * self
);

void JoltC_CompoundShape_AddRef(
  JoltC_CompoundShape_t * self
);

void JoltC_CompoundShape_Release(
  JoltC_CompoundShape_t * self
);

JoltC_EShapeType JoltC_CompoundShape_GetType(
  JoltC_CompoundShape_t * self
);

JoltC_EShapeSubType JoltC_CompoundShape_GetSubType(
  JoltC_CompoundShape_t * self
);

bool JoltC_CompoundShape_MustBeStatic(
  JoltC_CompoundShape_t * self
);

JoltC_AABox_t * JoltC_CompoundShape_GetLocalBounds(
  JoltC_CompoundShape_t * self
);

JoltC_AABox_t * JoltC_CompoundShape_GetWorldSpaceBounds(
  JoltC_CompoundShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
);

JoltC_Vec3_t * JoltC_CompoundShape_GetCenterOfMass(
  JoltC_CompoundShape_t * self
);

unsigned long long int JoltC_CompoundShape_GetUserData(
  JoltC_CompoundShape_t * self
);

void JoltC_CompoundShape_SetUserData(
  JoltC_CompoundShape_t * self,
  unsigned long long int inUserData
);

unsigned long JoltC_CompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_CompoundShape_t * self
);

float JoltC_CompoundShape_GetInnerRadius(
  JoltC_CompoundShape_t * self
);

JoltC_MassProperties_t * JoltC_CompoundShape_GetMassProperties(
  JoltC_CompoundShape_t * self
);

JoltC_PhysicsMaterial_t * JoltC_CompoundShape_GetMaterial(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_Vec3_t * JoltC_CompoundShape_GetSurfaceNormal(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
);

unsigned long long int JoltC_CompoundShape_GetSubShapeUserData(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
);

JoltC_TransformedShape_t * JoltC_CompoundShape_GetSubShapeTransformedShape(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
);

float JoltC_CompoundShape_GetVolume(
  JoltC_CompoundShape_t * self
);

bool JoltC_CompoundShape_IsValidScale(
  JoltC_CompoundShape_t * self,
  JoltC_Vec3_t * inScale
);

JoltC_Shape_ShapeResult_t * JoltC_CompoundShape_ScaleShape(
  JoltC_CompoundShape_t * self,
  JoltC_Vec3_t * inScale
);

//endregion


#ifdef __cplusplus
}
#endif

