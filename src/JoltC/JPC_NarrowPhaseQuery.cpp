#include "JoltC/JPC_NarrowPhaseQuery.h"
#include "JoltC/JoltJS.h"

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RRayCast *>(inRay->obj),
  *reinterpret_cast<RayCastSettings *>(inRayCastSettings->obj),
  *reinterpret_cast<CastRayCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JPC_NarrowPhaseQuery_CollidePoint(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_RVec3_t * inPoint,
  JPC_CollidePointCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  
  selfCpp->CollidePoint(
  *reinterpret_cast<RVec3 *>(inPoint->obj),
  *reinterpret_cast<CollidePointCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  
  selfCpp->CollideShape(
  reinterpret_cast<Shape *>(inShape->obj),
  *reinterpret_cast<Vec3 *>(inShapeScale->obj),
  *reinterpret_cast<RMat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<CollideShapeSettings *>(inCollideShapeSettings->obj),
  *reinterpret_cast<RVec3 *>(inBaseOffset->obj),
  *reinterpret_cast<CollideShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  
  selfCpp->CastShape(
  *reinterpret_cast<RShapeCast *>(inShapeCast->obj),
  *reinterpret_cast<ShapeCastSettings *>(inShapeCastSettings->obj),
  *reinterpret_cast<RVec3 *>(inBaseOffset->obj),
  *reinterpret_cast<CastShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JPC_NarrowPhaseQuery_CollectTransformedShapes(
  JPC_NarrowPhaseQuery_t * self,
  const JPC_AABox_t * inBox,
  JPC_TransformedShapeCollector_t * ioCollector,
  const JPC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JPC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JPC_BodyFilter_t * inBodyFilter,
  const JPC_ShapeFilter_t * inShapeFilter
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  
  selfCpp->CollectTransformedShapes(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<TransformedShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
  *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
  *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

