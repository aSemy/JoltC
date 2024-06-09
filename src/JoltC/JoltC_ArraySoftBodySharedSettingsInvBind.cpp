#include "JoltC/JoltC_ArraySoftBodySharedSettingsInvBind.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsInvBind_empty(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsInvBind_size(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsInvBind_t * JoltC_ArraySoftBodySharedSettingsInvBind_at(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  SoftBodySharedSettingsInvBind* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsInvBind_t* result = new JoltC_SoftBodySharedSettingsInvBind_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsInvBind_push_back(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  JoltC_SoftBodySharedSettingsInvBind_t * inValue
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  const SoftBodySharedSettingsInvBind * inValueCpp = static_cast<const SoftBodySharedSettingsInvBind *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsInvBind_reserve(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsInvBind_resize(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsInvBind_clear(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

