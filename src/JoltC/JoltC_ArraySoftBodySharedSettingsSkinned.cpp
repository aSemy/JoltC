#include "JoltC/JoltC_ArraySoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsSkinned_empty(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsSkinned_size(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsSkinned_t * JoltC_ArraySoftBodySharedSettingsSkinned_at(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  SoftBodySharedSettingsSkinned& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsSkinned * result = &resultRef;
  return reinterpret_cast<JoltC_SoftBodySharedSettingsSkinned_t *>(result);
};

void JoltC_ArraySoftBodySharedSettingsSkinned_push_back(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  const JoltC_SoftBodySharedSettingsSkinned_t * inValue
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsSkinned *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsSkinned_reserve(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsSkinned_resize(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsSkinned_clear(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

