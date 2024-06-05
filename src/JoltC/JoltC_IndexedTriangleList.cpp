#include "JoltC/JoltC_IndexedTriangleList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangleList_t * JoltC_IndexedTriangleList_new() {
  JoltC_IndexedTriangleList_t * cInstance = new JoltC_IndexedTriangleList_t();
  IndexedTriangleList * cppInstance = new IndexedTriangleList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_IndexedTriangleList_empty(
  JoltC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_IndexedTriangleList_size(
  JoltC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_IndexedTriangle_t * JoltC_IndexedTriangleList_at(
  JoltC_IndexedTriangleList_t * self,
  long inIndex
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  IndexedTriangle* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_IndexedTriangle_t* result = new JoltC_IndexedTriangle_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_IndexedTriangleList_push_back(
  JoltC_IndexedTriangleList_t * self,
  JoltC_IndexedTriangle_t * inTriangle
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<IndexedTriangle *>(inTriangle->obj)
  );
};

void JoltC_IndexedTriangleList_reserve(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_IndexedTriangleList_resize(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_IndexedTriangleList_clear(
  JoltC_IndexedTriangleList_t * self
) {
  IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

