#include "JoltC/JoltC_ConvexShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ConvexShapeSettings_destroy(
  JoltC_ConvexShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<ConvexShapeSettings *>(self->obj);
  free(self);
}

//endregion
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
  return selfCpp->GetRefCount();
}

void JoltC_ConvexShapeSettings_AddRef(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConvexShapeSettings_Release(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_ConvexShapeSettings_Create(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ConvexShapeSettings_ClearCachedResult(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_PhysicsMaterial_t * JoltC_ConvexShapeSettings_mMaterial_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->mMaterial;
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_ConvexShapeSettings_mMaterial_Set(
  JoltC_ConvexShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mMaterial = static_cast<const PhysicsMaterial *>(mMaterial->obj);
}

float JoltC_ConvexShapeSettings_mDensity_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  return selfCpp->mDensity;
}

void JoltC_ConvexShapeSettings_mDensity_Set(
  JoltC_ConvexShapeSettings_t * self,
  float mDensity
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
}

unsigned long long int JoltC_ConvexShapeSettings_mUserData_Get(
  JoltC_ConvexShapeSettings_t * self
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_ConvexShapeSettings_mUserData_Set(
  JoltC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
