#include "JoltC/JPC_ArraySoftBodySharedSettingsVolume.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVolume_empty(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsVolume_size(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsVolume_t * JPC_ArraySoftBodySharedSettingsVolume_at(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  SoftBodySharedSettingsVolume& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsVolume * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsVolume_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsVolume_push_back(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  const JPC_SoftBodySharedSettingsVolume_t * inValue
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsVolume *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsVolume_reserve(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVolume_resize(
  JPC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVolume_clear(
  JPC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

