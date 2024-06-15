#include "JoltC/JoltC_BroadPhaseQuery.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BroadPhaseQuery_destroy(
  JoltC_BroadPhaseQuery_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseQuery *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_BroadPhaseQuery_CastRay(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_RayCast_t * inRay,
  JoltC_RayCastBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const RayCast * inRayCpp = static_cast<const RayCast *>(inRay->obj);
  RayCastBodyCollector * ioCollectorCpp = static_cast<RayCastBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CastRay(
    *inRayCpp,
    *ioCollectorCpp,
    *inBroadPhaseFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BroadPhaseQuery_CollideAABox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_AABox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const AABox * inBoxCpp = static_cast<const AABox *>(inBox->obj);
  CollideShapeBodyCollector * ioCollectorCpp = static_cast<CollideShapeBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CollideAABox(
    *inBoxCpp,
    *ioCollectorCpp,
    *inBroadPhaseFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BroadPhaseQuery_CollideSphere(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_Vec3_t * inCenter,
  float inRadius,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const Vec3 * inCenterCpp = static_cast<const Vec3 *>(inCenter->obj);
  CollideShapeBodyCollector * ioCollectorCpp = static_cast<CollideShapeBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CollideSphere(
    *inCenterCpp,
    inRadius,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BroadPhaseQuery_CollidePoint(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_Vec3_t * inPoint,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const Vec3 * inPointCpp = static_cast<const Vec3 *>(inPoint->obj);
  CollideShapeBodyCollector * ioCollectorCpp = static_cast<CollideShapeBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CollidePoint(
    *inPointCpp,
    *ioCollectorCpp,
    *inBroadPhaseFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BroadPhaseQuery_CollideOrientedBox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_OrientedBox_t * inBox,
  JoltC_CollideShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const OrientedBox * inBoxCpp = static_cast<const OrientedBox *>(inBox->obj);
  CollideShapeBodyCollector * ioCollectorCpp = static_cast<CollideShapeBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CollideOrientedBox(
    *inBoxCpp,
    *ioCollectorCpp,
    *inBroadPhaseFilterCpp,
    *inObjectLayerFilterCpp
  );
}

void JoltC_BroadPhaseQuery_CastAABox(
  JoltC_BroadPhaseQuery_t * self,
  JoltC_AABoxCast_t * inBox,
  JoltC_CastShapeBodyCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  const AABoxCast * inBoxCpp = static_cast<const AABoxCast *>(inBox->obj);
  CastShapeBodyCollector * ioCollectorCpp = static_cast<CastShapeBodyCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  selfCpp->CastAABox(
    *inBoxCpp,
    *ioCollectorCpp,
    *inBroadPhaseFilterCpp,
    *inObjectLayerFilterCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
