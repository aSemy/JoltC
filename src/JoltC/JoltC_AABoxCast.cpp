#include "JoltC/JoltC_AABoxCast.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_AABoxCast_t * JoltC_AABoxCast_new(
  char** outErrMsg
) {
  try {
    JoltC_AABoxCast_t * cInstance = new JoltC_AABoxCast_t();
    AABoxCast * cppInstance = new AABoxCast();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

JoltC_AABox_t * JoltC_AABoxCast_mBox_Get(
  JoltC_AABoxCast_t * self,
  char** outErrMsg
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  AABox resultValue = selfCpp->mBox;
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

void JoltC_AABoxCast_mBox_Set(
  JoltC_AABoxCast_t * self,
  JoltC_AABox_t * mBox,
  char** outErrMsg
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mBox = *reinterpret_cast<AABox *>(mBox->obj);
};

JoltC_Vec3_t * JoltC_AABoxCast_mDirection_Get(
  JoltC_AABoxCast_t * self,
  char** outErrMsg
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  Vec3 resultValue = selfCpp->mDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_AABoxCast_mDirection_Set(
  JoltC_AABoxCast_t * self,
  JoltC_Vec3_t * mDirection,
  char** outErrMsg
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

