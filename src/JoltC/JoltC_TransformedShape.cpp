#include "JoltC/JoltC_TransformedShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `TransformedShape` instance.
 */
JoltC_TransformedShape_t * JoltC_TransformedShape_new() {
  JoltC_TransformedShape_t * cInstance = new JoltC_TransformedShape_t();
  TransformedShape * cppInstance = new TransformedShape();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_TransformedShape_destroy(
  JoltC_TransformedShape_t * self
){
  if (self == NULL) return;
  delete static_cast<TransformedShape *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_TransformedShape_CastRay_0(
  JoltC_TransformedShape_t * self,
  JoltC_RRayCast_t * inRay,
  JoltC_RayCastResult_t * ioHit
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RRayCast * inRayCpp = static_cast<const RRayCast *>(inRay->obj);
  RayCastResult * ioHitCpp = static_cast<RayCastResult *>(ioHit->obj);
  selfCpp->CastRay(
    *inRayCpp,
    *ioHitCpp
  );
}

void JoltC_TransformedShape_CastRay_1(
  JoltC_TransformedShape_t * self,
  JoltC_RRayCast_t * inRay,
  JoltC_RayCastSettings_t * inRayCastSettings,
  JoltC_CastRayCollector_t * ioCollector,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RRayCast * inRayCpp = static_cast<const RRayCast *>(inRay->obj);
  const RayCastSettings * inRayCastSettingsCpp = static_cast<const RayCastSettings *>(inRayCastSettings->obj);
  CastRayCollector * ioCollectorCpp = static_cast<CastRayCollector *>(ioCollector->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CastRay(
    *inRayCpp,
    *inRayCastSettingsCpp,
    *ioCollectorCpp,
    *inShapeFilterCpp
  );
}

void JoltC_TransformedShape_CollidePoint(
  JoltC_TransformedShape_t * self,
  JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RVec3 * inPointCpp = static_cast<const RVec3 *>(inPoint->obj);
  CollidePointCollector * ioCollectorCpp = static_cast<CollidePointCollector *>(ioCollector->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollidePoint(
    *inPointCpp,
    *ioCollectorCpp,
    *inShapeFilterCpp
  );
}

void JoltC_TransformedShape_CollideShape(
  JoltC_TransformedShape_t * self,
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inShapeScale,
  JoltC_RMat44_t * inCenterOfMassTransform,
  JoltC_CollideShapeSettings_t * inCollideShapeSettings,
  JoltC_RVec3_t * inBaseOffset,
  JoltC_CollideShapeCollector_t * ioCollector,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const Vec3 * inShapeScaleCpp = static_cast<const Vec3 *>(inShapeScale->obj);
  const RMat44 * inCenterOfMassTransformCpp = static_cast<const RMat44 *>(inCenterOfMassTransform->obj);
  const CollideShapeSettings * inCollideShapeSettingsCpp = static_cast<const CollideShapeSettings *>(inCollideShapeSettings->obj);
  const RVec3 * inBaseOffsetCpp = static_cast<const RVec3 *>(inBaseOffset->obj);
  CollideShapeCollector * ioCollectorCpp = static_cast<CollideShapeCollector *>(ioCollector->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollideShape(
    inShapeCpp,
    *inShapeScaleCpp,
    *inCenterOfMassTransformCpp,
    *inCollideShapeSettingsCpp,
    *inBaseOffsetCpp,
    *ioCollectorCpp,
    *inShapeFilterCpp
  );
}

void JoltC_TransformedShape_CastShape(
  JoltC_TransformedShape_t * self,
  JoltC_RShapeCast_t * inShapeCast,
  JoltC_ShapeCastSettings_t * inShapeCastSettings,
  JoltC_RVec3_t * inBaseOffset,
  JoltC_CastShapeCollector_t * ioCollector,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RShapeCast * inShapeCastCpp = static_cast<const RShapeCast *>(inShapeCast->obj);
  const ShapeCastSettings * inShapeCastSettingsCpp = static_cast<const ShapeCastSettings *>(inShapeCastSettings->obj);
  const RVec3 * inBaseOffsetCpp = static_cast<const RVec3 *>(inBaseOffset->obj);
  CastShapeCollector * ioCollectorCpp = static_cast<CastShapeCollector *>(ioCollector->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CastShape(
    *inShapeCastCpp,
    *inShapeCastSettingsCpp,
    *inBaseOffsetCpp,
    *ioCollectorCpp,
    *inShapeFilterCpp
  );
}

void JoltC_TransformedShape_CollectTransformedShapes(
  JoltC_TransformedShape_t * self,
  JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const AABox * inBoxCpp = static_cast<const AABox *>(inBox->obj);
  TransformedShapeCollector * ioCollectorCpp = static_cast<TransformedShapeCollector *>(ioCollector->obj);
  const ShapeFilter * inShapeFilterCpp = static_cast<const ShapeFilter *>(inShapeFilter->obj);
  selfCpp->CollectTransformedShapes(
    *inBoxCpp,
    *ioCollectorCpp,
    *inShapeFilterCpp
  );
}

JoltC_Vec3_t * JoltC_TransformedShape_GetShapeScale(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetShapeScale();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_SetShapeScale(
  JoltC_TransformedShape_t * self,
  JoltC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  selfCpp->SetShapeScale(
    *inScaleCpp
  );
}

JoltC_RMat44_t * JoltC_TransformedShape_GetCenterOfMassTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetCenterOfMassTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_TransformedShape_GetInverseCenterOfMassTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetInverseCenterOfMassTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_SetWorldTransform_0(
  JoltC_TransformedShape_t * self,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  selfCpp->SetWorldTransform(
    *inPositionCpp,
    *inRotationCpp,
    *inScaleCpp
  );
}

void JoltC_TransformedShape_SetWorldTransform_1(
  JoltC_TransformedShape_t * self,
  JoltC_RMat44_t * inTransform
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const RMat44 * inTransformCpp = static_cast<const RMat44 *>(inTransform->obj);
  selfCpp->SetWorldTransform(
    *inTransformCpp
  );
}

JoltC_RMat44_t * JoltC_TransformedShape_GetWorldTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->GetWorldTransform();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_TransformedShape_GetWorldSpaceBounds(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_TransformedShape_GetWorldSpaceSurfaceNormal(
  JoltC_TransformedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_RVec3_t * inPosition
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const RVec3 * inPositionCpp = static_cast<const RVec3 *>(inPosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetWorldSpaceSurfaceNormal(
    *inSubShapeIDCpp,
    *inPositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_TransformedShape_GetMaterial(
  JoltC_TransformedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion

//region properties

JoltC_RVec3_t * JoltC_TransformedShape_mShapePositionCOM_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mShapePositionCOM;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_mShapePositionCOM_Set(
  JoltC_TransformedShape_t * self,
  JoltC_RVec3_t * mShapePositionCOM
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapePositionCOM = *static_cast<RVec3 *>(mShapePositionCOM->obj);
}

JoltC_Quat_t * JoltC_TransformedShape_mShapeRotation_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mShapeRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_mShapeRotation_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Quat_t * mShapeRotation
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeRotation = *static_cast<Quat *>(mShapeRotation->obj);
}

JoltC_Shape_t * JoltC_TransformedShape_mShape_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const Shape * resultPtr = selfCpp->mShape;
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_TransformedShape_mShape_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Shape_t * mShape
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShape = static_cast<const Shape *>(mShape->obj);
}

JoltC_Float3_t * JoltC_TransformedShape_mShapeScale_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Float3 * resultPtr = new Float3();
  *resultPtr = selfCpp->mShapeScale;
  JoltC_Float3_t * result = new JoltC_Float3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_mShapeScale_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Float3_t * mShapeScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeScale = *static_cast<Float3 *>(mShapeScale->obj);
}

JoltC_BodyID_t * JoltC_TransformedShape_mBodyID_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->mBodyID;
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TransformedShape_mBodyID_Set(
  JoltC_TransformedShape_t * self,
  JoltC_BodyID_t * mBodyID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mBodyID = *static_cast<BodyID *>(mBodyID->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
