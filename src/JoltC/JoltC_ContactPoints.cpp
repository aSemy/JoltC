#include "JoltC/JPC_ContactPoints.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ContactPoints_empty(
  JPC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ContactPoints_size(
  JPC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Vec3_t * JPC_ContactPoints_at(
  JPC_ContactPoints_t * self,
  long inIndex
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  Vec3& resultRef = selfCpp->at(
  inIndex
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ContactPoints_push_back(
  JPC_ContactPoints_t * self,
  const JPC_Vec3_t * inValue
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JPC_ContactPoints_resize(
  JPC_ContactPoints_t * self,
  unsigned long inSize
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ContactPoints_clear(
  JPC_ContactPoints_t * self
) {
  ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

