#include "JoltC/JPC_TransformedShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TransformedShape_t * JPC_TransformedShape_new() {
  JPC_TransformedShape_t * cInstance = new JPC_TransformedShape_t();
  TransformedShape * cppInstance = new TransformedShape();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_TransformedShape_CastRay_0(
  JPC_TransformedShape_t * self,
  const JPC_RRayCast_t * inRay,
  JPC_RayCastResult_t * ioHit
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RRayCast *>(inRay->obj),
  *reinterpret_cast<RayCastResult *>(ioHit->obj)
  );
};

void JPC_TransformedShape_CastRay_1(
  JPC_TransformedShape_t * self,
  const JPC_RRayCast_t * inRay,
  const JPC_RayCastSettings_t * inRayCastSettings,
  JPC_CastRayCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CastRay(
  *reinterpret_cast<RRayCast *>(inRay->obj),
  *reinterpret_cast<RayCastSettings *>(inRayCastSettings->obj),
  *reinterpret_cast<CastRayCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JPC_TransformedShape_CollidePoint(
  JPC_TransformedShape_t * self,
  const JPC_RVec3_t * inPoint,
  JPC_CollidePointCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CollidePoint(
  *reinterpret_cast<RVec3 *>(inPoint->obj),
  *reinterpret_cast<CollidePointCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

void JPC_TransformedShape_CollideShape(
  JPC_TransformedShape_t * self,
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inShapeScale,
  const JPC_RMat44_t * inCenterOfMassTransform,
  const JPC_CollideShapeSettings_t * inCollideShapeSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CollideShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
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

void JPC_TransformedShape_CastShape(
  JPC_TransformedShape_t * self,
  const JPC_RShapeCast_t * inShapeCast,
  const JPC_ShapeCastSettings_t * inShapeCastSettings,
  const JPC_RVec3_t * inBaseOffset,
  JPC_CastShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
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

void JPC_TransformedShape_CollectTransformedShapes(
  JPC_TransformedShape_t * self,
  const JPC_AABox_t * inBox,
  JPC_TransformedShapeCollector_t * ioCollector,
  const JPC_ShapeFilter_t * inShapeFilter
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->CollectTransformedShapes(
  *reinterpret_cast<AABox *>(inBox->obj),
  *reinterpret_cast<TransformedShapeCollector *>(ioCollector->obj),
  *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj)
  );
};

JPC_Vec3_t * JPC_TransformedShape_GetShapeScale(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetShapeScale();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_TransformedShape_SetShapeScale(
  JPC_TransformedShape_t * self,
  const JPC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetShapeScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

JPC_RMat44_t * JPC_TransformedShape_GetCenterOfMassTransform(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_TransformedShape_GetInverseCenterOfMassTransform(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetInverseCenterOfMassTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

void JPC_TransformedShape_SetWorldTransform_0(
  JPC_TransformedShape_t * self,
  const JPC_RVec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetWorldTransform(
  *reinterpret_cast<RVec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

void JPC_TransformedShape_SetWorldTransform_1(
  JPC_TransformedShape_t * self,
  const JPC_RMat44_t * inTransform
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  
  selfCpp->SetWorldTransform(
  *reinterpret_cast<RMat44 *>(inTransform->obj)
  );
};

JPC_RMat44_t * JPC_TransformedShape_GetWorldTransform(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RMat44 resultValue = selfCpp->GetWorldTransform();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_AABox_t * JPC_TransformedShape_GetWorldSpaceBounds(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_TransformedShape_GetWorldSpaceSurfaceNormal(
  JPC_TransformedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_RVec3_t * inPosition
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetWorldSpaceSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<RVec3 *>(inPosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_TransformedShape_GetMaterial(
  JPC_TransformedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

//endregion functions

//region properties

JPC_RVec3_t * JPC_TransformedShape_mShapePositionCOM_Get(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  RVec3 resultValue = selfCpp->mShapePositionCOM;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_TransformedShape_mShapePositionCOM_Set(
  JPC_TransformedShape_t * self,
  JPC_RVec3_t * mShapePositionCOM
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapePositionCOM = *reinterpret_cast<RVec3 *>(mShapePositionCOM->obj);
};

JPC_Quat_t * JPC_TransformedShape_mShapeRotation_Get(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Quat resultValue = selfCpp->mShapeRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_TransformedShape_mShapeRotation_Set(
  JPC_TransformedShape_t * self,
  JPC_Quat_t * mShapeRotation
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeRotation = *reinterpret_cast<Quat *>(mShapeRotation->obj);
};

const JPC_Shape_t * JPC_TransformedShape_mShape_Get(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const void JPC_TransformedShape_mShape_Set(
  JPC_TransformedShape_t * self,
  const JPC_Shape_t * mShape
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

JPC_Float3_t * JPC_TransformedShape_mShapeScale_Get(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  Float3 resultValue = selfCpp->mShapeScale;
  Float3* result = new Float3(resultValue);
  return reinterpret_cast<JPC_Float3_t *>(result);
};

void JPC_TransformedShape_mShapeScale_Set(
  JPC_TransformedShape_t * self,
  JPC_Float3_t * mShapeScale
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mShapeScale = *reinterpret_cast<Float3 *>(mShapeScale->obj);
};

JPC_BodyID_t * JPC_TransformedShape_mBodyID_Get(
  JPC_TransformedShape_t * self
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_TransformedShape_mBodyID_Set(
  JPC_TransformedShape_t * self,
  JPC_BodyID_t * mBodyID
) {
  TransformedShape * selfCpp = static_cast<TransformedShape *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

