#include "JoltC/JoltC_RayCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCastResult_t * JoltC_RayCastResult_new(
  char** outErrMsg
) {
  try {
    JoltC_RayCastResult_t * cInstance = new JoltC_RayCastResult_t();
    RayCastResult * cppInstance = new RayCastResult();
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

void JoltC_RayCastResult_Reset(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
) {
  try {
    RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
    
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

JoltC_SubShapeID_t * JoltC_RayCastResult_mSubShapeID2_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_RayCastResult_mSubShapeID2_Set(
  JoltC_RayCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JoltC_BodyID_t * JoltC_RayCastResult_mBodyID_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_RayCastResult_mBodyID_Set(
  JoltC_RayCastResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

float JoltC_RayCastResult_mFraction_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JoltC_RayCastResult_mFraction_Set(
  JoltC_RayCastResult_t * self,
  float mFraction,
  char** outErrMsg
) {
  RayCastResult * selfCpp = static_cast<RayCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

//endregion properties

#ifdef __cplusplus
}
#endif

