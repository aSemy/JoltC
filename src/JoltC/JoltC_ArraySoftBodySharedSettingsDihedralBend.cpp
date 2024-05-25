#include "JoltC/JPC_ArraySoftBodySharedSettingsDihedralBend.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodySharedSettingsDihedralBend_empty(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodySharedSettingsDihedralBend_size(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodySharedSettingsDihedralBend_t * JPC_ArraySoftBodySharedSettingsDihedralBend_at(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  SoftBodySharedSettingsDihedralBend& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodySharedSettingsDihedralBend * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodySharedSettingsDihedralBend_t *>(result);
};

void JPC_ArraySoftBodySharedSettingsDihedralBend_push_back(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  const JPC_SoftBodySharedSettingsDihedralBend_t * inValue
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodySharedSettingsDihedralBend *>(inValue->obj)
  );
};

void JPC_ArraySoftBodySharedSettingsDihedralBend_reserve(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsDihedralBend_resize(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodySharedSettingsDihedralBend_clear(
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * self
) {
  ArraySoftBodySharedSettingsDihedralBend * selfCpp = static_cast<ArraySoftBodySharedSettingsDihedralBend *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

