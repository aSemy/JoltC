#include "JoltC/JPC_RShapeCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RShapeCast_t * JPC_RShapeCast_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale,
  const JPC_RMat44_t * inCenterOfMassStart,
  const JPC_Vec3_t * inDirection
) {
  JPC_RShapeCast_t * cInstance = new JPC_RShapeCast_t();
  RShapeCast * cppInstance = new RShapeCast(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<RMat44 *>(inCenterOfMassStart->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_RVec3_t * JPC_RShapeCast_GetPointOnRay(
  JPC_RShapeCast_t * self,
  float inFraction
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RVec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

//endregion functions

//region properties

const JPC_Shape_t * JPC_RShapeCast_mShape_Get(
  JPC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const JPC_Vec3_t * JPC_RShapeCast_mScale_Get(
  JPC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mScale;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_RMat44_t * JPC_RShapeCast_mCenterOfMassStart_Get(
  JPC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RMat44 resultValue = selfCpp->mCenterOfMassStart;
  const RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<const JPC_RMat44_t *>(result);
};

const JPC_Vec3_t * JPC_RShapeCast_mDirection_Get(
  JPC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mDirection;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

//endregion properties

#ifdef __cplusplus
}
#endif

