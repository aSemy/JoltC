#include "JoltC/JoltC_SliderConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_SliderConstraint_GetCurrentPosition(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetCurrentPosition();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SliderConstraint_SetMaxFrictionForce(
  JoltC_SliderConstraint_t * self,
  float inFrictionForce,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

float JoltC_SliderConstraint_GetMaxFrictionForce(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

JoltC_MotorSettings_t * JoltC_SliderConstraint_GetMotorSettings(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    MotorSettings& resultRef = selfCpp->GetMotorSettings();
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

void JoltC_SliderConstraint_SetMotorState(
  JoltC_SliderConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->SetMotorState(
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

JoltC_EMotorState JoltC_SliderConstraint_GetMotorState(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    EMotorState result = selfCpp->GetMotorState();
    return static_cast<JoltC_EMotorState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SliderConstraint_SetTargetVelocity(
  JoltC_SliderConstraint_t * self,
  float inVelocity,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

float JoltC_SliderConstraint_GetTargetVelocity(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_SetTargetPosition(
  JoltC_SliderConstraint_t * self,
  float inPosition,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->SetTargetPosition(
    inPosition
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SliderConstraint_GetTargetPosition(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetTargetPosition();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SliderConstraint_SetLimits(
  JoltC_SliderConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->SetLimits(
    inLimitsMin,
    inLimitsMax
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SliderConstraint_GetLimitsMin(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetLimitsMin();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SliderConstraint_GetLimitsMax(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetLimitsMax();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_SliderConstraint_HasLimits(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    bool result = selfCpp->HasLimits();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SpringSettings_t * JoltC_SliderConstraint_GetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings();
    SpringSettings * result = &resultRef;
    return reinterpret_cast<JoltC_SpringSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SliderConstraint_SetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self,
  const JoltC_SpringSettings_t * inLimitsSpringSettings,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->SetLimitsSpringSettings(
    *reinterpret_cast<SpringSettings *>(inLimitsSpringSettings->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vector2_t * JoltC_SliderConstraint_GetTotalLambdaPosition(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    Vector2 resultValue = selfCpp->GetTotalLambdaPosition();
    Vector2* result = new Vector2(resultValue);
    return reinterpret_cast<JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SliderConstraint_GetTotalLambdaPositionLimits(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaPositionLimits();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SliderConstraint_GetTotalLambdaRotation(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTotalLambdaRotation();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SliderConstraint_GetTotalLambdaMotor(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaMotor();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_SliderConstraint_GetBody1(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_SliderConstraint_GetBody2(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody1Matrix(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody2Matrix(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

unsigned long JoltC_SliderConstraint_GetRefCount(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_AddRef(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SliderConstraint_Release(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_SliderConstraint_GetType(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_SliderConstraint_GetSubType(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

unsigned long JoltC_SliderConstraint_GetConstraintPriority(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_SetConstraintPriority(
  JoltC_SliderConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

void JoltC_SliderConstraint_SetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

long JoltC_SliderConstraint_GetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_SetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

long JoltC_SliderConstraint_GetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_SetEnabled(
  JoltC_SliderConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

bool JoltC_SliderConstraint_GetEnabled(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

bool JoltC_SliderConstraint_IsActive(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

unsigned long long int JoltC_SliderConstraint_GetUserData(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
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

void JoltC_SliderConstraint_SetUserData(
  JoltC_SliderConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

void JoltC_SliderConstraint_ResetWarmStart(
  JoltC_SliderConstraint_t * self,
  char** outErrMsg
) {
  try {
    SliderConstraint * selfCpp = static_cast<SliderConstraint *>(self->obj);
    
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

