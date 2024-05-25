#include "JoltC/JoltC_PhysicsMaterialList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterialList_t * JoltC_PhysicsMaterialList_new(
  char** outErrMsg
) {
  try {
    JoltC_PhysicsMaterialList_t * cInstance = new JoltC_PhysicsMaterialList_t();
    PhysicsMaterialList * cppInstance = new PhysicsMaterialList();
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

bool JoltC_PhysicsMaterialList_empty(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
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

long JoltC_PhysicsMaterialList_size(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterialList_at(
  JoltC_PhysicsMaterialList_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
    const PhysicsMaterial * result = selfCpp->at(
    inIndex
    );
    return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsMaterialList_push_back(
  JoltC_PhysicsMaterialList_t * self,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
    
    selfCpp->push_back(
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsMaterialList_reserve(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
    
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

void JoltC_PhysicsMaterialList_resize(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
    
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

void JoltC_PhysicsMaterialList_clear(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
    
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

