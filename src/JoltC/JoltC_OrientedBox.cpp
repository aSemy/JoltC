#include "JoltC/JPC_OrientedBox.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OrientedBox_t * JPC_OrientedBox_new_0() {
  JPC_OrientedBox_t * cInstance = new JPC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_OrientedBox_t * JPC_OrientedBox_new_1(
  const JPC_Mat44_t * inOrientation,
  const JPC_Vec3_t * inHalfExtents
) {
  JPC_OrientedBox_t * cInstance = new JPC_OrientedBox_t();
  OrientedBox * cppInstance = new OrientedBox(
    *reinterpret_cast<Mat44 *>(inOrientation->obj),
    *reinterpret_cast<Vec3 *>(inHalfExtents->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_Mat44_t * JPC_OrientedBox_mOrientation_Get(
  JPC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Mat44 resultValue = selfCpp->mOrientation;
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_OrientedBox_mOrientation_Set(
  JPC_OrientedBox_t * self,
  JPC_Mat44_t * mOrientation
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mOrientation = *reinterpret_cast<Mat44 *>(mOrientation->obj);
};

JPC_Vec3_t * JPC_OrientedBox_mHalfExtents_Get(
  JPC_OrientedBox_t * self
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  Vec3 resultValue = selfCpp->mHalfExtents;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_OrientedBox_mHalfExtents_Set(
  JPC_OrientedBox_t * self,
  JPC_Vec3_t * mHalfExtents
) {
  OrientedBox * selfCpp = static_cast<OrientedBox *>(self->obj);
  selfCpp->mHalfExtents = *reinterpret_cast<Vec3 *>(mHalfExtents->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

