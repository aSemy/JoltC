#include "JoltC/JoltC_CompoundShapeSubShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_CompoundShapeSubShape_destroy(
  JoltC_CompoundShapeSubShape_t * self
){
  if (self == NULL) return;
  delete static_cast<CompoundShapeSubShape *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Vec3_t * JoltC_CompoundShapeSubShape_GetPositionCOM(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPositionCOM();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_CompoundShapeSubShape_GetRotation(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetRotation();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_Shape_t * JoltC_CompoundShapeSubShape_mShape_Get(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  const Shape * resultPtr = selfCpp->mShape;
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CompoundShapeSubShape_mShape_Set(
  JoltC_CompoundShapeSubShape_t * self,
  JoltC_Shape_t * mShape
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mShape = static_cast<const Shape *>(mShape->obj);
}

unsigned long JoltC_CompoundShapeSubShape_mUserData_Get(
  JoltC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_CompoundShapeSubShape_mUserData_Set(
  JoltC_CompoundShapeSubShape_t * self,
  unsigned long mUserData
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
