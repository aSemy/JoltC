#include "JoltC/JoltC_ContactPoints.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ContactPoints_empty(
  JoltC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ContactPoints_size(
  JoltC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_Vec3_t * JoltC_ContactPoints_at(
  JoltC_ContactPoints_t * self,
  long inIndex
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  Vec3* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ContactPoints_push_back(
  JoltC_ContactPoints_t * self,
  JoltC_Vec3_t * inValue
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JoltC_ContactPoints_resize(
  JoltC_ContactPoints_t * self,
  unsigned long inSize
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ContactPoints_clear(
  JoltC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

