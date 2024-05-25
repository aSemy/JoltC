#include "JoltC/JoltC_IndexedTriangleList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangleList_t * JoltC_IndexedTriangleList_new(
  char** outErrMsg
) {
  try {
    JoltC_IndexedTriangleList_t * cInstance = new JoltC_IndexedTriangleList_t();
    IndexedTriangleList * cppInstance = new IndexedTriangleList();
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

bool JoltC_IndexedTriangleList_empty(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
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

long JoltC_IndexedTriangleList_size(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
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

JoltC_IndexedTriangle_t * JoltC_IndexedTriangleList_at(
  JoltC_IndexedTriangleList_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
    IndexedTriangle& resultRef = selfCpp->at(
    inIndex
    );
    IndexedTriangle * result = &resultRef;
    return reinterpret_cast<JoltC_IndexedTriangle_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_IndexedTriangleList_push_back(
  JoltC_IndexedTriangleList_t * self,
  const JoltC_IndexedTriangle_t * inTriangle,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<IndexedTriangle *>(inTriangle->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_IndexedTriangleList_reserve(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
    
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

void JoltC_IndexedTriangleList_resize(
  JoltC_IndexedTriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
    
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

void JoltC_IndexedTriangleList_clear(
  JoltC_IndexedTriangleList_t * self,
  char** outErrMsg
) {
  try {
    IndexedTriangleList * selfCpp = static_cast<IndexedTriangleList *>(self->obj);
    
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

