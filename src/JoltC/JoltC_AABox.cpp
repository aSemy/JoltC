#include "JoltC/JPC_AABox.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_AABox_t * JPC_AABox_new_0() {
  JPC_AABox_t * cInstance = new JPC_AABox_t();
  AABox * cppInstance = new AABox();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_AABox_t * JPC_AABox_new_1(
  const JPC_Vec3_t * inMin,
  const JPC_Vec3_t * inMax
) {
  JPC_AABox_t * cInstance = new JPC_AABox_t();
  AABox * cppInstance = new AABox(
    *reinterpret_cast<Vec3 *>(inMin->obj),
    *reinterpret_cast<Vec3 *>(inMax->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_AABox_t * JPC_AABox_sBiggest() {
  AABox resultValue = AABox::sBiggest();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

bool JPC_AABox_Overlaps(
  JPC_AABox_t * self,
  const JPC_AABox_t * inOther
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  bool result = selfCpp->Overlaps(
  *reinterpret_cast<AABox *>(inOther->obj)
  );
  return result;
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_AABox_mMin_Get(
  JPC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  Vec3 resultValue = selfCpp->mMin;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_AABox_mMin_Set(
  JPC_AABox_t * self,
  JPC_Vec3_t * mMin
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMin = *reinterpret_cast<Vec3 *>(mMin->obj);
};

JPC_Vec3_t * JPC_AABox_mMax_Get(
  JPC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  Vec3 resultValue = selfCpp->mMax;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_AABox_mMax_Set(
  JPC_AABox_t * self,
  JPC_Vec3_t * mMax
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMax = *reinterpret_cast<Vec3 *>(mMax->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

