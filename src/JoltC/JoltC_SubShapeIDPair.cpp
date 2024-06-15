#include "JoltC/JoltC_SubShapeIDPair.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SubShapeIDPair` instance.
 */
JoltC_SubShapeIDPair_t * JoltC_SubShapeIDPair_new() {
  JoltC_SubShapeIDPair_t * cInstance = new JoltC_SubShapeIDPair_t();
  SubShapeIDPair * cppInstance = new SubShapeIDPair();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SubShapeIDPair_destroy(
  JoltC_SubShapeIDPair_t * self
){
  if (self == NULL) return;
  delete static_cast<SubShapeIDPair *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody1ID(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID* resultRef = &selfCpp->GetBody1ID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID1(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID* resultRef = &selfCpp->GetSubShapeID1();
  JoltC_SubShapeID_t* result = new JoltC_SubShapeID_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody2ID(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const BodyID* resultRef = &selfCpp->GetBody2ID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID2(
  JoltC_SubShapeIDPair_t * self
) {
  SubShapeIDPair * selfCpp = static_cast<SubShapeIDPair *>(self->obj);
  const SubShapeID* resultRef = &selfCpp->GetSubShapeID2();
  JoltC_SubShapeID_t* result = new JoltC_SubShapeID_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
