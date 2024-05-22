#include "JoltC/JPC_ShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ShapeSettings_GetRefCount(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ShapeSettings_AddRef(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ShapeSettings_Release(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_ShapeSettings_Create(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_ShapeSettings_ClearCachedResult(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

unsigned long long int JPC_ShapeSettings_mUserData_Get(
  JPC_ShapeSettings_t * self
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_ShapeSettings_mUserData_Set(
  JPC_ShapeSettings_t * self,
  unsigned long long int mUserData
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

