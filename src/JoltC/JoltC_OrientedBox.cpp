#include "JoltC/JoltC_OrientedBox.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `OrientedBox` instance.
 */
JoltC_OrientedBox_t * JoltC_OrientedBox_new_0() {
  JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `OrientedBox` instance.
 */
JoltC_OrientedBox_t * JoltC_OrientedBox_new_1(
  JoltC_Mat44_t * inOrientation,
  JoltC_Vec3_t * inHalfExtents
) {
  const Mat44 * inOrientationCpp = static_cast<const Mat44 *>(inOrientation->obj);
  const Vec3 * inHalfExtentsCpp = static_cast<const Vec3 *>(inHalfExtents->obj);
  JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox(
    *inOrientationCpp,
    *inHalfExtentsCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_OrientedBox_destroy(
  JoltC_OrientedBox_t * self
){
  if (self == NULL) return;
  delete static_cast<OrientedBox *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_Mat44_t * JoltC_OrientedBox_mOrientation_Get(
  JoltC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->mOrientation;
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_OrientedBox_mOrientation_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Mat44_t * mOrientation
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mOrientation = *static_cast<Mat44 *>(mOrientation->obj);
}

JoltC_Vec3_t * JoltC_OrientedBox_mHalfExtents_Get(
  JoltC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHalfExtents;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_OrientedBox_mHalfExtents_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Vec3_t * mHalfExtents
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mHalfExtents = *static_cast<Vec3 *>(mHalfExtents->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
