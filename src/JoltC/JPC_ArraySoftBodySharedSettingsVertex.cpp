#include "JoltC/JPC_ArraySoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVertex_empty(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsVertex_size(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsVertex_t * JPC_ArraySoftBodySharedSettingsVertex_at(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  SoftBodySharedSettingsVertex& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsVertex * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsVertex_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsVertex_push_back(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  const JPC_SoftBodySharedSettingsVertex_t * inValue
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsVertex *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsVertex_reserve(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVertex_resize(
  JPC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVertex_clear(
  JPC_ArraySoftBodySharedSettingsVertex_t * self
) {
  ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

