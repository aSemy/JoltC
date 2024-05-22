#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TransformedShape_t * JPC_TransformedShape_new();

//endregion constructors

//region functions

void JPC_TransformedShape_CastRay_0(
  JPC_TransformedShape_t * self,
  const JPC_RRayCast_t * inRay,
  JPC_RayCastResult_t * ioHit
);

void JPC_TransformedShape_CastRay_1(
  JPC_TransformedShape_t * self,
  const JPC_RRayCast_t * inRay,
  const JPC_RayCastSettings_t * inRayCastSettings,
  JPC_CastRayCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_TransformedShape_CollidePoint(
  JPC_TransformedShape_t * self,
  const JPC_RVec3_t * inPoint,
  JPC_CollidePointCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_TransformedShape_CollideShape(
  JPC_TransformedShape_t * self,
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inShapeScale,
  const JPC_RMat44_t * inCenterOfMassTransform,
  const JPC_CollideShapeSettings_t * inCollideShapeSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CollideShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_TransformedShape_CastShape(
  JPC_TransformedShape_t * self,
  const JPC_RShapeCast_t * inShapeCast,
  const JPC_ShapeCastSettings_t * inShapeCastSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CastShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_TransformedShape_CollectTransformedShapes(
  JPC_TransformedShape_t * self,
  const JPC_AABox_t * inBox,
  JPC_TransformedShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
);

JPC_Vec3_t * JPC_TransformedShape_GetShapeScale(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_SetShapeScale(
  JPC_TransformedShape_t * self,
  const JPC_Vec3_t * inScale
);

JPC_RMat44_t * JPC_TransformedShape_GetCenterOfMassTransform(
  JPC_TransformedShape_t * self
);

JPC_RMat44_t * JPC_TransformedShape_GetInverseCenterOfMassTransform(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_SetWorldTransform_0(
  JPC_TransformedShape_t * self,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale
);

void JPC_TransformedShape_SetWorldTransform_1(
  JPC_TransformedShape_t * self,
  const JPC_RMat44_t * inTransform
);

JPC_RMat44_t * JPC_TransformedShape_GetWorldTransform(
  JPC_TransformedShape_t * self
);

JPC_AABox_t * JPC_TransformedShape_GetWorldSpaceBounds(
  JPC_TransformedShape_t * self
);

JPC_Vec3_t * JPC_TransformedShape_GetWorldSpaceSurfaceNormal(
  JPC_TransformedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_RVec3_t * inPosition
);

const JPC_PhysicsMaterial_t * JPC_TransformedShape_GetMaterial(
  JPC_TransformedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
);

//endregion functions

//region properties

JPC_RVec3_t * JPC_TransformedShape_mShapePositionCOM_Get(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_mShapePositionCOM_Set(
  JPC_TransformedShape_t * self,
  JPC_RVec3_t * mShapePositionCOM
);

JPC_Quat_t * JPC_TransformedShape_mShapeRotation_Get(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_mShapeRotation_Set(
  JPC_TransformedShape_t * self,
  JPC_Quat_t * mShapeRotation
);

const JPC_Shape_t * JPC_TransformedShape_mShape_Get(
  JPC_TransformedShape_t * self
);

const void JPC_TransformedShape_mShape_Set(
  JPC_TransformedShape_t * self,
  const JPC_Shape_t * mShape
);

JPC_Float3_t * JPC_TransformedShape_mShapeScale_Get(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_mShapeScale_Set(
  JPC_TransformedShape_t * self,
  JPC_Float3_t * mShapeScale
);

JPC_BodyID_t * JPC_TransformedShape_mBodyID_Get(
  JPC_TransformedShape_t * self
);

void JPC_TransformedShape_mBodyID_Set(
  JPC_TransformedShape_t * self,
  JPC_BodyID_t * mBodyID
);

//endregion properties


#ifdef __cplusplus
}
#endif

