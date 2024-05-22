#include "JoltC/JPC_ArrayRagdollPart.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArrayRagdollPart_t * JPC_ArrayRagdollPart_new() {
  JPC_ArrayRagdollPart_t * cInstance = new JPC_ArrayRagdollPart_t();
  ArrayRagdollPart * cppInstance = new ArrayRagdollPart();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_ArrayRagdollPart_empty(
  JPC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayRagdollPart_size(
  JPC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_RagdollPart_t * JPC_ArrayRagdollPart_at(
  JPC_ArrayRagdollPart_t * self,
  long inIndex
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  RagdollPart& resultRef = selfCpp->at(
  inIndex
  );
  RagdollPart * result = &resultRef;
  return reinterpret_cast<JPC_RagdollPart_t *>(result);
};

void JPC_ArrayRagdollPart_push_back(
  JPC_ArrayRagdollPart_t * self,
  JPC_RagdollPart_t * inValue
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<RagdollPart *>(inValue->obj)
  );
};

void JPC_ArrayRagdollPart_reserve(
  JPC_ArrayRagdollPart_t * self,
  unsigned long inSize
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayRagdollPart_resize(
  JPC_ArrayRagdollPart_t * self,
  unsigned long inSize
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayRagdollPart_clear(
  JPC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

