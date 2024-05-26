#include "JoltC/JoltC_DecoratedShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ScaledShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_ScaledShapeSettings(
  JoltC_ScaledShapeSettings_t * subtype
) {
  return (JoltC_DecoratedShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_OffsetCenterOfMassShapeSettings(
  JoltC_OffsetCenterOfMassShapeSettings_t * subtype
) {
  return (JoltC_DecoratedShapeSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_RotatedTranslatedShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_RotatedTranslatedShapeSettings(
  JoltC_RotatedTranslatedShapeSettings_t * subtype
) {
  return (JoltC_DecoratedShapeSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_DecoratedShapeSettings_GetRefCount(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_DecoratedShapeSettings_AddRef(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_DecoratedShapeSettings_Release(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShapeSettings_Create(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_DecoratedShapeSettings_ClearCachedResult(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

unsigned long long int JoltC_DecoratedShapeSettings_mUserData_Get(
  JoltC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_DecoratedShapeSettings_mUserData_Set(
  JoltC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

