#include "JoltC/JPC_BodyIDVector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyIDVector_t * JPC_BodyIDVector_new() {
  JPC_BodyIDVector_t * cInstance = new JPC_BodyIDVector_t();
  BodyIDVector * cppInstance = new BodyIDVector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_BodyIDVector_empty(
  JPC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_BodyIDVector_size(
  JPC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_BodyID_t * JPC_BodyIDVector_at(
  JPC_BodyIDVector_t * self,
  long inIndex
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  BodyID& resultRef = selfCpp->at(
  inIndex
  );
  BodyID * result = &resultRef;
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_BodyIDVector_push_back(
  JPC_BodyIDVector_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

void JPC_BodyIDVector_reserve(
  JPC_BodyIDVector_t * self,
  unsigned long inSize
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_BodyIDVector_resize(
  JPC_BodyIDVector_t * self,
  unsigned long inSize
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_BodyIDVector_clear(
  JPC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

