#include "JoltC/JPC_VertexList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VertexList_t * JPC_VertexList_new() {
  JPC_VertexList_t * cInstance = new JPC_VertexList_t();
  VertexList * cppInstance = new VertexList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_VertexList_empty(
  JPC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_VertexList_size(
  JPC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Float3_t * JPC_VertexList_at(
  JPC_VertexList_t * self,
  long inIndex
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  Float3& resultRef = selfCpp->at(
  inIndex
  );
  Float3 * result = &resultRef;
  return reinterpret_cast<JPC_Float3_t *>(result);
};

void JPC_VertexList_push_back(
  JPC_VertexList_t * self,
  const JPC_Float3_t * inVertex
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Float3 *>(inVertex->obj)
  );
};

void JPC_VertexList_reserve(
  JPC_VertexList_t * self,
  unsigned long inSize
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_VertexList_resize(
  JPC_VertexList_t * self,
  unsigned long inSize
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_VertexList_clear(
  JPC_VertexList_t * self
) {
  VertexList * selfCpp = static_cast<VertexList *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

