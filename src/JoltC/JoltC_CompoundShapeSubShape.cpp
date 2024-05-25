#include "JoltC/JoltC_CompoundShapeSubShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_CompoundShapeSubShape_GetPositionCOM(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetPositionCOM();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_CompoundShapeSubShape_GetRotation(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
    Quat resultValue = selfCpp->GetRotation();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

const JoltC_Shape_t * JoltC_CompoundShapeSubShape_mShape_Get(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const void JoltC_CompoundShapeSubShape_mShape_Set(
  JoltC_CompoundShapeSubShape_t * self,
  const JoltC_Shape_t * mShape,
  char** outErrMsg
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

unsigned long JoltC_CompoundShapeSubShape_mUserData_Get(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  unsigned long result = selfCpp->mUserData;
  return result;
};

void JoltC_CompoundShapeSubShape_mUserData_Set(
  JoltC_CompoundShapeSubShape_t * self,
  unsigned long mUserData,
  char** outErrMsg
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

