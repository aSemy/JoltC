#include "JoltC/JoltC_CollidePointResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointResult_t * JoltC_CollidePointResult_new(
  char** outErrMsg
) {
  try {
    JoltC_CollidePointResult_t * cInstance = new JoltC_CollidePointResult_t();
    CollidePointResult * cppInstance = new CollidePointResult();
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

//region properties

JoltC_BodyID_t * JoltC_CollidePointResult_mBodyID_Get(
  JoltC_CollidePointResult_t * self,
  char** outErrMsg
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_CollidePointResult_mBodyID_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

JoltC_SubShapeID_t * JoltC_CollidePointResult_mSubShapeID2_Get(
  JoltC_CollidePointResult_t * self,
  char** outErrMsg
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_CollidePointResult_mSubShapeID2_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

