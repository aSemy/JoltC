#include "JoltC/JoltC_DistanceConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_DistanceConstraint_SetDistance(
  JoltC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
    selfCpp->SetDistance(
    inMinDistance,
    inMaxDistance
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_DistanceConstraint_GetMinDistance(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    float result = selfCpp->GetMinDistance();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_DistanceConstraint_GetMaxDistance(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    float result = selfCpp->GetMaxDistance();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SpringSettings_t * JoltC_DistanceConstraint_GetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_SetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  const JoltC_SpringSettings_t * inSettings,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
    selfCpp->SetLimitsSpringSettings(
    *reinterpret_cast<SpringSettings *>(inSettings->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_DistanceConstraint_GetTotalLambdaPosition(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaPosition();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_DistanceConstraint_GetBody1(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_DistanceConstraint_GetBody2(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody1Matrix(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody2Matrix(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

unsigned long JoltC_DistanceConstraint_GetRefCount(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_AddRef(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_DistanceConstraint_Release(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_DistanceConstraint_GetType(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_DistanceConstraint_GetSubType(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

unsigned long JoltC_DistanceConstraint_GetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_SetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

void JoltC_DistanceConstraint_SetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

long JoltC_DistanceConstraint_GetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_SetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

long JoltC_DistanceConstraint_GetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_SetEnabled(
  JoltC_DistanceConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

bool JoltC_DistanceConstraint_GetEnabled(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

bool JoltC_DistanceConstraint_IsActive(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

unsigned long long int JoltC_DistanceConstraint_GetUserData(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
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

void JoltC_DistanceConstraint_SetUserData(
  JoltC_DistanceConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

void JoltC_DistanceConstraint_ResetWarmStart(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraint * selfCpp = static_cast<DistanceConstraint *>(self->obj);
    
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

