#include "JoltC/JPC_ArraySoftBodySharedSettingsEdge.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsEdge_empty(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsEdge_size(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsEdge_t * JPC_ArraySoftBodySharedSettingsEdge_at(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  SoftBodySharedSettingsEdge& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsEdge * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsEdge_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsEdge_push_back(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  const JPC_SoftBodySharedSettingsEdge_t * inValue
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsEdge *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsEdge_reserve(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsEdge_resize(
  JPC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsEdge_clear(
  JPC_ArraySoftBodySharedSettingsEdge_t * self
) {
  ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

