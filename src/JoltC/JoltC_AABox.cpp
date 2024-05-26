#include "JoltC/JoltC_AABox.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_AABox_t * JoltC_AABox_new_0() {
  JoltC_AABox_t * cInstance = new JoltC_AABox_t();
  AABox * cppInstance = new AABox();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_AABox_t * JoltC_AABox_new_1(
  JoltC_Vec3_t * inMin,
  JoltC_Vec3_t * inMax
) {
  JoltC_AABox_t * cInstance = new JoltC_AABox_t();
  AABox * cppInstance = new AABox(
    *reinterpret_cast<Vec3 *>(inMin->obj),
    *reinterpret_cast<Vec3 *>(inMax->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_AABox_t * JoltC_AABox_sBiggest() {
  static AABox resultValue = AABox::sBiggest();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

bool JoltC_AABox_Overlaps(
  JoltC_AABox_t * self,
  JoltC_AABox_t * inOther
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  bool result = selfCpp->Overlaps(
    *reinterpret_cast<AABox *>(inOther->obj)
  );
  return result;
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_AABox_mMin_Get(
  JoltC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  static Vec3 resultValue = selfCpp->mMin;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_AABox_mMin_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMin
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMin = *reinterpret_cast<Vec3 *>(mMin->obj);
};

JoltC_Vec3_t * JoltC_AABox_mMax_Get(
  JoltC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  static Vec3 resultValue = selfCpp->mMax;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_AABox_mMax_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMax
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMax = *reinterpret_cast<Vec3 *>(mMax->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

