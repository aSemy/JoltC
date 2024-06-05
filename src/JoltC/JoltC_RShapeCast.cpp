#include "JoltC/JoltC_RShapeCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RShapeCast_t * JoltC_RShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_RMat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
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

JoltC_RVec3_t * JoltC_RShapeCast_GetPointOnRay(
  JoltC_RShapeCast_t * self,
  float inFraction
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RVec3& resultValue = selfCpp->GetPointOnRay(
    inFraction
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

//region properties

JoltC_Shape_t * JoltC_RShapeCast_mShape_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Shape * resultValue = selfCpp->mShape;
  JoltC_Shape_t* result = new JoltC_Shape_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RShapeCast_mScale_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3& resultValue = selfCpp->mScale;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RShapeCast_mCenterOfMassStart_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const RMat44& resultValue = selfCpp->mCenterOfMassStart;
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RShapeCast_mDirection_Get(
  JoltC_RShapeCast_t * self
) {
  RShapeCast * selfCpp = static_cast<RShapeCast *>(self->obj);
  const Vec3& resultValue = selfCpp->mDirection;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

