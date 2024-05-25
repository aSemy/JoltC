#include "JoltC/JoltC_Skeleton.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Skeleton_t * JoltC_Skeleton_new(
  char** outErrMsg
) {
  try {
    JoltC_Skeleton_t * cInstance = new JoltC_Skeleton_t();
    Skeleton * cppInstance = new Skeleton();
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

long JoltC_Skeleton_AddJoint(
  JoltC_Skeleton_t * self,
  const JoltC_JPHString_t * inName,
  long inParentIndex,
  char** outErrMsg
) {
  try {
    Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
    long result = selfCpp->AddJoint(
    *reinterpret_cast<JPHString *>(inName->obj),
    inParentIndex
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

long JoltC_Skeleton_GetJointCount(
  JoltC_Skeleton_t * self,
  char** outErrMsg
) {
  try {
    Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
    long result = selfCpp->GetJointCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Skeleton_AreJointsCorrectlyOrdered(
  JoltC_Skeleton_t * self,
  char** outErrMsg
) {
  try {
    Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
    bool result = selfCpp->AreJointsCorrectlyOrdered();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Skeleton_CalculateParentJointIndices(
  JoltC_Skeleton_t * self,
  char** outErrMsg
) {
  try {
    Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
    
    selfCpp->CalculateParentJointIndices();
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

