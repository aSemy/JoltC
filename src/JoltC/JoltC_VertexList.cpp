#include "JoltC/JoltC_VertexList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VertexList_t * JoltC_VertexList_new(
  char** outErrMsg
) {
  try {
    JoltC_VertexList_t * cInstance = new JoltC_VertexList_t();
    VertexList * cppInstance = new VertexList();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

bool JoltC_VertexList_empty(
  JoltC_VertexList_t * self,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    bool result = selfCpp->empty();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_VertexList_size(
  JoltC_VertexList_t * self,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    long result = selfCpp->size();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Float3_t * JoltC_VertexList_at(
  JoltC_VertexList_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    Float3& resultRef = selfCpp->at(
    inIndex
    );
    Float3 * result = &resultRef;
    return reinterpret_cast<JoltC_Float3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VertexList_push_back(
  JoltC_VertexList_t * self,
  const JoltC_Float3_t * inVertex,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<Float3 *>(inVertex->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VertexList_reserve(
  JoltC_VertexList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    
    selfCpp->reserve(
    inSize
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VertexList_resize(
  JoltC_VertexList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    
    selfCpp->resize(
    inSize
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VertexList_clear(
  JoltC_VertexList_t * self,
  char** outErrMsg
) {
  try {
    VertexList * selfCpp = static_cast<VertexList *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

