#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_NarrowPhaseQuery_CastRay(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_RRayCast_t * inRay,
  const JPC_RayCastSettings_t * inRayCastSettings,
  JPC_CastRayCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_NarrowPhaseQuery_CollidePoint(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_RVec3_t * inPoint,
  JPC_CollidePointCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_NarrowPhaseQuery_CollideShape(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inShapeScale,
  const JPC_RMat44_t * inCenterOfMassTransform,
  const JPC_CollideShapeSettings_t * inCollideShapeSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CollideShapeCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_NarrowPhaseQuery_CastShape(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_RShapeCast_t * inShapeCast,
  const JPC_ShapeCastSettings_t * inShapeCastSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CastShapeCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
);

void JPC_NarrowPhaseQuery_CollectTransformedShapes(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_AABox_t * inBox,
  JPC_TransformedShapeCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
);

//endregion functions


#ifdef __cplusplus
}
#endif

