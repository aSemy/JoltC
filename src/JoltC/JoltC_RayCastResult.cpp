#include "JoltC/JoltC_RayCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RayCastResult` instance.
 */
JoltC_RayCastResult_t * JoltC_RayCastResult_new() {
  JoltC_RayCastResult_t * cInstance = new JoltC_RayCastResult_t();
  RayCastResult * cppInstance = new RayCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_RayCastResult_destroy(
  JoltC_RayCastResult_t * self
){
  if (self == NULL) return;
  delete static_cast<RayCastResult *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_RayCastResult_Reset(
  JoltC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->Reset();
}

//endregion

//region properties

JoltC_SubShapeID_t * JoltC_RayCastResult_mSubShapeID2_Get(
  JoltC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RayCastResult_mSubShapeID2_Set(
  JoltC_RayCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *static_cast<SubShapeID *>(mSubShapeID2->obj);
}

JoltC_BodyID_t * JoltC_RayCastResult_mBodyID_Get(
  JoltC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->mBodyID;
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RayCastResult_mBodyID_Set(
  JoltC_RayCastResult_t * self,
  JoltC_BodyID_t * mBodyID
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mBodyID = *static_cast<BodyID *>(mBodyID->obj);
}

float JoltC_RayCastResult_mFraction_Get(
  JoltC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  return selfCpp->mFraction;
}

void JoltC_RayCastResult_mFraction_Set(
  JoltC_RayCastResult_t * self,
  float mFraction
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
}

//endregion


#ifdef __cplusplus
}
#endif
