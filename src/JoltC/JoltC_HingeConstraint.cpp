#include "JoltC/JoltC_HingeConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_HingeConstraint_GetCurrentAngle(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    float result = selfCpp->GetCurrentAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HingeConstraint_SetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self,
  float inFrictionTorque,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
    selfCpp->SetMaxFrictionTorque(
    inFrictionTorque
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HingeConstraint_GetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    float result = selfCpp->GetMaxFrictionTorque();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MotorSettings_t * JoltC_HingeConstraint_GetMotorSettings(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetMotorState(
  JoltC_HingeConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

JoltC_EMotorState JoltC_HingeConstraint_GetMotorState(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self,
  float inAngularVelocity,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
    selfCpp->SetTargetAngularVelocity(
    inAngularVelocity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HingeConstraint_GetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    float result = selfCpp->GetTargetAngularVelocity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HingeConstraint_SetTargetAngle(
  JoltC_HingeConstraint_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
    selfCpp->SetTargetAngle(
    inAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HingeConstraint_GetTargetAngle(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    float result = selfCpp->GetTargetAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HingeConstraint_SetLimits(
  JoltC_HingeConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

float JoltC_HingeConstraint_GetLimitsMin(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

float JoltC_HingeConstraint_GetLimitsMax(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

bool JoltC_HingeConstraint_HasLimits(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_SpringSettings_t * JoltC_HingeConstraint_GetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self,
  const JoltC_SpringSettings_t * inLimitsSpringSettings,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_HingeConstraint_GetTotalLambdaPosition(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTotalLambdaPosition();
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

JoltC_Vector2_t * JoltC_HingeConstraint_GetTotalLambdaRotation(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    Vector2 resultValue = selfCpp->GetTotalLambdaRotation();
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

float JoltC_HingeConstraint_GetTotalLambdaRotationLimits(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaRotationLimits();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HingeConstraint_GetTotalLambdaMotor(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_HingeConstraint_GetBody1(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_HingeConstraint_GetBody2(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody1Matrix(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody2Matrix(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

unsigned long JoltC_HingeConstraint_GetRefCount(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_AddRef(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HingeConstraint_Release(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_HingeConstraint_GetType(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_HingeConstraint_GetSubType(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

unsigned long JoltC_HingeConstraint_GetConstraintPriority(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetConstraintPriority(
  JoltC_HingeConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

void JoltC_HingeConstraint_SetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

long JoltC_HingeConstraint_GetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

long JoltC_HingeConstraint_GetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetEnabled(
  JoltC_HingeConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

bool JoltC_HingeConstraint_GetEnabled(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

bool JoltC_HingeConstraint_IsActive(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

unsigned long long int JoltC_HingeConstraint_GetUserData(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
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

void JoltC_HingeConstraint_SetUserData(
  JoltC_HingeConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

void JoltC_HingeConstraint_ResetWarmStart(
  JoltC_HingeConstraint_t * self,
  char** outErrMsg
) {
  try {
    HingeConstraint * selfCpp = static_cast<HingeConstraint *>(self->obj);
    
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

