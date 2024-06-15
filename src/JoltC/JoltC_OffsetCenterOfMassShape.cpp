#include "JoltC/JoltC_OffsetCenterOfMassShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `OffsetCenterOfMassShape` instance.
 */
JoltC_OffsetCenterOfMassShape_t * JoltC_OffsetCenterOfMassShape_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inOffset
) {
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  const Vec3 * inOffsetCpp = static_cast<const Vec3 *>(inOffset->obj);
  JoltC_OffsetCenterOfMassShape_t * cInstance = new JoltC_OffsetCenterOfMassShape_t();
  OffsetCenterOfMassShape * cppInstance = new OffsetCenterOfMassShape(
    inShapeCpp,
    *inOffsetCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_OffsetCenterOfMassShape_destroy(
  JoltC_OffsetCenterOfMassShape_t * self
){
  if (self == NULL) return;
  delete static_cast<OffsetCenterOfMassShape *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Shape_t * JoltC_OffsetCenterOfMassShape_GetInnerShape(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Shape * resultPtr = selfCpp->GetInnerShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_OffsetCenterOfMassShape_GetRefCount(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_OffsetCenterOfMassShape_AddRef(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_OffsetCenterOfMassShape_Release(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_OffsetCenterOfMassShape_GetType(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_OffsetCenterOfMassShape_GetSubType(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_OffsetCenterOfMassShape_MustBeStatic(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetLocalBounds(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetWorldSpaceBounds(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Mat44 * inCenterOfMassTransformCpp = static_cast<const Mat44 *>(inCenterOfMassTransform->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds(
    *inCenterOfMassTransformCpp,
    *inScaleCpp
  );
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetCenterOfMass(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_OffsetCenterOfMassShape_GetUserData(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_OffsetCenterOfMassShape_SetUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  unsigned long long int inUserData
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_OffsetCenterOfMassShape_GetSubShapeIDBitsRecursive(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_OffsetCenterOfMassShape_GetInnerRadius(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_OffsetCenterOfMassShape_GetMassProperties(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_OffsetCenterOfMassShape_GetMaterial(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetSurfaceNormal(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inLocalSurfacePositionCpp = static_cast<const Vec3 *>(inLocalSurfacePosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetSurfaceNormal(
    *inSubShapeIDCpp,
    *inLocalSurfacePositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_OffsetCenterOfMassShape_GetSubShapeUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_OffsetCenterOfMassShape_GetSubShapeTransformedShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inPositionCOMCpp = static_cast<const Vec3 *>(inPositionCOM->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  SubShapeID * outRemainderCpp = static_cast<SubShapeID *>(outRemainder->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetSubShapeTransformedShape(
    *inSubShapeIDCpp,
    *inPositionCOMCpp,
    *inRotationCpp,
    *inScaleCpp,
    *outRemainderCpp
  );
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_OffsetCenterOfMassShape_GetVolume(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_OffsetCenterOfMassShape_IsValidScale(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShape_ScaleShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ScaleShape(
    *inScaleCpp
  );
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
