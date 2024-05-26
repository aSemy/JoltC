#include "JoltC/JoltC_ShapeCast.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCast_t * JoltC_ShapeCast_new(
  JoltC_Shape_t * inShape,
  JoltC_Vec3_t * inScale,
  JoltC_Mat44_t * inCenterOfMassStart,
  JoltC_Vec3_t * inDirection
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

JoltC_Vec3_t * JoltC_ShapeCast_GetPointOnRay(
  JoltC_ShapeCast_t * self,
  float inFraction
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  static Vec3 resultValue = selfCpp->GetPointOnRay(
    inFraction
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

//region properties

JoltC_Shape_t * JoltC_ShapeCast_mShape_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  const Shape * resultValue = selfCpp->mShape;
  JoltC_Shape_t* result = new JoltC_Shape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_ShapeCast_mScale_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  static Vec3 resultValue = selfCpp->mScale;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Mat44_t * JoltC_ShapeCast_mCenterOfMassStart_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  static Mat44 resultValue = selfCpp->mCenterOfMassStart;
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_ShapeCast_mDirection_Get(
  JoltC_ShapeCast_t * self
) {
  ShapeCast * selfCpp = static_cast<ShapeCast *>(self->obj);
  static Vec3 resultValue = selfCpp->mDirection;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

