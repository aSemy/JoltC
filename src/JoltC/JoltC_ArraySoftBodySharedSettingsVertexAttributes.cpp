#include "JoltC/JoltC_ArraySoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  SoftBodySharedSettingsVertexAttributes* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsVertexAttributes_t* result = new JoltC_SoftBodySharedSettingsVertexAttributes_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inValue
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsVertexAttributes *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  selfCpp->clear();
};

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self
) {
  ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
  const SoftBodySharedSettingsVertexAttributes * resultValue = selfCpp->data();
  JoltC_SoftBodySharedSettingsVertexAttributes_t* result = new JoltC_SoftBodySharedSettingsVertexAttributes_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

