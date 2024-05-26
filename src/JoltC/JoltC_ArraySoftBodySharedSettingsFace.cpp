#include "JoltC/JoltC_ArraySoftBodySharedSettingsFace.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsFace_empty(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsFace_size(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsFace_t * JoltC_ArraySoftBodySharedSettingsFace_at(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  SoftBodySharedSettingsFace& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsFace * result = &resultRef;
  return reinterpret_cast<JoltC_SoftBodySharedSettingsFace_t *>(result);
};

void JoltC_ArraySoftBodySharedSettingsFace_push_back(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  const JoltC_SoftBodySharedSettingsFace_t * inValue
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsFace *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsFace_reserve(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsFace_resize(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsFace_clear(
  JoltC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

