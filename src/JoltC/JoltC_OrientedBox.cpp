#include "JoltC/JoltC_OrientedBox.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OrientedBox_t * JoltC_OrientedBox_new_0(
  char** outErrMsg
) {
  try {
    JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
    OrientedBox * cppInstance = new OrientedBox();
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

JoltC_OrientedBox_t * JoltC_OrientedBox_new_1(
  const JoltC_Mat44_t * inOrientation,
  const JoltC_Vec3_t * inHalfExtents,
  char** outErrMsg
) {
  try {
    JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
    OrientedBox * cppInstance = new OrientedBox(
      *reinterpret_cast<Mat44 *>(inOrientation->obj),
      *reinterpret_cast<Vec3 *>(inHalfExtents->obj)
    );
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

JoltC_Mat44_t * JoltC_OrientedBox_mOrientation_Get(
  JoltC_OrientedBox_t * self,
  char** outErrMsg
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Mat44 resultValue = selfCpp->mOrientation;
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

void JoltC_OrientedBox_mOrientation_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Mat44_t * mOrientation,
  char** outErrMsg
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mOrientation = *reinterpret_cast<Mat44 *>(mOrientation->obj);
};

JoltC_Vec3_t * JoltC_OrientedBox_mHalfExtents_Get(
  JoltC_OrientedBox_t * self,
  char** outErrMsg
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Vec3 resultValue = selfCpp->mHalfExtents;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_OrientedBox_mHalfExtents_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Vec3_t * mHalfExtents,
  char** outErrMsg
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mHalfExtents = *reinterpret_cast<Vec3 *>(mHalfExtents->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

