#include "JoltC/JoltC_SphereShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SphereShape` instance.
 */
JoltC_SphereShape_t * JoltC_SphereShape_new(
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_SphereShape_t * cInstance = new JoltC_SphereShape_t();
  SphereShape * cppInstance = new SphereShape(
    inRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SphereShape_destroy(
  JoltC_SphereShape_t * self
){
  if (self == NULL) return;
  delete static_cast<SphereShape *>(self->obj);
  free(self);
}

//endregion
//region functions

float JoltC_SphereShape_GetRadius(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetRadius();
}

float JoltC_SphereShape_GetDensity(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_SphereShape_SetDensity(
  JoltC_SphereShape_t * self,
  float inDensity
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_SphereShape_GetRefCount(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SphereShape_AddRef(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SphereShape_Release(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_SphereShape_GetType(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_SphereShape_GetSubType(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_SphereShape_MustBeStatic(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_SphereShape_GetLocalBounds(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_SphereShape_GetWorldSpaceBounds(
  JoltC_SphereShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_SphereShape_GetCenterOfMass(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_SphereShape_GetUserData(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_SphereShape_SetUserData(
  JoltC_SphereShape_t * self,
  unsigned long long int inUserData
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_SphereShape_GetSubShapeIDBitsRecursive(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_SphereShape_GetInnerRadius(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_SphereShape_GetMassProperties(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_SphereShape_GetMaterial(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_SphereShape_GetSurfaceNormal(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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

unsigned long long int JoltC_SphereShape_GetSubShapeUserData(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_SphereShape_GetSubShapeTransformedShape(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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

float JoltC_SphereShape_GetVolume(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_SphereShape_IsValidScale(
  JoltC_SphereShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_SphereShape_ScaleShape(
  JoltC_SphereShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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
