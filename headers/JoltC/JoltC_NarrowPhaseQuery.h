#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_NarrowPhaseQuery_CastRay(
  JoltC_NarrowPhaseQuery_t * self,
  const JoltC_RRayCast_t * inRay,
  const JoltC_RayCastSettings_t * inRayCastSettings,
  JoltC_CastRayCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollidePoint(
  JoltC_NarrowPhaseQuery_t * self,
  const JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollideShape(
  JoltC_NarrowPhaseQuery_t * self,
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inShapeScale,
  const JoltC_RMat44_t * inCenterOfMassTransform,
  const JoltC_CollideShapeSettings_t * inCollideShapeSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CollideShapeCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CastShape(
  JoltC_NarrowPhaseQuery_t * self,
  const JoltC_RShapeCast_t * inShapeCast,
  const JoltC_ShapeCastSettings_t * inShapeCastSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CastShapeCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollectTransformedShapes(
  JoltC_NarrowPhaseQuery_t * self,
  const JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter
);

//endregion


#ifdef __cplusplus
}
#endif

