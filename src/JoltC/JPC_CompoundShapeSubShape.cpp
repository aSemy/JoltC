#include "JoltC/JPC_CompoundShapeSubShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_CompoundShapeSubShape_GetPositionCOM(
  JPC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetPositionCOM();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Quat_t * JPC_CompoundShapeSubShape_GetRotation(
  JPC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

//endregion functions

//region properties

const JPC_Shape_t * JPC_CompoundShapeSubShape_mShape_Get(
  JPC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const void JPC_CompoundShapeSubShape_mShape_Set(
  JPC_CompoundShapeSubShape_t * self,
  const JPC_Shape_t * mShape
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

unsigned long JPC_CompoundShapeSubShape_mUserData_Get(
  JPC_CompoundShapeSubShape_t * self
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  unsigned long result = selfCpp->mUserData;
  return result;
};

void JPC_CompoundShapeSubShape_mUserData_Set(
  JPC_CompoundShapeSubShape_t * self,
  unsigned long mUserData
) {
  CompoundShapeSubShape * selfCpp = static_cast<CompoundShapeSubShape *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

