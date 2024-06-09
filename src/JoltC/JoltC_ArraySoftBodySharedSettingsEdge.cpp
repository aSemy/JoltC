#include "JoltC/JoltC_ArraySoftBodySharedSettingsEdge.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsEdge_empty(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsEdge_size(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsEdge_t * JoltC_ArraySoftBodySharedSettingsEdge_at(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  SoftBodySharedSettingsEdge* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsEdge_t* result = new JoltC_SoftBodySharedSettingsEdge_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsEdge_push_back(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  JoltC_SoftBodySharedSettingsEdge_t * inValue
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  const SoftBodySharedSettingsEdge * inValueCpp = static_cast<const SoftBodySharedSettingsEdge *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsEdge_reserve(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsEdge_resize(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsEdge_clear(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

