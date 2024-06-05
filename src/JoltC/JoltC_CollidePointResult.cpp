#include "JoltC/JoltC_CollidePointResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  const BodyID& resultValue = selfCpp->mBodyID;
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CollidePointResult_mBodyID_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_BodyID_t * mBodyID
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

JoltC_SubShapeID_t * JoltC_CollidePointResult_mSubShapeID2_Get(
  JoltC_CollidePointResult_t * self
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  const SubShapeID& resultValue = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t* result = new JoltC_SubShapeID_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CollidePointResult_mSubShapeID2_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

