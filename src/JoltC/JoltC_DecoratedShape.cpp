#include "JoltC/JoltC_DecoratedShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_DecoratedShape_destroy(
  JoltC_DecoratedShape_t * self
){
  if (self == NULL) return;
  delete static_cast<DecoratedShape *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_ScaledShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_ScaledShape(
  JoltC_ScaledShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_OffsetCenterOfMassShape(
  JoltC_OffsetCenterOfMassShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_RotatedTranslatedShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_RotatedTranslatedShape(
  JoltC_RotatedTranslatedShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

//endregion

//region functions

JoltC_Shape_t * JoltC_DecoratedShape_GetInnerShape(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const Shape * resultPtr = selfCpp->GetInnerShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_DecoratedShape_GetRefCount(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_DecoratedShape_AddRef(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_DecoratedShape_Release(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_DecoratedShape_GetType(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_DecoratedShape_GetSubType(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_DecoratedShape_MustBeStatic(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_DecoratedShape_GetLocalBounds(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_DecoratedShape_GetWorldSpaceBounds(
  JoltC_DecoratedShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_DecoratedShape_GetCenterOfMass(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_DecoratedShape_GetUserData(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_DecoratedShape_SetUserData(
  JoltC_DecoratedShape_t * self,
  unsigned long long int inUserData
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_DecoratedShape_GetInnerRadius(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_DecoratedShape_GetMassProperties(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_DecoratedShape_GetMaterial(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_DecoratedShape_GetSurfaceNormal(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

unsigned long long int JoltC_DecoratedShape_GetSubShapeUserData(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_DecoratedShape_GetSubShapeTransformedShape(
  JoltC_DecoratedShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

float JoltC_DecoratedShape_GetVolume(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_DecoratedShape_IsValidScale(
  JoltC_DecoratedShape_t * self,
  JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShape_ScaleShape(
  JoltC_DecoratedShape_t * self,
  JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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
