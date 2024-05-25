#include "JoltC/JPC_IndexedTriangleList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IndexedTriangleList_t * JPC_IndexedTriangleList_new() {
  JPC_IndexedTriangleList_t * cInstance = new JPC_IndexedTriangleList_t();
  IndexedTriangleList * cppInstance = new IndexedTriangleList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_IndexedTriangleList_empty(
  JPC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_IndexedTriangleList_size(
  JPC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_IndexedTriangle_t * JPC_IndexedTriangleList_at(
  JPC_IndexedTriangleList_t * self,
  long inIndex
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  IndexedTriangle& resultRef = selfCpp->at(
  inIndex
  );
  IndexedTriangle * result = &resultRef;
  return reinterpret_cast<JPC_IndexedTriangle_t *>(result);
};

void JPC_IndexedTriangleList_push_back(
  JPC_IndexedTriangleList_t * self,
  const JPC_IndexedTriangle_t * inTriangle
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<IndexedTriangle *>(inTriangle->obj)
  );
};

void JPC_IndexedTriangleList_reserve(
  JPC_IndexedTriangleList_t * self,
  unsigned long inSize
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_IndexedTriangleList_resize(
  JPC_IndexedTriangleList_t * self,
  unsigned long inSize
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_IndexedTriangleList_clear(
  JPC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

