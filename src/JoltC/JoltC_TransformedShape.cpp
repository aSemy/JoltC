#include "JoltC/JoltC_TransformedShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TransformedShape_t * JoltC_TransformedShape_new() {
  JoltC_TransformedShape_t * cInstance = new JoltC_TransformedShape_t();
  TransformedShape * cppInstance = new TransformedShape();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_TransformedShape_CastRay_0(
  JoltC_TransformedShape_t * self,
  const JoltC_RRayCast_t * inRay,
  JoltC_RayCastResult_t * ioHit
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RRayCast *>(inRay->obj),
  *reinterpret_cast<RayCastResult *>(ioHit->obj)
  );
};

void JoltC_TransformedShape_CastRay_1(
  JoltC_TransformedShape_t * self,
  const JoltC_RRayCast_t * inRay,
  const JoltC_RayCastSettings_t * inRayCastSettings,
  JoltC_CastRayCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RRayCast *>(inRay->obj),
  *reinterpret_cast<RayCastSettings *>(inRayCastSettings->obj),
  *reinterpret_cast<CastRayCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JoltC_TransformedShape_CollidePoint(
  JoltC_TransformedShape_t * self,
  const JoltC_RVec3_t * inPoint,
  JoltC_CollidePointCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CollidePoint(
  *reinterpret_cast<RVec3 *>(inPoint->obj),
  *reinterpret_cast<CollidePointCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JoltC_TransformedShape_CollideShape(
  JoltC_TransformedShape_t * self,
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inShapeScale,
  const JoltC_RMat44_t * inCenterOfMassTransform,
  const JoltC_CollideShapeSettings_t * inCollideShapeSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CollideShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CollideShape(
  reinterpret_cast<Shape *>(inShape->obj),
  *reinterpret_cast<Vec3 *>(inShapeScale->obj),
  *reinterpret_cast<RMat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<CollideShapeSettings *>(inCollideShapeSettings->obj),
  *reinterpret_cast<RVec3 *>(inBaseOffset->obj),
  *reinterpret_cast<CollideShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JoltC_TransformedShape_CastShape(
  JoltC_TransformedShape_t * self,
  const JoltC_RShapeCast_t * inShapeCast,
  const JoltC_ShapeCastSettings_t * inShapeCastSettings,
  const JoltC_RVec3_t * inBaseOffset,
  JoltC_CastShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CastShape(
  *reinterpret_cast<RShapeCast *>(inShapeCast->obj),
  *reinterpret_cast<ShapeCastSettings *>(inShapeCastSettings->obj),
  *reinterpret_cast<RVec3 *>(inBaseOffset->obj),
  *reinterpret_cast<CastShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JoltC_TransformedShape_CollectTransformedShapes(
  JoltC_TransformedShape_t * self,
  const JoltC_AABox_t * inBox,
  JoltC_TransformedShapeCollector_t * ioCollector,
  const JoltC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CollectTransformedShapes(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<TransformedShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

JoltC_Vec3_t * JoltC_TransformedShape_GetShapeScale(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetShapeScale();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_TransformedShape_SetShapeScale(
  JoltC_TransformedShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetShapeScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

JoltC_RMat44_t * JoltC_TransformedShape_GetCenterOfMassTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_RMat44_t * JoltC_TransformedShape_GetInverseCenterOfMassTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetInverseCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

void JoltC_TransformedShape_SetWorldTransform_0(
  JoltC_TransformedShape_t * self,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetWorldTransform(
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

void JoltC_TransformedShape_SetWorldTransform_1(
  JoltC_TransformedShape_t * self,
  const JoltC_RMat44_t * inTransform
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetWorldTransform(
  *reinterpret_cast<RMat44 *>(inTransform->obj)
  );
};

JoltC_RMat44_t * JoltC_TransformedShape_GetWorldTransform(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JoltC_RMat44_t *>(result);
};

JoltC_AABox_t * JoltC_TransformedShape_GetWorldSpaceBounds(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_TransformedShape_GetWorldSpaceSurfaceNormal(
  JoltC_TransformedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_RVec3_t * inPosition
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetWorldSpaceSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_TransformedShape_GetMaterial(
  JoltC_TransformedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

//endregion

//region properties

JoltC_RVec3_t * JoltC_TransformedShape_mShapePositionCOM_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RVec3 resultValue = selfCpp->mShapePositionCOM;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_TransformedShape_mShapePositionCOM_Set(
  JoltC_TransformedShape_t * self,
  JoltC_RVec3_t * mShapePositionCOM
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapePositionCOM = *reinterpret_cast<RVec3 *>(mShapePositionCOM->obj);
};

JoltC_Quat_t * JoltC_TransformedShape_mShapeRotation_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Quat resultValue = selfCpp->mShapeRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_TransformedShape_mShapeRotation_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Quat_t * mShapeRotation
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeRotation = *reinterpret_cast<Quat *>(mShapeRotation->obj);
};

const JoltC_Shape_t * JoltC_TransformedShape_mShape_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const void JoltC_TransformedShape_mShape_Set(
  JoltC_TransformedShape_t * self,
  const JoltC_Shape_t * mShape
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

JoltC_Float3_t * JoltC_TransformedShape_mShapeScale_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Float3 resultValue = selfCpp->mShapeScale;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JoltC_Float3_t *>(result);
};

void JoltC_TransformedShape_mShapeScale_Set(
  JoltC_TransformedShape_t * self,
  JoltC_Float3_t * mShapeScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeScale = *reinterpret_cast<Float3 *>(mShapeScale->obj);
};

JoltC_BodyID_t * JoltC_TransformedShape_mBodyID_Get(
  JoltC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_TransformedShape_mBodyID_Set(
  JoltC_TransformedShape_t * self,
  JoltC_BodyID_t * mBodyID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

