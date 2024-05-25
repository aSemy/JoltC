#include "JoltC/JPC_ArraySoftBodySharedSettingsInvBind.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsInvBind_empty(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsInvBind_size(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsInvBind_t * JPC_ArraySoftBodySharedSettingsInvBind_at(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  SoftBodySharedSettingsInvBind& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsInvBind * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsInvBind_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsInvBind_push_back(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  const JPC_SoftBodySharedSettingsInvBind_t * inValue
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsInvBind *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsInvBind_reserve(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsInvBind_resize(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsInvBind_clear(
  JPC_ArraySoftBodySharedSettingsInvBind_t * self
) {
  ArraySoftBodySharedSettingsInvBind * selfCpp = static_cast<ArraySoftBodySharedSettingsInvBind *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

