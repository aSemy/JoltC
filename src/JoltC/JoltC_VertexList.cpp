#include "JoltC/JoltC_VertexList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VertexList_t * JoltC_VertexList_new() {
  JoltC_VertexList_t * cInstance = new JoltC_VertexList_t();
  VertexList * cppInstance = new VertexList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_VertexList_empty(
  JoltC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_VertexList_size(
  JoltC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_Float3_t * JoltC_VertexList_at(
  JoltC_VertexList_t * self,
  long inIndex
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  Float3* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Float3_t* result = new JoltC_Float3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_VertexList_push_back(
  JoltC_VertexList_t * self,
  JoltC_Float3_t * inVertex
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<Float3 *>(inVertex->obj)
  );
};

void JoltC_VertexList_reserve(
  JoltC_VertexList_t * self,
  unsigned long inSize
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_VertexList_resize(
  JoltC_VertexList_t * self,
  unsigned long inSize
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_VertexList_clear(
  JoltC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

