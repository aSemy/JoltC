#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TransformedShape_t * JoltC_TransformedShape_new();

//endregion

//region functions

void JoltC_TransformedShape_CastRay_0(
  JoltC_TransformedShape_t * self,
  const JoltC_RRayCast_t * inRay,
  JoltC_RayCastResult_t * ioHit
);

void JoltC_TransformedShape_CastRay_1(
  JoltC_TransformedShape_t * self,
  const JoltC_RRayCast_t * inRay,
  const JoltC_RayCastSettings_t * inRayCastSettings,
  JoltC_CastRayCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_TransformedShape_CollidePoint(
  JoltC_TransformedShape_t * self,
  const JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_TransformedShape_CollideShape(
  JoltC_TransformedShape_t * self,
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inShapeScale,
  const JoltC_RMat44_t * inCenterOfMassTransform,
  const JoltC_CollideShapeSettings_t * inCollideShapeSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CollideShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_TransformedShape_CastShape(
  JoltC_TransformedShape_t * self,
  const JoltC_RShapeCast_t * inShapeCast,
  const JoltC_ShapeCastSettings_t * inShapeCastSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CastShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_TransformedShape_CollectTransformedShapes(
  JoltC_TransformedShape_t * self,
  const JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
);

JoltC_Vec3_t * JoltC_TransformedShape_GetShapeScale(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_SetShapeScale(
  JoltC_TransformedShape_t * self,
  const JoltC_Vec3_t * inScale
);

JoltC_RMat44_t * JoltC_TransformedShape_GetCenterOfMassTransform(
  JoltC_TransformedShape_t * self
);

JoltC_RMat44_t * JoltC_TransformedShape_GetInverseCenterOfMassTransform(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_SetWorldTransform_0(
  JoltC_TransformedShape_t * self,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale
);

void JoltC_TransformedShape_SetWorldTransform_1(
  JoltC_TransformedShape_t * self,
  const JoltC_RMat44_t * inTransform
);

JoltC_RMat44_t * JoltC_TransformedShape_GetWorldTransform(
  JoltC_TransformedShape_t * self
);

JoltC_AABox_t * JoltC_TransformedShape_GetWorldSpaceBounds(
  JoltC_TransformedShape_t * self
);

JoltC_Vec3_t * JoltC_TransformedShape_GetWorldSpaceSurfaceNormal(
  JoltC_TransformedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_RVec3_t * inPosition
);

const JoltC_PhysicsMaterial_t * JoltC_TransformedShape_GetMaterial(
  JoltC_TransformedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
);

//endregion

//region properties

JoltC_RVec3_t * JoltC_TransformedShape_mShapePositionCOM_Get(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_mShapePositionCOM_Set(
  JoltC_TransformedShape_t * self,
  JoltC_RVec3_t * mShapePositionCOM
);

JoltC_Quat_t * JoltC_TransformedShape_mShapeRotation_Get(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_mShapeRotation_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Quat_t * mShapeRotation
);

const JoltC_Shape_t * JoltC_TransformedShape_mShape_Get(
  JoltC_TransformedShape_t * self
);

const void JoltC_TransformedShape_mShape_Set(
  JoltC_TransformedShape_t * self,
  const JoltC_Shape_t * mShape
);

JoltC_Float3_t * JoltC_TransformedShape_mShapeScale_Get(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_mShapeScale_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Float3_t * mShapeScale
);

JoltC_BodyID_t * JoltC_TransformedShape_mBodyID_Get(
  JoltC_TransformedShape_t * self
);

void JoltC_TransformedShape_mBodyID_Set(
  JoltC_TransformedShape_t * self,
  JoltC_BodyID_t * mBodyID
);

//endregion


#ifdef __cplusplus
}
#endif

