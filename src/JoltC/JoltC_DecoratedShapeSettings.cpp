#include "JoltC/JPC_DecoratedShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_DecoratedShapeSettings_GetRefCount(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_DecoratedShapeSettings_AddRef(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_DecoratedShapeSettings_Release(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_DecoratedShapeSettings_Create(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_DecoratedShapeSettings_ClearCachedResult(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

unsigned long long int JPC_DecoratedShapeSettings_mUserData_Get(
  JPC_DecoratedShapeSettings_t * self
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_DecoratedShapeSettings_mUserData_Set(
  JPC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

