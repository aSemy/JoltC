#include "JoltC/JoltC_ShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ConvexShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_ConvexShapeSettings(
  JoltC_ConvexShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SphereShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_SphereShapeSettings(
  JoltC_SphereShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_BoxShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_BoxShapeSettings(
  JoltC_BoxShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_CylinderShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_CylinderShapeSettings(
  JoltC_CylinderShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_CapsuleShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_CapsuleShapeSettings(
  JoltC_CapsuleShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_TaperedCapsuleShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_TaperedCapsuleShapeSettings(
  JoltC_TaperedCapsuleShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConvexHullShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_ConvexHullShapeSettings(
  JoltC_ConvexHullShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_StaticCompoundShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_StaticCompoundShapeSettings(
  JoltC_StaticCompoundShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_DecoratedShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_DecoratedShapeSettings(
  JoltC_DecoratedShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_ScaledShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_ScaledShapeSettings(
  JoltC_ScaledShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_OffsetCenterOfMassShapeSettings(
  JoltC_OffsetCenterOfMassShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_RotatedTranslatedShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_RotatedTranslatedShapeSettings(
  JoltC_RotatedTranslatedShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_MeshShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_MeshShapeSettings(
  JoltC_MeshShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_HeightFieldShapeSettings_t into JoltC_ShapeSettings_t.
 */
JoltC_ShapeSettings_t * JoltC_ShapeSettings_From_HeightFieldShapeSettings(
  JoltC_HeightFieldShapeSettings_t * subtype
) {
  return (JoltC_ShapeSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_ShapeSettings_GetRefCount(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ShapeSettings_AddRef(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ShapeSettings_Release(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_ShapeSettings_Create(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_ShapeSettings_ClearCachedResult(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

unsigned long long int JoltC_ShapeSettings_mUserData_Get(
  JoltC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_ShapeSettings_mUserData_Set(
  JoltC_ShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

