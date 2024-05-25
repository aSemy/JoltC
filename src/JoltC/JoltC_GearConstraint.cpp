#include "JoltC/JoltC_GearConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_GearConstraint_SetConstraints(
  JoltC_GearConstraint_t * self,
  const JoltC_Constraint_t * inGear1,
  const JoltC_Constraint_t * inGear2,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
    selfCpp->SetConstraints(
    reinterpret_cast<Constraint *>(inGear1->obj),
    reinterpret_cast<Constraint *>(inGear2->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_GearConstraint_GetTotalLambda(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_GearConstraint_GetBody1(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_GearConstraint_GetBody2(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody1Matrix(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody2Matrix(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

unsigned long JoltC_GearConstraint_GetRefCount(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

void JoltC_GearConstraint_AddRef(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GearConstraint_Release(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_GearConstraint_GetType(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_GearConstraint_GetSubType(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

unsigned long JoltC_GearConstraint_GetConstraintPriority(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

void JoltC_GearConstraint_SetConstraintPriority(
  JoltC_GearConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

void JoltC_GearConstraint_SetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

long JoltC_GearConstraint_GetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

void JoltC_GearConstraint_SetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

long JoltC_GearConstraint_GetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

void JoltC_GearConstraint_SetEnabled(
  JoltC_GearConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

bool JoltC_GearConstraint_GetEnabled(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

bool JoltC_GearConstraint_IsActive(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

unsigned long long int JoltC_GearConstraint_GetUserData(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
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

void JoltC_GearConstraint_SetUserData(
  JoltC_GearConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

void JoltC_GearConstraint_ResetWarmStart(
  JoltC_GearConstraint_t * self,
  char** outErrMsg
) {
  try {
    GearConstraint * selfCpp = static_cast<GearConstraint *>(self->obj);
    
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

