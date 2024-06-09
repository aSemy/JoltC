#include "JoltC/JoltC_CylinderShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CylinderShape` instance.
 */
JoltC_CylinderShape_t * JoltC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_CylinderShape_t * cInstance = new JoltC_CylinderShape_t();
  CylinderShape * cppInstance = new CylinderShape(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_CylinderShape_GetRadius(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetRadius();
}

float JoltC_CylinderShape_GetHalfHeight(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetHalfHeight();
}

float JoltC_CylinderShape_GetDensity(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_CylinderShape_SetDensity(
  JoltC_CylinderShape_t * self,
  float inDensity
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_CylinderShape_GetRefCount(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CylinderShape_AddRef(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CylinderShape_Release(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_CylinderShape_GetType(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_CylinderShape_GetSubType(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_CylinderShape_MustBeStatic(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_CylinderShape_GetLocalBounds(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_CylinderShape_GetWorldSpaceBounds(
  JoltC_CylinderShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CylinderShape_GetCenterOfMass(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_CylinderShape_GetUserData(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_CylinderShape_SetUserData(
  JoltC_CylinderShape_t * self,
  unsigned long long int inUserData
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_CylinderShape_GetSubShapeIDBitsRecursive(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_CylinderShape_GetInnerRadius(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_CylinderShape_GetMassProperties(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_CylinderShape_GetMaterial(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_CylinderShape_GetSurfaceNormal(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

unsigned long long int JoltC_CylinderShape_GetSubShapeUserData(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_CylinderShape_GetSubShapeTransformedShape(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JoltC_CylinderShape_GetVolume(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_CylinderShape_IsValidScale(
  JoltC_CylinderShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_CylinderShape_ScaleShape(
  JoltC_CylinderShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

