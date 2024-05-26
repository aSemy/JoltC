#include "JoltC/JoltC_ArraySoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertex_empty(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsVertex_size(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsVertex_t * JoltC_ArraySoftBodySharedSettingsVertex_at(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  SoftBodySharedSettingsVertex* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsVertex_t* result = new JoltC_SoftBodySharedSettingsVertex_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArraySoftBodySharedSettingsVertex_push_back(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  JoltC_SoftBodySharedSettingsVertex_t * inValue
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsVertex *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsVertex_reserve(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsVertex_resize(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsVertex_clear(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

