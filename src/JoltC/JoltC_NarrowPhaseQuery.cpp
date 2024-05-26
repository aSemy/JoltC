#include "JoltC/JoltC_NarrowPhaseQuery.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

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
  
  selfCpp->CollidePoint(
    *reinterpret_cast<RVec3 *>(inPoint->obj),
    *reinterpret_cast<CollidePointCollector *>(ioCollector->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

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
  
  selfCpp->CollectTransformedShapes(
    *reinterpret_cast<AABox *>(inBox->obj),
    *reinterpret_cast<TransformedShapeCollector *>(ioCollector->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

