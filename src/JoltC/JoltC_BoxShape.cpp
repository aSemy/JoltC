#include "JoltC/JoltC_BoxShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BoxShape` instance.
 */
JoltC_BoxShape_t * JoltC_BoxShape_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  Vec3 * inHalfExtentCpp = static_cast<Vec3 *>(inHalfExtent->obj);
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  JoltC_BoxShape_t * cInstance = new JoltC_BoxShape_t();
  BoxShape * cppInstance = new BoxShape(
    *inHalfExtentCpp,
    inConvexRadius,
    inMaterialCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_BoxShape_destroy(
  JoltC_BoxShape_t * self
){
  if (self == NULL) return;
  delete static_cast<BoxShape *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Vec3_t * JoltC_BoxShape_GetHalfExtent(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetHalfExtent();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_BoxShape_GetDensity(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_BoxShape_SetDensity(
  JoltC_BoxShape_t * self,
  float inDensity
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_BoxShape_GetRefCount(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_BoxShape_AddRef(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_BoxShape_Release(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_BoxShape_GetType(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_BoxShape_GetSubType(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_BoxShape_MustBeStatic(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_BoxShape_GetLocalBounds(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_BoxShape_GetWorldSpaceBounds(
  JoltC_BoxShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_BoxShape_GetCenterOfMass(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_BoxShape_GetUserData(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_BoxShape_SetUserData(
  JoltC_BoxShape_t * self,
  unsigned long long int inUserData
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_BoxShape_GetSubShapeIDBitsRecursive(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_BoxShape_GetInnerRadius(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_BoxShape_GetMassProperties(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_BoxShape_GetMaterial(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_BoxShape_GetSurfaceNormal(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

unsigned long long int JoltC_BoxShape_GetSubShapeUserData(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_BoxShape_GetSubShapeTransformedShape(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

float JoltC_BoxShape_GetVolume(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_BoxShape_IsValidScale(
  JoltC_BoxShape_t * self,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_BoxShape_ScaleShape(
  JoltC_BoxShape_t * self,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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
