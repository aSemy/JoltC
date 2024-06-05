#include "JoltC/JoltC_RRayCast.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RRayCast_t * JoltC_RRayCast_new_0() {
  JoltC_RRayCast_t * cInstance = new JoltC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_RRayCast_t * JoltC_RRayCast_new_1(
  JoltC_RVec3_t * inOrigin,
  JoltC_Vec3_t * inDirection
) {
  JoltC_RRayCast_t * cInstance = new JoltC_RRayCast_t();
  RRayCast * cppInstance = new RRayCast(
    *reinterpret_cast<RVec3 *>(inOrigin->obj),
    *reinterpret_cast<Vec3 *>(inDirection->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RRayCast_t * JoltC_RRayCast_Transformed(
  JoltC_RRayCast_t * self,
  JoltC_RMat44_t * inTransform
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RRayCast& resultValue = selfCpp->Transformed(
    *reinterpret_cast<RMat44 *>(inTransform->obj)
  );
  JoltC_RRayCast_t* result = new JoltC_RRayCast_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RRayCast_t * JoltC_RRayCast_Translated(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * inTranslation
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RRayCast& resultValue = selfCpp->Translated(
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  JoltC_RRayCast_t* result = new JoltC_RRayCast_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RVec3_t * JoltC_RRayCast_GetPointOnRay(
  JoltC_RRayCast_t * self,
  float inFraction
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RVec3& resultValue = selfCpp->GetPointOnRay(
    inFraction
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

//region properties

JoltC_RVec3_t * JoltC_RRayCast_mOrigin_Get(
  JoltC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const RVec3& resultValue = selfCpp->mOrigin;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_RRayCast_mOrigin_Set(
  JoltC_RRayCast_t * self,
  JoltC_RVec3_t * mOrigin
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mOrigin = *reinterpret_cast<RVec3 *>(mOrigin->obj);
};

JoltC_Vec3_t * JoltC_RRayCast_mDirection_Get(
  JoltC_RRayCast_t * self
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  const Vec3& resultValue = selfCpp->mDirection;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_RRayCast_mDirection_Set(
  JoltC_RRayCast_t * self,
  JoltC_Vec3_t * mDirection
) {
  RRayCast * selfCpp = static_cast<RRayCast *>(self->obj);
  selfCpp->mDirection = *reinterpret_cast<Vec3 *>(mDirection->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

