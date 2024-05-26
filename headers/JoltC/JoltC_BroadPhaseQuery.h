#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_BroadPhaseQuery_CastRay(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_RayCast_t * inRay,
  JoltC_RayCastBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideAABox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_AABox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideSphere(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_Vec3_t * inCenter,
  float inRadius,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollidePoint(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_Vec3_t * inPoint,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideOrientedBox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_OrientedBox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CastAABox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_AABoxCast_t * inBox,
  JoltC_CastShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

//endregion


#ifdef __cplusplus
}
#endif

