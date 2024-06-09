#include "JoltC/JoltC_AABox.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `AABox` instance.
 */
JoltC_AABox_t * JoltC_AABox_new_0() {
  JoltC_AABox_t * cInstance = new JoltC_AABox_t();
  AABox * cppInstance = new AABox();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `AABox` instance.
 */
JoltC_AABox_t * JoltC_AABox_new_1(
  JoltC_Vec3_t * inMin,
  JoltC_Vec3_t * inMax
) {
  const Vec3 * inMinCpp = static_cast<const Vec3 *>(inMin->obj);
  const Vec3 * inMaxCpp = static_cast<const Vec3 *>(inMax->obj);
  JoltC_AABox_t * cInstance = new JoltC_AABox_t();
  AABox * cppInstance = new AABox(
    *inMinCpp,
    *inMaxCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_AABox_t * JoltC_AABox_sBiggest() {
  AABox * resultPtr = new AABox();
  *resultPtr = AABox::sBiggest();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_AABox_Overlaps(
  JoltC_AABox_t * self,
  JoltC_AABox_t * inOther
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  const AABox * inOtherCpp = static_cast<const AABox *>(inOther->obj);
  return selfCpp->Overlaps(
    *inOtherCpp
  );
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_AABox_mMin_Get(
  JoltC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mMin;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_AABox_mMin_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMin
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMin = *static_cast<Vec3 *>(mMin->obj);
};

JoltC_Vec3_t * JoltC_AABox_mMax_Get(
  JoltC_AABox_t * self
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mMax;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_AABox_mMax_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMax
) {
  AABox * selfCpp = static_cast<AABox *>(self->obj);
  selfCpp->mMax = *static_cast<Vec3 *>(mMax->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

