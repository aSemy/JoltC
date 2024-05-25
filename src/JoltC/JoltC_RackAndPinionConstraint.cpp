#include "JoltC/JoltC_RackAndPinionConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RackAndPinionConstraint_SetConstraints(
  JoltC_RackAndPinionConstraint_t * self,
  const JoltC_Constraint_t * inPinion,
  const JoltC_Constraint_t * inRack,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
    selfCpp->SetConstraints(
    reinterpret_cast<Constraint *>(inPinion->obj),
    reinterpret_cast<Constraint *>(inRack->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_RackAndPinionConstraint_GetTotalLambda(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambda();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody1(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    Body * result = selfCpp->GetBody1();
    return reinterpret_cast<JoltC_Body_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody2(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    Body * result = selfCpp->GetBody2();
    return reinterpret_cast<JoltC_Body_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    Mat44 resultValue = selfCpp->GetConstraintToBody1Matrix();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    Mat44 resultValue = selfCpp->GetConstraintToBody2Matrix();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_RackAndPinionConstraint_GetRefCount(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

void JoltC_RackAndPinionConstraint_AddRef(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RackAndPinionConstraint_Release(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_RackAndPinionConstraint_GetType(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_RackAndPinionConstraint_GetSubType(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

unsigned long JoltC_RackAndPinionConstraint_GetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

void JoltC_RackAndPinionConstraint_SetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

void JoltC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

long JoltC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

void JoltC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

long JoltC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

void JoltC_RackAndPinionConstraint_SetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

bool JoltC_RackAndPinionConstraint_GetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

bool JoltC_RackAndPinionConstraint_IsActive(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

unsigned long long int JoltC_RackAndPinionConstraint_GetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
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

void JoltC_RackAndPinionConstraint_SetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

void JoltC_RackAndPinionConstraint_ResetWarmStart(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
) {
  try {
    RackAndPinionConstraint * selfCpp = static_cast<RackAndPinionConstraint *>(self->obj);
    
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

