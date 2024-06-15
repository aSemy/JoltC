#include "JoltC/JoltC_MeshShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_MeshShape_destroy(
  JoltC_MeshShape_t * self
){
  if (self == NULL) return;
  delete static_cast<MeshShape *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_MeshShape_GetRefCount(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_MeshShape_AddRef(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_MeshShape_Release(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_MeshShape_GetType(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_MeshShape_GetSubType(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_MeshShape_MustBeStatic(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_MeshShape_GetLocalBounds(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_MeshShape_GetWorldSpaceBounds(
  JoltC_MeshShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_MeshShape_GetCenterOfMass(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_MeshShape_GetUserData(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_MeshShape_SetUserData(
  JoltC_MeshShape_t * self,
  unsigned long long int inUserData
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_MeshShape_GetSubShapeIDBitsRecursive(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_MeshShape_GetInnerRadius(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_MeshShape_GetMassProperties(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_MeshShape_GetMaterial(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_MeshShape_GetSurfaceNormal(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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

unsigned long long int JoltC_MeshShape_GetSubShapeUserData(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_MeshShape_GetSubShapeTransformedShape(
  JoltC_MeshShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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

float JoltC_MeshShape_GetVolume(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_MeshShape_IsValidScale(
  JoltC_MeshShape_t * self,
  JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_MeshShape_ScaleShape(
  JoltC_MeshShape_t * self,
  JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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
