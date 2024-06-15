#include "JoltC/JoltC_ArraySoftBodySharedSettingsVolume.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodySharedSettingsVolume_destroy(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
){
  if (self == NULL) return;
  delete static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArraySoftBodySharedSettingsVolume_empty(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsVolume_size(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsVolume_t * JoltC_ArraySoftBodySharedSettingsVolume_at(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  SoftBodySharedSettingsVolume* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsVolume_t* result = new JoltC_SoftBodySharedSettingsVolume_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsVolume_push_back(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  JoltC_SoftBodySharedSettingsVolume_t * inValue
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  const SoftBodySharedSettingsVolume * inValueCpp = static_cast<const SoftBodySharedSettingsVolume *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsVolume_reserve(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsVolume_resize(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsVolume_clear(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self
) {
  ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
