#include "JoltC/JPC_ArraySoftBodySharedSettingsLRA.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsLRA_empty(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsLRA_size(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsLRA_t * JPC_ArraySoftBodySharedSettingsLRA_at(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  SoftBodySharedSettingsLRA& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsLRA * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsLRA_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsLRA_push_back(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  const JPC_SoftBodySharedSettingsLRA_t * inValue
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsLRA *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsLRA_reserve(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsLRA_resize(
  JPC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsLRA_clear(
  JPC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

