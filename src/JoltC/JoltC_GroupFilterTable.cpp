#include "JoltC/JoltC_GroupFilterTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GroupFilterTable_t * JoltC_GroupFilterTable_new(
  unsigned long inNumGroups,
  char** outErrMsg
) {
  try {
    JoltC_GroupFilterTable_t * cInstance = new JoltC_GroupFilterTable_t();
    GroupFilterTable * cppInstance = new GroupFilterTable(
      inNumGroups
    );
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

void JoltC_GroupFilterTable_DisableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    
    selfCpp->DisableCollision(
    inSubGroup1,
    inSubGroup2
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GroupFilterTable_EnableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    
    selfCpp->EnableCollision(
    inSubGroup1,
    inSubGroup2
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_GroupFilterTable_IsCollisionEnabled(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    bool result = selfCpp->IsCollisionEnabled(
    inSubGroup1,
    inSubGroup2
    );
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_GroupFilterTable_GetRefCount(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GroupFilterTable_AddRef(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GroupFilterTable_Release(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
) {
  try {
    GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
    
    selfCpp->Release();
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

