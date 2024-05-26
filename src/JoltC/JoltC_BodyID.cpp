#include "JoltC/JoltC_BodyID.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyID_t * JoltC_BodyID_new_0() {
  JoltC_BodyID_t * cInstance = new JoltC_BodyID_t();
  BodyID * cppInstance = new BodyID();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_BodyID_t * JoltC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber
) {
  JoltC_BodyID_t * cInstance = new JoltC_BodyID_t();
  BodyID * cppInstance = new BodyID(
    inIndexAndSequenceNumber
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_BodyID_GetIndex(
  JoltC_BodyID_t * self
) {
  BodyID * selfCpp = static_cast<BodyID *>(self->obj);
  unsigned long result = selfCpp->GetIndex();
  return result;
};

unsigned long JoltC_BodyID_GetIndexAndSequenceNumber(
  JoltC_BodyID_t * self
) {
  BodyID * selfCpp = static_cast<BodyID *>(self->obj);
  unsigned long result = selfCpp->GetIndexAndSequenceNumber();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

