#include "JoltC/JoltC_SphereShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShape_t * JoltC_SphereShape_new(
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_SphereShape_t * cInstance = new JoltC_SphereShape_t();
  SphereShape * cppInstance = new SphereShape(
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_SphereShape_GetRadius(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetRadius();
  return result;
};

float JoltC_SphereShape_GetDensity(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_SphereShape_SetDensity(
  JoltC_SphereShape_t * self,
  float inDensity
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->SetDensity(
    inDensity
  );
};

unsigned long JoltC_SphereShape_GetRefCount(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SphereShape_AddRef(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_SphereShape_Release(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_SphereShape_GetType(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_SphereShape_GetSubType(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_SphereShape_MustBeStatic(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_SphereShape_GetLocalBounds(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static AABox resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_AABox_t * JoltC_SphereShape_GetWorldSpaceBounds(
  JoltC_SphereShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_SphereShape_GetCenterOfMass(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_SphereShape_GetUserData(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_SphereShape_SetUserData(
  JoltC_SphereShape_t * self,
  unsigned long long int inUserData
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_SphereShape_GetSubShapeIDBitsRecursive(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_SphereShape_GetInnerRadius(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_SphereShape_GetMassProperties(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static MassProperties resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_SphereShape_GetMaterial(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_SphereShape_GetSurfaceNormal(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_SphereShape_GetSubShapeUserData(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_SphereShape_GetSubShapeTransformedShape(
  JoltC_SphereShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_SphereShape_GetVolume(
  JoltC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_SphereShape_IsValidScale(
  JoltC_SphereShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_SphereShape_ScaleShape(
  JoltC_SphereShape_t * self,
  JoltC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

