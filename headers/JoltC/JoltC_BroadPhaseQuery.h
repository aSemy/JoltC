#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BroadPhaseQuery_destroy(
  JoltC_BroadPhaseQuery_t * self
);

//endregion
//region functions

void JoltC_BroadPhaseQuery_CastRay(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_RayCast_t * inRay,
  JoltC_RayCastBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideAABox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_AABox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideSphere(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_Vec3_t * inCenter,
  float inRadius,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollidePoint(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_Vec3_t * inPoint,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CollideOrientedBox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_OrientedBox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

void JoltC_BroadPhaseQuery_CastAABox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_AABoxCast_t * inBox,
  JoltC_CastShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
);

//endregion


#ifdef __cplusplus
}
#endif
