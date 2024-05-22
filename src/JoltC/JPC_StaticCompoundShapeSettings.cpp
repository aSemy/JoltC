#include "JoltC/JPC_StaticCompoundShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_StaticCompoundShapeSettings_t * JPC_StaticCompoundShapeSettings_new() {
  JPC_StaticCompoundShapeSettings_t * cInstance = new JPC_StaticCompoundShapeSettings_t();
  StaticCompoundShapeSettings * cppInstance = new StaticCompoundShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_StaticCompoundShapeSettings_AddShape(
  JPC_StaticCompoundShapeSettings_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_ShapeSettings_t * inShape,
  unsigned long inUserData
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  
  selfCpp->AddShape(
  *reinterpret_cast<Vec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  reinterpret_cast<ShapeSettings *>(inShape->obj),
  inUserData
  );
};

unsigned long JPC_StaticCompoundShapeSettings_GetRefCount(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_StaticCompoundShapeSettings_AddRef(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_StaticCompoundShapeSettings_Release(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_StaticCompoundShapeSettings_Create(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_StaticCompoundShapeSettings_ClearCachedResult(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

unsigned long long int JPC_StaticCompoundShapeSettings_mUserData_Get(
  JPC_StaticCompoundShapeSettings_t * self
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_StaticCompoundShapeSettings_mUserData_Set(
  JPC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

