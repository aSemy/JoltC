#include "JoltC/JoltC_ArraySoftBodySharedSettingsFace.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsFace_empty(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsFace_size(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsFace_t * JoltC_ArraySoftBodySharedSettingsFace_at(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  SoftBodySharedSettingsFace* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsFace_t* result = new JoltC_SoftBodySharedSettingsFace_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsFace_push_back(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  JoltC_SoftBodySharedSettingsFace_t * inValue
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  const SoftBodySharedSettingsFace * inValueCpp = static_cast<const SoftBodySharedSettingsFace *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsFace_reserve(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsFace_resize(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsFace_clear(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

