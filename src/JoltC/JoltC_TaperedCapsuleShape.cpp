#include "JoltC/JoltC_TaperedCapsuleShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_TaperedCapsuleShape_destroy(
  JoltC_TaperedCapsuleShape_t * self
){
  if (self == NULL) return;
  delete static_cast<TaperedCapsuleShape *>(self->obj);
  free(self);
}

//endregion
//region functions

float JoltC_TaperedCapsuleShape_GetDensity(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_TaperedCapsuleShape_SetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  float inDensity
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_TaperedCapsuleShape_GetRefCount(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_TaperedCapsuleShape_AddRef(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_TaperedCapsuleShape_Release(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_TaperedCapsuleShape_GetType(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_TaperedCapsuleShape_GetSubType(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_TaperedCapsuleShape_MustBeStatic(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetLocalBounds(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetCenterOfMass(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_TaperedCapsuleShape_GetUserData(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_TaperedCapsuleShape_SetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_TaperedCapsuleShape_GetInnerRadius(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_TaperedCapsuleShape_GetMassProperties(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShape_GetMaterial(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetSurfaceNormal(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
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

unsigned long long int JoltC_TaperedCapsuleShape_GetSubShapeUserData(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
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

float JoltC_TaperedCapsuleShape_GetVolume(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_TaperedCapsuleShape_IsValidScale(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShape_ScaleShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
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
