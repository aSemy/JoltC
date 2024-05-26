#include "JoltC/JoltC_ArrayRagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_new() {
  JoltC_ArrayRagdollAdditionalConstraint_t * cInstance = new JoltC_ArrayRagdollAdditionalConstraint_t();
  ArrayRagdollAdditionalConstraint * cppInstance = new ArrayRagdollAdditionalConstraint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_ArrayRagdollAdditionalConstraint_empty(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayRagdollAdditionalConstraint_size(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_RagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_at(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  RagdollAdditionalConstraint* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_RagdollAdditionalConstraint_t* result = new JoltC_RagdollAdditionalConstraint_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArrayRagdollAdditionalConstraint_push_back(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  JoltC_RagdollAdditionalConstraint_t * inValue
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->push_back(
    *reinterpret_cast<RagdollAdditionalConstraint *>(inValue->obj)
  );
};

void JoltC_ArrayRagdollAdditionalConstraint_reserve(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayRagdollAdditionalConstraint_resize(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayRagdollAdditionalConstraint_clear(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

