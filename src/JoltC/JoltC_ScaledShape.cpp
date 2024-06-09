#include "JoltC/JoltC_ScaledShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ScaledShape` instance.
 */
JoltC_ScaledShape_t * JoltC_ScaledShape_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale
) {
  Shape * inShapeCpp = static_cast<Shape *>(inShape->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  JoltC_ScaledShape_t * cInstance = new JoltC_ScaledShape_t();
  ScaledShape * cppInstance = new ScaledShape(
    inShapeCpp,
    *inScaleCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Vec3_t * JoltC_ScaledShape_GetScale(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetScale();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_ScaledShape_GetInnerShape(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const Shape * resultPtr = selfCpp->GetInnerShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_ScaledShape_GetRefCount(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ScaledShape_AddRef(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ScaledShape_Release(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_ScaledShape_GetType(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_ScaledShape_GetSubType(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_ScaledShape_MustBeStatic(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_ScaledShape_GetLocalBounds(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_ScaledShape_GetWorldSpaceBounds(
  JoltC_ScaledShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ScaledShape_GetCenterOfMass(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_ScaledShape_GetUserData(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_ScaledShape_SetUserData(
  JoltC_ScaledShape_t * self,
  unsigned long long int inUserData
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_ScaledShape_GetSubShapeIDBitsRecursive(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_ScaledShape_GetInnerRadius(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_ScaledShape_GetMassProperties(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_ScaledShape_GetMaterial(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_ScaledShape_GetSurfaceNormal(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

unsigned long long int JoltC_ScaledShape_GetSubShapeUserData(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_ScaledShape_GetSubShapeTransformedShape(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

float JoltC_ScaledShape_GetVolume(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_ScaledShape_IsValidScale(
  JoltC_ScaledShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_ScaledShape_ScaleShape(
  JoltC_ScaledShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

