#include "JoltC/JoltC_TriangleList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `TriangleList` instance.
 */
JoltC_TriangleList_t * JoltC_TriangleList_new() {
  JoltC_TriangleList_t * cInstance = new JoltC_TriangleList_t();
  TriangleList * cppInstance = new TriangleList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_TriangleList_destroy(
  JoltC_TriangleList_t * self
){
  if (self == NULL) return;
  delete static_cast<TriangleList *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_TriangleList_empty(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  return selfCpp->empty();
}

long JoltC_TriangleList_size(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  return selfCpp->size();
}

JoltC_Triangle_t * JoltC_TriangleList_at(
  JoltC_TriangleList_t * self,
  long inIndex
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  Triangle* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Triangle_t* result = new JoltC_Triangle_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_TriangleList_push_back(
  JoltC_TriangleList_t * self,
  JoltC_Triangle_t * inTriangle
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  const Triangle * inTriangleCpp = static_cast<const Triangle *>(inTriangle->obj);
  selfCpp->push_back(
    *inTriangleCpp
  );
}

void JoltC_TriangleList_reserve(
  JoltC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_TriangleList_resize(
  JoltC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_TriangleList_clear(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
