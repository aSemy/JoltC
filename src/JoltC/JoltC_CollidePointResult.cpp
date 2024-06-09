#include "JoltC/JoltC_CollidePointResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollidePointResult` instance.
 */
JoltC_CollidePointResult_t * JoltC_CollidePointResult_new() {
  JoltC_CollidePointResult_t * cInstance = new JoltC_CollidePointResult_t();
  CollidePointResult * cppInstance = new CollidePointResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_BodyID_t * JoltC_CollidePointResult_mBodyID_Get(
  JoltC_CollidePointResult_t * self
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->mBodyID;
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollidePointResult_mBodyID_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_BodyID_t * mBodyID
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mBodyID = *static_cast<BodyID *>(mBodyID->obj);
};

JoltC_SubShapeID_t * JoltC_CollidePointResult_mSubShapeID2_Get(
  JoltC_CollidePointResult_t * self
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollidePointResult_mSubShapeID2_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mSubShapeID2 = *static_cast<SubShapeID *>(mSubShapeID2->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

