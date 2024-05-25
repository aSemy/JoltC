#include "JoltC/JPC_SubShapeIDPair.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SubShapeIDPair_t * JPC_SubShapeIDPair_new() {
  JPC_SubShapeIDPair_t * cInstance = new JPC_SubShapeIDPair_t();
  SubShapeIDPair * cppInstance = new SubShapeIDPair();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_BodyID_t * JPC_SubShapeIDPair_GetBody1ID(
  JPC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID& resultRef = selfCpp->GetBody1ID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JPC_BodyID_t *>(result);
};

const JPC_SubShapeID_t * JPC_SubShapeIDPair_GetSubShapeID1(
  JPC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID& resultRef = selfCpp->GetSubShapeID1();
  const SubShapeID * result = &resultRef;
  return reinterpret_cast<const JPC_SubShapeID_t *>(result);
};

const JPC_BodyID_t * JPC_SubShapeIDPair_GetBody2ID(
  JPC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID& resultRef = selfCpp->GetBody2ID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JPC_BodyID_t *>(result);
};

const JPC_SubShapeID_t * JPC_SubShapeIDPair_GetSubShapeID2(
  JPC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID& resultRef = selfCpp->GetSubShapeID2();
  const SubShapeID * result = &resultRef;
  return reinterpret_cast<const JPC_SubShapeID_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

