#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_NarrowPhaseQuery_destroy(
  JoltC_NarrowPhaseQuery_t * self
);

//endregion
//region functions

void JoltC_NarrowPhaseQuery_CastRay(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_RRayCast_t * inRay,
  JoltC_RayCastSettings_t * inRayCastSettings,
  JoltC_CastRayCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollidePoint(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollideShape(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inShapeScale,
  JoltC_RMat44_t * inCenterOfMassTransform,
  JoltC_CollideShapeSettings_t * inCollideShapeSettings,
  JoltC_RVec3_t * inBaseOffset,
  JoltC_CollideShapeCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CastShape(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_RShapeCast_t * inShapeCast,
  JoltC_ShapeCastSettings_t * inShapeCastSettings,
  JoltC_RVec3_t * inBaseOffset,
  JoltC_CastShapeCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
);

void JoltC_NarrowPhaseQuery_CollectTransformedShapes(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
);

//endregion


#ifdef __cplusplus
}
#endif
