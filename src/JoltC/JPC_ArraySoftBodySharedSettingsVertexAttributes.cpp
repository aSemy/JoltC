#include "JoltC/JPC_ArraySoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettingsVertexAttributes& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsVertexAttributes * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsVertexAttributes_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  const JPC_SoftBodySharedSettingsVertexAttributes_t * inValue
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsVertexAttributes *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  
  selfCpp->clear();
};

JPC_SoftBodySharedSettingsVertexAttributes_t * JPC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JPC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettingsVertexAttributes * result = selfCpp->data();
  return reinterpret_cast<JPC_SoftBodySharedSettingsVertexAttributes_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

