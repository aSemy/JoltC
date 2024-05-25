#include "JoltC/JoltC_TriangleList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TriangleList_t * JoltC_TriangleList_new(
  char** outErrMsg
) {
  try {
    JoltC_TriangleList_t * cInstance = new JoltC_TriangleList_t();
    TriangleList * cppInstance = new TriangleList();
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

bool JoltC_TriangleList_empty(
  JoltC_TriangleList_t * self,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
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

long JoltC_TriangleList_size(
  JoltC_TriangleList_t * self,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
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

JoltC_Triangle_t * JoltC_TriangleList_at(
  JoltC_TriangleList_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
    Triangle& resultRef = selfCpp->at(
    inIndex
    );
    Triangle * result = &resultRef;
    return reinterpret_cast<JoltC_Triangle_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TriangleList_push_back(
  JoltC_TriangleList_t * self,
  const JoltC_Triangle_t * inTriangle,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<Triangle *>(inTriangle->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TriangleList_reserve(
  JoltC_TriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
    
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

void JoltC_TriangleList_resize(
  JoltC_TriangleList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
    
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

void JoltC_TriangleList_clear(
  JoltC_TriangleList_t * self,
  char** outErrMsg
) {
  try {
    TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
    
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

