#include "JoltC/JoltC_CompoundShapeSubShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_CompoundShapeSubShape_GetPositionCOM(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetPositionCOM();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_CompoundShapeSubShape_GetRotation(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  static Quat resultValue = selfCpp->GetRotation();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

//region properties

JoltC_Shape_t * JoltC_CompoundShapeSubShape_mShape_Get(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  const Shape * resultValue = selfCpp->mShape;
  JoltC_Shape_t* result = new JoltC_Shape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CompoundShapeSubShape_mShape_Set(
  JoltC_CompoundShapeSubShape_t * self,
  JoltC_Shape_t * mShape
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

unsigned long JoltC_CompoundShapeSubShape_mUserData_Get(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  unsigned long result = selfCpp->mUserData;
  return result;
};

void JoltC_CompoundShapeSubShape_mUserData_Set(
  JoltC_CompoundShapeSubShape_t * self,
  unsigned long mUserData
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

