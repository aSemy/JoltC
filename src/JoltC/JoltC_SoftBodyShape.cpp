#include "JoltC/JoltC_SoftBodyShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const unsigned long JoltC_SoftBodyShape_GetSubShapeIDBits(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetSubShapeIDBits();
}

const unsigned long JoltC_SoftBodyShape_GetFaceIndex(
  JoltC_SoftBodyShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetFaceIndex(
    *inSubShapeIDCpp
  );
}

unsigned long JoltC_SoftBodyShape_GetRefCount(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SoftBodyShape_AddRef(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SoftBodyShape_Release(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_SoftBodyShape_GetType(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_SoftBodyShape_GetSubType(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_SoftBodyShape_MustBeStatic(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_SoftBodyShape_GetLocalBounds(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_SoftBodyShape_GetWorldSpaceBounds(
  JoltC_SoftBodyShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_SoftBodyShape_GetCenterOfMass(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_SoftBodyShape_GetUserData(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_SoftBodyShape_SetUserData(
  JoltC_SoftBodyShape_t * self,
  unsigned long long int inUserData
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_SoftBodyShape_GetSubShapeIDBitsRecursive(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_SoftBodyShape_GetInnerRadius(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_SoftBodyShape_GetMassProperties(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_SoftBodyShape_GetMaterial(
  JoltC_SoftBodyShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyShape_GetSurfaceNormal(
  JoltC_SoftBodyShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

unsigned long long int JoltC_SoftBodyShape_GetSubShapeUserData(
  JoltC_SoftBodyShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_SoftBodyShape_GetSubShapeTransformedShape(
  JoltC_SoftBodyShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

float JoltC_SoftBodyShape_GetVolume(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_SoftBodyShape_IsValidScale(
  JoltC_SoftBodyShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_SoftBodyShape_ScaleShape(
  JoltC_SoftBodyShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

