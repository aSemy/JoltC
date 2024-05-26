#include "JoltC/JoltC_ArraySoftBodySharedSettingsInvBind.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsInvBind_empty(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsInvBind_size(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsInvBind_t * JoltC_ArraySoftBodySharedSettingsInvBind_at(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  SoftBodySharedSettingsInvBind& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsInvBind * result = &resultRef;
  return reinterpret_cast<JoltC_SoftBodySharedSettingsInvBind_t *>(result);
};

void JoltC_ArraySoftBodySharedSettingsInvBind_push_back(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  const JoltC_SoftBodySharedSettingsInvBind_t * inValue
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsInvBind *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsInvBind_reserve(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsInvBind_resize(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsInvBind_clear(
  JoltC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

