#include "JoltC/JoltC_BoxShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BoxShape_t * JoltC_BoxShape_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_BoxShape_t * cInstance = new JoltC_BoxShape_t();
  BoxShape * cppInstance = new BoxShape(
    *reinterpret_cast<Vec3 *>(inHalfExtent->obj),
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Vec3_t * JoltC_BoxShape_GetHalfExtent(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetHalfExtent();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_BoxShape_GetDensity(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_BoxShape_SetDensity(
  JoltC_BoxShape_t * self,
  float inDensity
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->SetDensity(
    inDensity
  );
};

unsigned long JoltC_BoxShape_GetRefCount(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_BoxShape_AddRef(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_BoxShape_Release(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_BoxShape_GetType(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_BoxShape_GetSubType(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_BoxShape_MustBeStatic(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_BoxShape_GetLocalBounds(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static AABox resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_AABox_t * JoltC_BoxShape_GetWorldSpaceBounds(
  JoltC_BoxShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_BoxShape_GetCenterOfMass(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_BoxShape_GetUserData(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_BoxShape_SetUserData(
  JoltC_BoxShape_t * self,
  unsigned long long int inUserData
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_BoxShape_GetSubShapeIDBitsRecursive(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_BoxShape_GetInnerRadius(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_BoxShape_GetMassProperties(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static MassProperties resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_BoxShape_GetMaterial(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_BoxShape_GetSurfaceNormal(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_BoxShape_GetSubShapeUserData(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_BoxShape_GetSubShapeTransformedShape(
  JoltC_BoxShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

float JoltC_BoxShape_GetVolume(
  JoltC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_BoxShape_IsValidScale(
  JoltC_BoxShape_t * self,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_BoxShape_ScaleShape(
  JoltC_BoxShape_t * self,
  JoltC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

