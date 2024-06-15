#include "JoltC/JoltC_AABoxCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `AABoxCast` instance.
 */
JoltC_AABoxCast_t * JoltC_AABoxCast_new() {
  JoltC_AABoxCast_t * cInstance = new JoltC_AABoxCast_t();
  AABoxCast * cppInstance = new AABoxCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_AABoxCast_destroy(
  JoltC_AABoxCast_t * self
){
  if (self == NULL) return;
  delete static_cast<AABoxCast *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_AABox_t * JoltC_AABoxCast_mBox_Get(
  JoltC_AABoxCast_t * self
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->mBox;
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_AABoxCast_mBox_Set(
  JoltC_AABoxCast_t * self,
  JoltC_AABox_t * mBox
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mBox = *static_cast<AABox *>(mBox->obj);
}

JoltC_Vec3_t * JoltC_AABoxCast_mDirection_Get(
  JoltC_AABoxCast_t * self
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_AABoxCast_mDirection_Set(
  JoltC_AABoxCast_t * self,
  JoltC_Vec3_t * mDirection
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mDirection = *static_cast<Vec3 *>(mDirection->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
