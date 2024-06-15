#include "JoltC/JoltC_NarrowPhaseQuery.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_NarrowPhaseQuery_destroy(
  JoltC_NarrowPhaseQuery_t * self
){
  if (self == NULL) return;
  delete static_cast<NarrowPhaseQuery *>(self->obj);
  free(self);
}

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  const RRayCast * inRayCpp = static_cast<const RRayCast *>(inRay->obj);
  const RayCastSettings * inRayCastSettingsCpp = static_cast<const RayCastSettings *>(inRayCastSettings->obj);
  CastRayCollector * ioCollectorCpp = static_cast<CastRayCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CastRay(
    *inRayCpp,
    *inRayCastSettingsCpp,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp
  );
}

void JoltC_NarrowPhaseQuery_CollidePoint(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  const RVec3 * inPointCpp = static_cast<const RVec3 *>(inPoint->obj);
  CollidePointCollector * ioCollectorCpp = static_cast<CollidePointCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollidePoint(
    *inPointCpp,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp
  );
}

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const Vec3 * inShapeScaleCpp = static_cast<const Vec3 *>(inShapeScale->obj);
  const RMat44 * inCenterOfMassTransformCpp = static_cast<const RMat44 *>(inCenterOfMassTransform->obj);
  const CollideShapeSettings * inCollideShapeSettingsCpp = static_cast<const CollideShapeSettings *>(inCollideShapeSettings->obj);
  const RVec3 * inBaseOffsetCpp = static_cast<const RVec3 *>(inBaseOffset->obj);
  CollideShapeCollector * ioCollectorCpp = static_cast<CollideShapeCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollideShape(
    inShapeCpp,
    *inShapeScaleCpp,
    *inCenterOfMassTransformCpp,
    *inCollideShapeSettingsCpp,
    *inBaseOffsetCpp,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp
  );
}

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
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  const RShapeCast * inShapeCastCpp = static_cast<const RShapeCast *>(inShapeCast->obj);
  const ShapeCastSettings * inShapeCastSettingsCpp = static_cast<const ShapeCastSettings *>(inShapeCastSettings->obj);
  const RVec3 * inBaseOffsetCpp = static_cast<const RVec3 *>(inBaseOffset->obj);
  CastShapeCollector * ioCollectorCpp = static_cast<CastShapeCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CastShape(
    *inShapeCastCpp,
    *inShapeCastSettingsCpp,
    *inBaseOffsetCpp,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp
  );
}

void JoltC_NarrowPhaseQuery_CollectTransformedShapes(
  JoltC_NarrowPhaseQuery_t * self,
  JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  JoltC_BodyFilter_t * inBodyFilter,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  NarrowPhaseQuery * selfCpp = static_cast<NarrowPhaseQuery *>(self->obj);
  const AABox * inBoxCpp = static_cast<const AABox *>(inBox->obj);
  TransformedShapeCollector * ioCollectorCpp = static_cast<TransformedShapeCollector *>(ioCollector->obj);
  const BroadPhaseLayerFilter * inBroadPhaseLayerFilterCpp = static_cast<const BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj);
  const ObjectLayerFilter * inObjectLayerFilterCpp = static_cast<const ObjectLayerFilter *>(inObjectLayerFilter->obj);
  const BodyFilter * inBodyFilterCpp = static_cast<const BodyFilter *>(inBodyFilter->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollectTransformedShapes(
    *inBoxCpp,
    *ioCollectorCpp,
    *inBroadPhaseLayerFilterCpp,
    *inObjectLayerFilterCpp,
    *inBodyFilterCpp,
    *inShapeFilterCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
