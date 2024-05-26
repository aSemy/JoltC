#include "JoltC/JoltC_BroadPhaseQuery.h"
#include "JoltC/JoltJS.h"
#include <exception>

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
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RayCast *>(inRay->obj),
  *reinterpret_cast<RayCastBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BroadPhaseQuery_CollideAABox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_AABox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollideAABox(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BroadPhaseQuery_CollideSphere(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_Vec3_t * inCenter,
  float inRadius,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollideSphere(
  *reinterpret_cast<Vec3 *>(inCenter->obj),
  inRadius,
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BroadPhaseQuery_CollidePoint(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_Vec3_t * inPoint,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollidePoint(
  *reinterpret_cast<Vec3 *>(inPoint->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BroadPhaseQuery_CollideOrientedBox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_OrientedBox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollideOrientedBox(
  *reinterpret_cast<OrientedBox *>(inBox->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JoltC_BroadPhaseQuery_CastAABox(
  JoltC_BroadPhaseQuery_t * self,
  const JoltC_AABoxCast_t * inBox,
  JoltC_CastShapeBodyCollector_t * ioCollector,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CastAABox(
  *reinterpret_cast<AABoxCast *>(inBox->obj),
  *reinterpret_cast<CastShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

