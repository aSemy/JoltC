#include "JoltC/JoltC_Constraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_Constraint_GetRefCount(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
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

void JoltC_Constraint_AddRef(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_Release(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_Constraint_GetType(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    EConstraintType result = selfCpp->GetType();
    return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintSubType JoltC_Constraint_GetSubType(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    EConstraintSubType result = selfCpp->GetSubType();
    return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_Constraint_GetConstraintPriority(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    unsigned long result = selfCpp->GetConstraintPriority();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_SetConstraintPriority(
  JoltC_Constraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->SetConstraintPriority(
    inPriority
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_SetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->SetNumVelocityStepsOverride(
    inN
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_Constraint_GetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    long result = selfCpp->GetNumVelocityStepsOverride();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_SetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->SetNumPositionStepsOverride(
    inN
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_Constraint_GetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    long result = selfCpp->GetNumPositionStepsOverride();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_SetEnabled(
  JoltC_Constraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->SetEnabled(
    inEnabled
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Constraint_GetEnabled(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    bool result = selfCpp->GetEnabled();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Constraint_IsActive(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    bool result = selfCpp->IsActive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long long int JoltC_Constraint_GetUserData(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    unsigned long long int result = selfCpp->GetUserData();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_SetUserData(
  JoltC_Constraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->SetUserData(
    inUserData
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Constraint_ResetWarmStart(
  JoltC_Constraint_t * self,
  char** outErrMsg
) {
  try {
    Constraint * selfCpp = static_cast<Constraint *>(self->obj);
    
    selfCpp->ResetWarmStart();
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

