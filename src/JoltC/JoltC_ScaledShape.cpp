#include "JoltC/JoltC_ScaledShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ScaledShape_t * JoltC_ScaledShape_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale
) {
  JoltC_ScaledShape_t * cInstance = new JoltC_ScaledShape_t();
  ScaledShape * cppInstance = new ScaledShape(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
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
  static Vec3 resultValue = selfCpp->GetScale();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Shape_t * JoltC_ScaledShape_GetInnerShape(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const Shape * resultValue = selfCpp->GetInnerShape();
  JoltC_Shape_t* result = new JoltC_Shape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long JoltC_ScaledShape_GetRefCount(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ScaledShape_AddRef(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ScaledShape_Release(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_ScaledShape_GetType(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_ScaledShape_GetSubType(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_ScaledShape_MustBeStatic(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_ScaledShape_GetLocalBounds(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  static AABox resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_AABox_t * JoltC_ScaledShape_GetWorldSpaceBounds(
  JoltC_ScaledShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  static AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_ScaledShape_GetCenterOfMass(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_ScaledShape_GetUserData(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_ScaledShape_SetUserData(
  JoltC_ScaledShape_t * self,
  unsigned long long int inUserData
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_ScaledShape_GetSubShapeIDBitsRecursive(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_ScaledShape_GetInnerRadius(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_ScaledShape_GetMassProperties(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  static MassProperties resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_ScaledShape_GetMaterial(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_ScaledShape_GetSurfaceNormal(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_ScaledShape_GetSubShapeUserData(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_ScaledShape_GetSubShapeTransformedShape(
  JoltC_ScaledShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

float JoltC_ScaledShape_GetVolume(
  JoltC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_ScaledShape_IsValidScale(
  JoltC_ScaledShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_ScaledShape_ScaleShape(
  JoltC_ScaledShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

