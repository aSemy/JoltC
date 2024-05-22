#include "JoltC/JPC_ArraySoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsSkinned_empty(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsSkinned_size(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsSkinned_t * JPC_ArraySoftBodySharedSettingsSkinned_at(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  SoftBodySharedSettingsSkinned& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsSkinned * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsSkinned_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsSkinned_push_back(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  const JPC_SoftBodySharedSettingsSkinned_t * inValue
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsSkinned *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsSkinned_reserve(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsSkinned_resize(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsSkinned_clear(
  JPC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

