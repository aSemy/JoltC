#include "JoltC/JoltC_ArraySoftBodySharedSettingsDihedralBend.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodySharedSettingsDihedralBend_destroy(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
){
  if (self == NULL) return;
  delete static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArraySoftBodySharedSettingsDihedralBend_empty(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodySharedSettingsDihedralBend_size(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_ArraySoftBodySharedSettingsDihedralBend_at(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  SoftBodySharedSettingsDihedralBend* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsDihedralBend_t* result = new JoltC_SoftBodySharedSettingsDihedralBend_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodySharedSettingsDihedralBend_push_back(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  JoltC_SoftBodySharedSettingsDihedralBend_t * inValue
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  const SoftBodySharedSettingsDihedralBend * inValueCpp = static_cast<const SoftBodySharedSettingsDihedralBend *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodySharedSettingsDihedralBend_reserve(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsDihedralBend_resize(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodySharedSettingsDihedralBend_clear(
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
