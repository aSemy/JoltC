#include "JoltC/JoltC_ShapeCast.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCast_t * JoltC_ShapeCast_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  const JoltC_Mat44_t * inCenterOfMassStart,
  const JoltC_Vec3_t * inDirection
) {
  JoltC_ShapeCast_t * cInstance = new JoltC_ShapeCast_t();
  ShapeCast * cppInstance = new ShapeCast(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<Mat44 *>(inCenterOfMassStart->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const JoltC_Vec3_t * JoltC_ShapeCast_GetPointOnRay(
  JoltC_ShapeCast_t * self,
  float inFraction
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

//endregion

//region properties

const JoltC_Shape_t * JoltC_ShapeCast_mShape_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const JoltC_Vec3_t * JoltC_ShapeCast_mScale_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mScale;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Mat44_t * JoltC_ShapeCast_mCenterOfMassStart_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Mat44 resultValue = selfCpp->mCenterOfMassStart;
  const Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<const JoltC_Mat44_t *>(result);
};

const JoltC_Vec3_t * JoltC_ShapeCast_mDirection_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mDirection;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

