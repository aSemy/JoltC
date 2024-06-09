#include "JoltC/JoltC_ConvexShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SphereShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_SphereShape(
  JoltC_SphereShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_BoxShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_BoxShape(
  JoltC_BoxShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CylinderShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CylinderShape(
  JoltC_CylinderShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CapsuleShape(
  JoltC_CapsuleShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_TaperedCapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_TaperedCapsuleShape(
  JoltC_TaperedCapsuleShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConvexHullShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_ConvexHullShape(
  JoltC_ConvexHullShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

//endregion

//region functions

float JoltC_ConvexShape_GetDensity(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_ConvexShape_SetDensity(
  JoltC_ConvexShape_t * self,
  float inDensity
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_ConvexShape_GetRefCount(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConvexShape_AddRef(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConvexShape_Release(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_ConvexShape_GetType(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_ConvexShape_GetSubType(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_ConvexShape_MustBeStatic(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_ConvexShape_GetLocalBounds(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_ConvexShape_GetWorldSpaceBounds(
  JoltC_ConvexShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ConvexShape_GetCenterOfMass(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_ConvexShape_GetUserData(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_ConvexShape_SetUserData(
  JoltC_ConvexShape_t * self,
  unsigned long long int inUserData
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_ConvexShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_ConvexShape_GetInnerRadius(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_ConvexShape_GetMassProperties(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_ConvexShape_GetMaterial(
  JoltC_ConvexShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_ConvexShape_GetSurfaceNormal(
  JoltC_ConvexShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

unsigned long long int JoltC_ConvexShape_GetSubShapeUserData(
  JoltC_ConvexShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_ConvexShape_GetSubShapeTransformedShape(
  JoltC_ConvexShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

float JoltC_ConvexShape_GetVolume(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_ConvexShape_IsValidScale(
  JoltC_ConvexShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_ConvexShape_ScaleShape(
  JoltC_ConvexShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

