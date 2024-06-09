#include "JoltC/JoltC_BodyIDVector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BodyIDVector` instance.
 */
JoltC_BodyIDVector_t * JoltC_BodyIDVector_new() {
  JoltC_BodyIDVector_t * cInstance = new JoltC_BodyIDVector_t();
  BodyIDVector * cppInstance = new BodyIDVector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_BodyIDVector_empty(
  JoltC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  return selfCpp->empty();
}

long JoltC_BodyIDVector_size(
  JoltC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  return selfCpp->size();
}

JoltC_BodyID_t * JoltC_BodyIDVector_at(
  JoltC_BodyIDVector_t * self,
  long inIndex
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  BodyID* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_BodyIDVector_push_back(
  JoltC_BodyIDVector_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->push_back(
    *inBodyIDCpp
  );
}

void JoltC_BodyIDVector_reserve(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_BodyIDVector_resize(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_BodyIDVector_clear(
  JoltC_BodyIDVector_t * self
) {
  BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

