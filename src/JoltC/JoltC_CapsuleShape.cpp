#include "JoltC/JoltC_CapsuleShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CapsuleShape` instance.
 */
JoltC_CapsuleShape_t * JoltC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_CapsuleShape_t * cInstance = new JoltC_CapsuleShape_t();
  CapsuleShape * cppInstance = new CapsuleShape(
    inHalfHeight,
    inRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_CapsuleShape_GetRadius(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetRadius();
}

float JoltC_CapsuleShape_GetHalfHeightOfCylinder(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetHalfHeightOfCylinder();
}

float JoltC_CapsuleShape_GetDensity(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_CapsuleShape_SetDensity(
  JoltC_CapsuleShape_t * self,
  float inDensity
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_CapsuleShape_GetRefCount(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CapsuleShape_AddRef(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CapsuleShape_Release(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_CapsuleShape_GetType(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_CapsuleShape_GetSubType(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_CapsuleShape_MustBeStatic(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_CapsuleShape_GetLocalBounds(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_CapsuleShape_GetWorldSpaceBounds(
  JoltC_CapsuleShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CapsuleShape_GetCenterOfMass(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_CapsuleShape_GetUserData(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_CapsuleShape_SetUserData(
  JoltC_CapsuleShape_t * self,
  unsigned long long int inUserData
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_CapsuleShape_GetInnerRadius(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_CapsuleShape_GetMassProperties(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_CapsuleShape_GetMaterial(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_CapsuleShape_GetSurfaceNormal(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

unsigned long long int JoltC_CapsuleShape_GetSubShapeUserData(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_CapsuleShape_GetSubShapeTransformedShape(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

float JoltC_CapsuleShape_GetVolume(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_CapsuleShape_IsValidScale(
  JoltC_CapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShape_ScaleShape(
  JoltC_CapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

