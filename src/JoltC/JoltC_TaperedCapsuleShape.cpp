#include "JoltC/JoltC_TaperedCapsuleShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_TaperedCapsuleShape_GetDensity(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_TaperedCapsuleShape_SetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  float inDensity
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
};

unsigned long JoltC_TaperedCapsuleShape_GetRefCount(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_TaperedCapsuleShape_AddRef(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_TaperedCapsuleShape_Release(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->Release();
};

JoltC_EShapeType JoltC_TaperedCapsuleShape_GetType(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_TaperedCapsuleShape_GetSubType(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_TaperedCapsuleShape_MustBeStatic(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetLocalBounds(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetCenterOfMass(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_TaperedCapsuleShape_GetUserData(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_TaperedCapsuleShape_SetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_TaperedCapsuleShape_GetInnerRadius(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_TaperedCapsuleShape_GetMassProperties(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const MassProperties& resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShape_GetMaterial(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetSurfaceNormal(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_TaperedCapsuleShape_GetSubShapeUserData(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const TransformedShape& resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_TaperedCapsuleShape_GetVolume(
  JoltC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_TaperedCapsuleShape_IsValidScale(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShape_ScaleShape(
  JoltC_TaperedCapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const Shape::ShapeResult& resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

