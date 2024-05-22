#include "JoltC/JPC_BodyID.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyID_t * JPC_BodyID_new_0() {
  JPC_BodyID_t * cInstance = new JPC_BodyID_t();
  BodyID * cppInstance = new BodyID();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_BodyID_t * JPC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber
) {
  JPC_BodyID_t * cInstance = new JPC_BodyID_t();
  BodyID * cppInstance = new BodyID(
    inIndexAndSequenceNumber
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_BodyID_GetIndex(
  JPC_BodyID_t * self
) {
  BodyID * selfCpp = static_cast<BodyID *>(self->obj);
  unsigned long result = selfCpp->GetIndex();
  return result;
};

unsigned long JPC_BodyID_GetIndexAndSequenceNumber(
  JPC_BodyID_t * self
) {
  BodyID * selfCpp = static_cast<BodyID *>(self->obj);
  unsigned long result = selfCpp->GetIndexAndSequenceNumber();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

