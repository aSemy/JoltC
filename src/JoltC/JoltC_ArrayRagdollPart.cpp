#include "JoltC/JoltC_ArrayRagdollPart.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollPart_t * JoltC_ArrayRagdollPart_new() {
  JoltC_ArrayRagdollPart_t * cInstance = new JoltC_ArrayRagdollPart_t();
  ArrayRagdollPart * cppInstance = new ArrayRagdollPart();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_ArrayRagdollPart_empty(
  JoltC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayRagdollPart_size(
  JoltC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_RagdollPart_t * JoltC_ArrayRagdollPart_at(
  JoltC_ArrayRagdollPart_t * self,
  long inIndex
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  RagdollPart* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_RagdollPart_t* result = new JoltC_RagdollPart_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArrayRagdollPart_push_back(
  JoltC_ArrayRagdollPart_t * self,
  JoltC_RagdollPart_t * inValue
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->push_back(
    *reinterpret_cast<RagdollPart *>(inValue->obj)
  );
};

void JoltC_ArrayRagdollPart_reserve(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayRagdollPart_resize(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayRagdollPart_clear(
  JoltC_ArrayRagdollPart_t * self
) {
  ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

