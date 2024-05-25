#include "JoltC/JoltC_SwingTwistConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalSpacePosition1();
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

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalSpacePosition2();
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

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Quat resultValue = selfCpp->GetConstraintToBody1();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Quat resultValue = selfCpp->GetConstraintToBody2();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetNormalHalfConeAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetNormalHalfConeAngle(
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

float JoltC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetPlaneHalfConeAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetPlaneHalfConeAngle(
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

float JoltC_SwingTwistConstraint_GetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetTwistMinAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTwistMinAngle(
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

float JoltC_SwingTwistConstraint_GetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetTwistMaxAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTwistMaxAngle(
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

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetSwingMotorSettings(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    MotorSettings& resultRef = selfCpp->GetSwingMotorSettings();
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

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetTwistMotorSettings(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    MotorSettings& resultRef = selfCpp->GetTwistMotorSettings();
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

void JoltC_SwingTwistConstraint_SetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  float inFrictionTorque,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

float JoltC_SwingTwistConstraint_GetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_SetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetSwingMotorState(
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

JoltC_EMotorState JoltC_SwingTwistConstraint_GetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    EMotorState result = selfCpp->GetSwingMotorState();
    return static_cast<JoltC_EMotorState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTwistMotorState(
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

JoltC_EMotorState JoltC_SwingTwistConstraint_GetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    EMotorState result = selfCpp->GetTwistMotorState();
    return static_cast<JoltC_EMotorState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Vec3_t * inAngularVelocity,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTargetAngularVelocityCS(
    *reinterpret_cast<Vec3 *>(inAngularVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTargetAngularVelocityCS();
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

void JoltC_SwingTwistConstraint_SetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTargetOrientationCS(
    *reinterpret_cast<Quat *>(inOrientation->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Quat resultValue = selfCpp->GetTargetOrientationCS();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_SetTargetOrientationBS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->SetTargetOrientationBS(
    *reinterpret_cast<Quat *>(inOrientation->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Quat resultValue = selfCpp->GetRotationInConstraintSpace();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaPosition(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

float JoltC_SwingTwistConstraint_GetTotalLambdaTwist(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaTwist();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaSwingY();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaSwingZ();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaMotor(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTotalLambdaMotor();
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

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

unsigned long JoltC_SwingTwistConstraint_GetRefCount(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_AddRef(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraint_Release(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_SwingTwistConstraint_GetType(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_SwingTwistConstraint_GetSubType(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

unsigned long JoltC_SwingTwistConstraint_GetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_SetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

void JoltC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

long JoltC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

long JoltC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_SetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

bool JoltC_SwingTwistConstraint_GetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

bool JoltC_SwingTwistConstraint_IsActive(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

unsigned long long int JoltC_SwingTwistConstraint_GetUserData(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
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

void JoltC_SwingTwistConstraint_SetUserData(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

void JoltC_SwingTwistConstraint_ResetWarmStart(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraint * selfCpp = static_cast<SwingTwistConstraint *>(self->obj);
    
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

