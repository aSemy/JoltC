#include "JoltC/JPC_ShapeCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCast_t * JPC_ShapeCast_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale,
  const JPC_Mat44_t * inCenterOfMassStart,
  const JPC_Vec3_t * inDirection
) {
  JPC_ShapeCast_t * cInstance = new JPC_ShapeCast_t();
  ShapeCast * cppInstance = new ShapeCast(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<Mat44 *>(inCenterOfMassStart->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_Vec3_t * JPC_ShapeCast_GetPointOnRay(
  JPC_ShapeCast_t * self,
  float inFraction
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->GetPointOnRay(
  inFraction
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

//endregion functions

//region properties

const JPC_Shape_t * JPC_ShapeCast_mShape_Get(
  JPC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const JPC_Vec3_t * JPC_ShapeCast_mScale_Get(
  JPC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mScale;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Mat44_t * JPC_ShapeCast_mCenterOfMassStart_Get(
  JPC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Mat44 resultValue = selfCpp->mCenterOfMassStart;
  const Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<const JPC_Mat44_t *>(result);
};

const JPC_Vec3_t * JPC_ShapeCast_mDirection_Get(
  JPC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Vec3 resultValue = selfCpp->mDirection;
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

//endregion properties

#ifdef __cplusplus
}
#endif

