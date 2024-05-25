#include "JoltC/JPC_RayCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCastResult_t * JPC_RayCastResult_new() {
  JPC_RayCastResult_t * cInstance = new JPC_RayCastResult_t();
  RayCastResult * cppInstance = new RayCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_RayCastResult_Reset(
  JPC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  
  selfCpp->Reset();
};

//endregion functions

//region properties

JPC_SubShapeID_t * JPC_RayCastResult_mSubShapeID2_Get(
  JPC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_RayCastResult_mSubShapeID2_Set(
  JPC_RayCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JPC_BodyID_t * JPC_RayCastResult_mBodyID_Get(
  JPC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_RayCastResult_mBodyID_Set(
  JPC_RayCastResult_t * self,
  JPC_BodyID_t * mBodyID
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

float JPC_RayCastResult_mFraction_Get(
  JPC_RayCastResult_t * self
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JPC_RayCastResult_mFraction_Set(
  JPC_RayCastResult_t * self,
  float mFraction
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

//endregion properties

#ifdef __cplusplus
}
#endif

