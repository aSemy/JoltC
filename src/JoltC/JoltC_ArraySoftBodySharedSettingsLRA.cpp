#include "JoltC/JoltC_ArraySoftBodySharedSettingsLRA.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsLRA_empty(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodySharedSettingsLRA_size(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SoftBodySharedSettingsLRA_t * JoltC_ArraySoftBodySharedSettingsLRA_at(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  SoftBodySharedSettingsLRA* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodySharedSettingsLRA_t* result = new JoltC_SoftBodySharedSettingsLRA_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArraySoftBodySharedSettingsLRA_push_back(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  JoltC_SoftBodySharedSettingsLRA_t * inValue
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsLRA *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodySharedSettingsLRA_reserve(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsLRA_resize(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArraySoftBodySharedSettingsLRA_clear(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self
) {
  ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

