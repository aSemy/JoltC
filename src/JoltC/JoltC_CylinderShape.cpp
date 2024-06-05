#include "JoltC/JoltC_CylinderShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShape_t * JoltC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_CylinderShape_t * cInstance = new JoltC_CylinderShape_t();
  CylinderShape * cppInstance = new CylinderShape(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
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
  float result = selfCpp->GetRadius();
  return result;
};

float JoltC_CylinderShape_GetHalfHeight(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetHalfHeight();
  return result;
};

float JoltC_CylinderShape_GetDensity(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_CylinderShape_SetDensity(
  JoltC_CylinderShape_t * self,
  float inDensity
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
};

unsigned long JoltC_CylinderShape_GetRefCount(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CylinderShape_AddRef(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_CylinderShape_Release(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->Release();
};

JoltC_EShapeType JoltC_CylinderShape_GetType(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_CylinderShape_GetSubType(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_CylinderShape_MustBeStatic(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_CylinderShape_GetLocalBounds(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_AABox_t * JoltC_CylinderShape_GetWorldSpaceBounds(
  JoltC_CylinderShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_CylinderShape_GetCenterOfMass(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_CylinderShape_GetUserData(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_CylinderShape_SetUserData(
  JoltC_CylinderShape_t * self,
  unsigned long long int inUserData
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_CylinderShape_GetSubShapeIDBitsRecursive(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_CylinderShape_GetInnerRadius(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_CylinderShape_GetMassProperties(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const MassProperties& resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_CylinderShape_GetMaterial(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_CylinderShape_GetSurfaceNormal(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_CylinderShape_GetSubShapeUserData(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_CylinderShape_GetSubShapeTransformedShape(
  JoltC_CylinderShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JoltC_CylinderShape_GetVolume(
  JoltC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_CylinderShape_IsValidScale(
  JoltC_CylinderShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_CylinderShape_ScaleShape(
  JoltC_CylinderShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

