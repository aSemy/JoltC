#include "JoltC/JPC_ArraySoftBodySharedSettingsFace.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsFace_empty(
  JPC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsFace_size(
  JPC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsFace_t * JPC_ArraySoftBodySharedSettingsFace_at(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  SoftBodySharedSettingsFace& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsFace * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsFace_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsFace_push_back(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  const JPC_SoftBodySharedSettingsFace_t * inValue
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsFace *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsFace_reserve(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsFace_resize(
  JPC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsFace_clear(
  JPC_ArraySoftBodySharedSettingsFace_t * self
) {
  ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

