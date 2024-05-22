#include "JoltC/JPC_BroadPhaseQuery.h"
#include "JoltC/JoltJS.h"

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
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RayCast *>(inRay->obj),
  *reinterpret_cast<RayCastBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JPC_BroadPhaseQuery_CollideAABox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_AABox_t * inBox,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollideAABox(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JPC_BroadPhaseQuery_CollideSphere(
  JPC_BroadPhaseQuery_t * self,
  const JPC_Vec3_t * inCenter,
  float inRadius,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
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

void JPC_BroadPhaseQuery_CollidePoint(
  JPC_BroadPhaseQuery_t * self,
  const JPC_Vec3_t * inPoint,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollidePoint(
  *reinterpret_cast<Vec3 *>(inPoint->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JPC_BroadPhaseQuery_CollideOrientedBox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_OrientedBox_t * inBox,
  JPC_CollideShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CollideOrientedBox(
  *reinterpret_cast<OrientedBox *>(inBox->obj),
  *reinterpret_cast<CollideShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

void JPC_BroadPhaseQuery_CastAABox(
  JPC_BroadPhaseQuery_t * self,
  const JPC_AABoxCast_t * inBox,
  JPC_CastShapeBodyCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter
) {
  BroadPhaseQuery * selfCpp = static_cast<BroadPhaseQuery *>(self->obj);
  
  selfCpp->CastAABox(
  *reinterpret_cast<AABoxCast *>(inBox->obj),
  *reinterpret_cast<CastShapeBodyCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

