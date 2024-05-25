#include "JoltC/JoltC_SixDOFConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SixDOFConstraint_SetTranslationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetTranslationLimits(
    *reinterpret_cast<Vec3 *>(inLimitMin->obj),
    *reinterpret_cast<Vec3 *>(inLimitMax->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SixDOFConstraint_SetRotationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetRotationLimits(
    *reinterpret_cast<Vec3 *>(inLimitMin->obj),
    *reinterpret_cast<Vec3 *>(inLimitMax->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SixDOFConstraint_GetLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    float result = selfCpp->GetLimitsMin(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
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

float JoltC_SixDOFConstraint_GetLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    float result = selfCpp->GetLimitsMax(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
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

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    const Vec3 resultValue = selfCpp->GetTranslationLimitsMin();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    const Vec3 resultValue = selfCpp->GetTranslationLimitsMax();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    const Vec3 resultValue = selfCpp->GetRotationLimitsMin();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    const Vec3 resultValue = selfCpp->GetRotationLimitsMax();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_SixDOFConstraint_IsFixedAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    bool result = selfCpp->IsFixedAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
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

bool JoltC_SixDOFConstraint_IsFreeAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    bool result = selfCpp->IsFreeAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
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

const JoltC_SpringSettings_t * JoltC_SixDOFConstraint_GetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    const SpringSettings& resultRef = selfCpp->GetLimitsSpringSettings(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
    );
    const SpringSettings * result = &resultRef;
    return reinterpret_cast<const JoltC_SpringSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SixDOFConstraint_SetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  const JoltC_SpringSettings_t * inLimitsSpringSettings,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetLimitsSpringSettings(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
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

void JoltC_SixDOFConstraint_SetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetMaxFriction(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
    inFriction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SixDOFConstraint_GetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    float result = selfCpp->GetMaxFriction(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
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

JoltC_Quat_t * JoltC_SixDOFConstraint_GetRotationInConstraintSpace(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_MotorSettings_t * JoltC_SixDOFConstraint_GetMotorSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    MotorSettings& resultRef = selfCpp->GetMotorSettings(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
    );
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

void JoltC_SixDOFConstraint_SetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_EMotorState inState,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetMotorState(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
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

JoltC_EMotorState JoltC_SixDOFConstraint_GetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    EMotorState result = selfCpp->GetMotorState(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
    );
    return static_cast<JoltC_EMotorState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTargetVelocityCS();
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

void JoltC_SixDOFConstraint_SetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetTargetVelocityCS(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inAngularVelocity,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTargetPositionCS();
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

void JoltC_SixDOFConstraint_SetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inPosition,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->SetTargetPositionCS(
    *reinterpret_cast<Vec3 *>(inPosition->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SixDOFConstraint_SetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

JoltC_Quat_t * JoltC_SixDOFConstraint_GetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_SetTargetOrientationBS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaPosition(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaRotation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTotalLambdaMotorTranslation();
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

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetTotalLambdaMotorRotation();
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

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody1(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody2(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

unsigned long JoltC_SixDOFConstraint_GetRefCount(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_AddRef(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SixDOFConstraint_Release(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_SixDOFConstraint_GetType(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_SixDOFConstraint_GetSubType(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

unsigned long JoltC_SixDOFConstraint_GetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_SetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

void JoltC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

long JoltC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_SetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

long JoltC_SixDOFConstraint_GetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_SetEnabled(
  JoltC_SixDOFConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

bool JoltC_SixDOFConstraint_GetEnabled(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

bool JoltC_SixDOFConstraint_IsActive(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

unsigned long long int JoltC_SixDOFConstraint_GetUserData(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
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

void JoltC_SixDOFConstraint_SetUserData(
  JoltC_SixDOFConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

void JoltC_SixDOFConstraint_ResetWarmStart(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
) {
  try {
    SixDOFConstraint * selfCpp = static_cast<SixDOFConstraint *>(self->obj);
    
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

