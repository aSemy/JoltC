#include "JoltC/JoltC_CompoundShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_StaticCompoundShape_t into JoltC_CompoundShape_t.
 */
JoltC_CompoundShape_t * JoltC_CompoundShape_From_StaticCompoundShape(
  JoltC_StaticCompoundShape_t * subtype
) {
  return (JoltC_CompoundShape_t*) subtype;
};

//endregion

//region functions

long JoltC_CompoundShape_GetNumSubShapes(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetNumSubShapes();
}

JoltC_CompoundShapeSubShape_t * JoltC_CompoundShape_GetSubShape(
  JoltC_CompoundShape_t * self,
  long inIdx
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const CompoundShapeSubShape* resultRef = &selfCpp->GetSubShape(
    inIdx
  );
  JoltC_CompoundShapeSubShape_t* result = new JoltC_CompoundShapeSubShape_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

unsigned long JoltC_CompoundShape_GetRefCount(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CompoundShape_AddRef(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CompoundShape_Release(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_CompoundShape_GetType(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_CompoundShape_GetSubType(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_CompoundShape_MustBeStatic(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_CompoundShape_GetLocalBounds(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_CompoundShape_GetWorldSpaceBounds(
  JoltC_CompoundShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CompoundShape_GetCenterOfMass(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_CompoundShape_GetUserData(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_CompoundShape_SetUserData(
  JoltC_CompoundShape_t * self,
  unsigned long long int inUserData
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_CompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_CompoundShape_GetInnerRadius(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_CompoundShape_GetMassProperties(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_CompoundShape_GetMaterial(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_CompoundShape_GetSurfaceNormal(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

unsigned long long int JoltC_CompoundShape_GetSubShapeUserData(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_CompoundShape_GetSubShapeTransformedShape(
  JoltC_CompoundShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

float JoltC_CompoundShape_GetVolume(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_CompoundShape_IsValidScale(
  JoltC_CompoundShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_CompoundShape_ScaleShape(
  JoltC_CompoundShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

