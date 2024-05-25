#include "JoltC/JoltC_CollisionGroup.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_0(
  char** outErrMsg
) {
  try {
    JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
    CollisionGroup * cppInstance = new CollisionGroup();
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

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_1(
  JoltC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID,
  char** outErrMsg
) {
  try {
    JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
    CollisionGroup * cppInstance = new CollisionGroup(
      reinterpret_cast<GroupFilter *>(inFilter->obj),
      inGroupID,
      inSubGroupID
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

void JoltC_CollisionGroup_SetGroupFilter(
  JoltC_CollisionGroup_t * self,
  JoltC_GroupFilter_t * inFilter,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    
    selfCpp->SetGroupFilter(
    reinterpret_cast<GroupFilter *>(inFilter->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_GroupFilter_t * JoltC_CollisionGroup_GetGroupFilter(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    const GroupFilter * result = selfCpp->GetGroupFilter();
    return reinterpret_cast<const JoltC_GroupFilter_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollisionGroup_SetGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inGroupID,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    
    selfCpp->SetGroupID(
    inGroupID
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_CollisionGroup_GetGroupID(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    unsigned long result = selfCpp->GetGroupID();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollisionGroup_SetSubGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inSubGroupID,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    
    selfCpp->SetSubGroupID(
    inSubGroupID
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_CollisionGroup_GetSubGroupID(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
) {
  try {
    CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
    unsigned long result = selfCpp->GetSubGroupID();
    return result;
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

