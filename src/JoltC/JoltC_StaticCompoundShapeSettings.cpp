#include "JoltC/JoltC_StaticCompoundShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `StaticCompoundShapeSettings` instance.
 */
JoltC_StaticCompoundShapeSettings_t * JoltC_StaticCompoundShapeSettings_new() {
  JoltC_StaticCompoundShapeSettings_t * cInstance = new JoltC_StaticCompoundShapeSettings_t();
  StaticCompoundShapeSettings * cppInstance = new StaticCompoundShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_StaticCompoundShapeSettings_AddShape(
  JoltC_StaticCompoundShapeSettings_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_ShapeSettings_t * inShape,
  unsigned long inUserData
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  const Vec3 * inPositionCpp = static_cast<const Vec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const ShapeSettings * inShapeCpp = static_cast<const ShapeSettings *>(inShape->obj);
  selfCpp->AddShape(
    *inPositionCpp,
    *inRotationCpp,
    inShapeCpp,
    inUserData
  );
}

unsigned long JoltC_StaticCompoundShapeSettings_GetRefCount(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_StaticCompoundShapeSettings_AddRef(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_StaticCompoundShapeSettings_Release(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShapeSettings_Create(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_StaticCompoundShapeSettings_ClearCachedResult(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

unsigned long long int JoltC_StaticCompoundShapeSettings_mUserData_Get(
  JoltC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_StaticCompoundShapeSettings_mUserData_Set(
  JoltC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

