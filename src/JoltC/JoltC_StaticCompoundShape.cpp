#include "JoltC/JoltC_StaticCompoundShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_StaticCompoundShape_GetNumSubShapes(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetNumSubShapes();
}

JoltC_CompoundShapeSubShape_t * JoltC_StaticCompoundShape_GetSubShape(
  JoltC_StaticCompoundShape_t * self,
  long inIdx
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const CompoundShapeSubShape* resultRef = &selfCpp->GetSubShape(
    inIdx
  );
  JoltC_CompoundShapeSubShape_t* result = new JoltC_CompoundShapeSubShape_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

unsigned long JoltC_StaticCompoundShape_GetRefCount(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_StaticCompoundShape_AddRef(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_StaticCompoundShape_Release(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_StaticCompoundShape_GetType(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_StaticCompoundShape_GetSubType(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_StaticCompoundShape_MustBeStatic(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_StaticCompoundShape_GetLocalBounds(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_StaticCompoundShape_GetWorldSpaceBounds(
  JoltC_StaticCompoundShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetCenterOfMass(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_StaticCompoundShape_GetUserData(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_StaticCompoundShape_SetUserData(
  JoltC_StaticCompoundShape_t * self,
  unsigned long long int inUserData
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_StaticCompoundShape_GetInnerRadius(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_StaticCompoundShape_GetMassProperties(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_StaticCompoundShape_GetMaterial(
  JoltC_StaticCompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetSurfaceNormal(
  JoltC_StaticCompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

unsigned long long int JoltC_StaticCompoundShape_GetSubShapeUserData(
  JoltC_StaticCompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_StaticCompoundShape_GetSubShapeTransformedShape(
  JoltC_StaticCompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

float JoltC_StaticCompoundShape_GetVolume(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_StaticCompoundShape_IsValidScale(
  JoltC_StaticCompoundShape_t * self,
  JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShape_ScaleShape(
  JoltC_StaticCompoundShape_t * self,
  JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

