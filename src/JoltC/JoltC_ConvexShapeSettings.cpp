#include "JoltC/JoltC_ConvexShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SphereShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_SphereShapeSettings(
  JoltC_SphereShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_BoxShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_BoxShapeSettings(
  JoltC_BoxShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_CylinderShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_CylinderShapeSettings(
  JoltC_CylinderShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_CapsuleShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_CapsuleShapeSettings(
  JoltC_CapsuleShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_TaperedCapsuleShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_TaperedCapsuleShapeSettings(
  JoltC_TaperedCapsuleShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConvexHullShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_ConvexHullShapeSettings(
  JoltC_ConvexHullShapeSettings_t * subtype
) {
  return (JoltC_ConvexShapeSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_ConvexShapeSettings_GetRefCount(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ConvexShapeSettings_AddRef(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ConvexShapeSettings_Release(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_ConvexShapeSettings_Create(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

void JoltC_ConvexShapeSettings_ClearCachedResult(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

const JoltC_PhysicsMaterial_t * JoltC_ConvexShapeSettings_mMaterial_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_ConvexShapeSettings_mMaterial_Set(
  JoltC_ConvexShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_ConvexShapeSettings_mDensity_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_ConvexShapeSettings_mDensity_Set(
  JoltC_ConvexShapeSettings_t * self,
  float mDensity
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_ConvexShapeSettings_mUserData_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_ConvexShapeSettings_mUserData_Set(
  JoltC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

