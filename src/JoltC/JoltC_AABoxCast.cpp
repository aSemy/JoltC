#include "JoltC/JPC_AABoxCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_AABoxCast_t * JPC_AABoxCast_new() {
  JPC_AABoxCast_t * cInstance = new JPC_AABoxCast_t();
  AABoxCast * cppInstance = new AABoxCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_AABox_t * JPC_AABoxCast_mBox_Get(
  JPC_AABoxCast_t * self
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  AABox resultValue = selfCpp->mBox;
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

void JPC_AABoxCast_mBox_Set(
  JPC_AABoxCast_t * self,
  JPC_AABox_t * mBox
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mBox = *reinterpret_cast<AABox *>(mBox->obj);
};

JPC_Vec3_t * JPC_AABoxCast_mDirection_Get(
  JPC_AABoxCast_t * self
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  Vec3 resultValue = selfCpp->mDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_AABoxCast_mDirection_Set(
  JPC_AABoxCast_t * self,
  JPC_Vec3_t * mDirection
) {
  AABoxCast * selfCpp = static_cast<AABoxCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

