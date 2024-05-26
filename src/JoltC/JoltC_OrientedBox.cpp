#include "JoltC/JoltC_OrientedBox.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OrientedBox_t * JoltC_OrientedBox_new_0() {
  JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_OrientedBox_t * JoltC_OrientedBox_new_1(
  JoltC_Mat44_t * inOrientation,
  JoltC_Vec3_t * inHalfExtents
) {
  JoltC_OrientedBox_t * cInstance = new JoltC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox(
    *reinterpret_cast<Mat44 *>(inOrientation->obj),
    *reinterpret_cast<Vec3 *>(inHalfExtents->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_Mat44_t * JoltC_OrientedBox_mOrientation_Get(
  JoltC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  static Mat44 resultValue = selfCpp->mOrientation;
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_OrientedBox_mOrientation_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Mat44_t * mOrientation
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mOrientation = *reinterpret_cast<Mat44 *>(mOrientation->obj);
};

JoltC_Vec3_t * JoltC_OrientedBox_mHalfExtents_Get(
  JoltC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  static Vec3 resultValue = selfCpp->mHalfExtents;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_OrientedBox_mHalfExtents_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Vec3_t * mHalfExtents
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mHalfExtents = *reinterpret_cast<Vec3 *>(mHalfExtents->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

