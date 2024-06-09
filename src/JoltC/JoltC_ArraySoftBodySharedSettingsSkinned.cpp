#include "JoltC/JoltC_ArraySoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsSkinned_empty(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsSkinned_size(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsSkinned_t * JoltC_ArraySoftBodySharedSettingsSkinned_at(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  SoftBodySharedSettingsSkinned* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsSkinned_t* result = new JoltC_SoftBodySharedSettingsSkinned_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsSkinned_push_back(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinned_t * inValue
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  const SoftBodySharedSettingsSkinned * inValueCpp = static_cast<const SoftBodySharedSettingsSkinned *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsSkinned_reserve(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsSkinned_resize(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsSkinned_clear(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self
) {
  ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

