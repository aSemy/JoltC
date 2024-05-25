#include "JoltC/JPC_ArrayRagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArrayRagdollAdditionalConstraint_t * JPC_ArrayRagdollAdditionalConstraint_new() {
  JPC_ArrayRagdollAdditionalConstraint_t * cInstance = new JPC_ArrayRagdollAdditionalConstraint_t();
  ArrayRagdollAdditionalConstraint * cppInstance = new ArrayRagdollAdditionalConstraint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_ArrayRagdollAdditionalConstraint_empty(
  JPC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayRagdollAdditionalConstraint_size(
  JPC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_RagdollAdditionalConstraint_t * JPC_ArrayRagdollAdditionalConstraint_at(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  RagdollAdditionalConstraint& resultRef = selfCpp->at(
  inIndex
  );
  RagdollAdditionalConstraint * result = &resultRef;
  return reinterpret_cast<JPC_RagdollAdditionalConstraint_t *>(result);
};

void JPC_ArrayRagdollAdditionalConstraint_push_back(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  JPC_RagdollAdditionalConstraint_t * inValue
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<RagdollAdditionalConstraint *>(inValue->obj)
  );
};

void JPC_ArrayRagdollAdditionalConstraint_reserve(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayRagdollAdditionalConstraint_resize(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayRagdollAdditionalConstraint_clear(
  JPC_ArrayRagdollAdditionalConstraint_t * self
) {
  ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

