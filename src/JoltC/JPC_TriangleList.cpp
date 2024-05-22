#include "JoltC/JPC_TriangleList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TriangleList_t * JPC_TriangleList_new() {
  JPC_TriangleList_t * cInstance = new JPC_TriangleList_t();
  TriangleList * cppInstance = new TriangleList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_TriangleList_empty(
  JPC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_TriangleList_size(
  JPC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Triangle_t * JPC_TriangleList_at(
  JPC_TriangleList_t * self,
  long inIndex
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  Triangle& resultRef = selfCpp->at(
  inIndex
  );
  Triangle * result = &resultRef;
  return reinterpret_cast<JPC_Triangle_t *>(result);
};

void JPC_TriangleList_push_back(
  JPC_TriangleList_t * self,
  const JPC_Triangle_t * inTriangle
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Triangle *>(inTriangle->obj)
  );
};

void JPC_TriangleList_reserve(
  JPC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_TriangleList_resize(
  JPC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_TriangleList_clear(
  JPC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

