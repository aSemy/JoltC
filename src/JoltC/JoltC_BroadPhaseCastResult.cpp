#include "JoltC/JoltC_BroadPhaseCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_new(
  char** outErrMsg
) {
  try {
    JoltC_BroadPhaseCastResult_t * cInstance = new JoltC_BroadPhaseCastResult_t();
    BroadPhaseCastResult * cppInstance = new BroadPhaseCastResult();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

void JoltC_BroadPhaseCastResult_Reset(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_BodyID_t * JoltC_BroadPhaseCastResult_mBodyID_Get(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_BroadPhaseCastResult_mBodyID_Set(
  JoltC_BroadPhaseCastResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

float JoltC_BroadPhaseCastResult_mFraction_Get(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JoltC_BroadPhaseCastResult_mFraction_Set(
  JoltC_BroadPhaseCastResult_t * self,
  float mFraction,
  char** outErrMsg
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

//endregion properties

#ifdef __cplusplus
}
#endif

