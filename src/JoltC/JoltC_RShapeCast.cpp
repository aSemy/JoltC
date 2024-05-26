#include "JoltC/JoltC_RShapeCast.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RShapeCast_t * JoltC_RShapeCast_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  const JoltC_RMat44_t * inCenterOfMassStart,
  const JoltC_Vec3_t * inDirection
) {
  JoltC_RShapeCast_t * cInstance = new JoltC_RShapeCast_t();
  RShapeCast * cppInstance = new RShapeCast(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<RMat44 *>(inCenterOfMassStart->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const JoltC_RVec3_t * JoltC_RShapeCast_GetPointOnRay(
  JoltC_RShapeCast_t * self,
  float inFraction
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RVec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JoltC_RVec3_t *>(result);
};

//endregion

//region properties

const JoltC_Shape_t * JoltC_RShapeCast_mShape_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const JoltC_Vec3_t * JoltC_RShapeCast_mScale_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mScale;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_RMat44_t * JoltC_RShapeCast_mCenterOfMassStart_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RMat44 resultValue = selfCpp->mCenterOfMassStart;
  const RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<const JoltC_RMat44_t *>(result);
};

const JoltC_Vec3_t * JoltC_RShapeCast_mDirection_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mDirection;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

