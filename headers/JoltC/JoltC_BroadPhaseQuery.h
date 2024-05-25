#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_BroadPhaseQuery_CastRay(
  JPC_BroadPhaseQuery_t * self,
  const JPC_RayCast_t * inRay,
  JPC_RayCastBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BroadPhaseQuery_CollideAABox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_AABox_t * inBox,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BroadPhaseQuery_CollideSphere(
  JPC_BroadPhaseQuery_t * self,
  const JPC_Vec3_t * inCenter,
  float inRadius,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BroadPhaseQuery_CollidePoint(
  JPC_BroadPhaseQuery_t * self,
  const JPC_Vec3_t * inPoint,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BroadPhaseQuery_CollideOrientedBox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_OrientedBox_t * inBox,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JPC_BroadPhaseQuery_CastAABox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_AABoxCast_t * inBox,
  JPC_CastShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
);

//endregion functions


#ifdef __cplusplus
}
#endif

