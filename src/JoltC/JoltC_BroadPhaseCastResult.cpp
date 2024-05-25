#include "JoltC/JPC_BroadPhaseCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseCastResult_t * JPC_BroadPhaseCastResult_new() {
  JPC_BroadPhaseCastResult_t * cInstance = new JPC_BroadPhaseCastResult_t();
  BroadPhaseCastResult * cppInstance = new BroadPhaseCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_BroadPhaseCastResult_Reset(
  JPC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  
  selfCpp->Reset();
};

//endregion functions

//region properties

JPC_BodyID_t * JPC_BroadPhaseCastResult_mBodyID_Get(
  JPC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_BroadPhaseCastResult_mBodyID_Set(
  JPC_BroadPhaseCastResult_t * self,
  JPC_BodyID_t * mBodyID
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

float JPC_BroadPhaseCastResult_mFraction_Get(
  JPC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JPC_BroadPhaseCastResult_mFraction_Set(
  JPC_BroadPhaseCastResult_t * self,
  float mFraction
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

//endregion properties

#ifdef __cplusplus
}
#endif

