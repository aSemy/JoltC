#include "JoltC/JoltC_PathConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PathConstraint_SetPath(
  JoltC_PathConstraint_t * self,
  const JoltC_PathConstraintPath_t * inPath,
  float inPathFraction,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->SetPath(
    reinterpret_cast<PathConstraintPath *>(inPath->obj),
    inPathFraction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_PathConstraintPath_t * JoltC_PathConstraint_GetPath(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    const PathConstraintPath * result = selfCpp->GetPath();
    return reinterpret_cast<const JoltC_PathConstraintPath_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PathConstraint_GetPathFraction(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    float result = selfCpp->GetPathFraction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraint_SetMaxFrictionForce(
  JoltC_PathConstraint_t * self,
  float inFrictionForce,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->SetMaxFrictionForce(
    inFrictionForce
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PathConstraint_GetMaxFrictionForce(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    float result = selfCpp->GetMaxFrictionForce();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MotorSettings_t * JoltC_PathConstraint_GetPositionMotorSettings(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    MotorSettings& resultRef = selfCpp->GetPositionMotorSettings();
    MotorSettings * result = &resultRef;
    return reinterpret_cast<JoltC_MotorSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraint_SetPositionMotorState(
  JoltC_PathConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->SetPositionMotorState(
    static_cast<EMotorState>(static_cast<int>(inState))
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EMotorState JoltC_PathConstraint_GetPositionMotorState(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    EMotorState result = selfCpp->GetPositionMotorState();
    return static_cast<JoltC_EMotorState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraint_SetTargetVelocity(
  JoltC_PathConstraint_t * self,
  float inVelocity,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->SetTargetVelocity(
    inVelocity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PathConstraint_GetTargetVelocity(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    float result = selfCpp->GetTargetVelocity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraint_SetTargetPathFraction(
  JoltC_PathConstraint_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->SetTargetPathFraction(
    inFraction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PathConstraint_GetTargetPathFraction(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    float result = selfCpp->GetTargetPathFraction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_PathConstraint_GetBody1(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_PathConstraint_GetBody2(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody1Matrix(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody2Matrix(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

unsigned long JoltC_PathConstraint_GetRefCount(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

void JoltC_PathConstraint_AddRef(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraint_Release(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_PathConstraint_GetType(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_PathConstraint_GetSubType(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

unsigned long JoltC_PathConstraint_GetConstraintPriority(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

void JoltC_PathConstraint_SetConstraintPriority(
  JoltC_PathConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

void JoltC_PathConstraint_SetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

long JoltC_PathConstraint_GetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

void JoltC_PathConstraint_SetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

long JoltC_PathConstraint_GetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

void JoltC_PathConstraint_SetEnabled(
  JoltC_PathConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

bool JoltC_PathConstraint_GetEnabled(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

bool JoltC_PathConstraint_IsActive(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

unsigned long long int JoltC_PathConstraint_GetUserData(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
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

void JoltC_PathConstraint_SetUserData(
  JoltC_PathConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

void JoltC_PathConstraint_ResetWarmStart(
  JoltC_PathConstraint_t * self,
  char** outErrMsg
) {
  try {
    PathConstraint * selfCpp = static_cast<PathConstraint *>(self->obj);
    
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

