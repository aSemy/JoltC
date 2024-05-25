#include "JoltC/JPC_CollidePointResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointResult_t * JPC_CollidePointResult_new() {
  JPC_CollidePointResult_t * cInstance = new JPC_CollidePointResult_t();
  CollidePointResult * cppInstance = new CollidePointResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_BodyID_t * JPC_CollidePointResult_mBodyID_Get(
  JPC_CollidePointResult_t * self
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_CollidePointResult_mBodyID_Set(
  JPC_CollidePointResult_t * self,
  JPC_BodyID_t * mBodyID
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

JPC_SubShapeID_t * JPC_CollidePointResult_mSubShapeID2_Get(
  JPC_CollidePointResult_t * self
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_CollidePointResult_mSubShapeID2_Set(
  JPC_CollidePointResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
) {
  CollidePointResult * selfCpp = static_cast<CollidePointResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

