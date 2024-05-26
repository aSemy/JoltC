#include "JoltC/JoltC_SubShapeIDPair.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeIDPair_t * JoltC_SubShapeIDPair_new() {
  JoltC_SubShapeIDPair_t * cInstance = new JoltC_SubShapeIDPair_t();
  SubShapeIDPair * cppInstance = new SubShapeIDPair();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody1ID(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID& resultRef = selfCpp->GetBody1ID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JoltC_BodyID_t *>(result);
};

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID1(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID& resultRef = selfCpp->GetSubShapeID1();
  const SubShapeID * result = &resultRef;
  return reinterpret_cast<const JoltC_SubShapeID_t *>(result);
};

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody2ID(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID& resultRef = selfCpp->GetBody2ID();
  const BodyID * result = &resultRef;
  return reinterpret_cast<const JoltC_BodyID_t *>(result);
};

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID2(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID& resultRef = selfCpp->GetSubShapeID2();
  const SubShapeID * result = &resultRef;
  return reinterpret_cast<const JoltC_SubShapeID_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

