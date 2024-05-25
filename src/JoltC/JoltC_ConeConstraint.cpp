#include "JoltC/JoltC_ConeConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_ConeConstraint_SetHalfConeAngle(
  JoltC_ConeConstraint_t * self,
  float inHalfConeAngle,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
    selfCpp->SetHalfConeAngle(
    inHalfConeAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_ConeConstraint_GetCosHalfConeAngle(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    float result = selfCpp->GetCosHalfConeAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_ConeConstraint_GetTotalLambdaPosition(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

float JoltC_ConeConstraint_GetTotalLambdaRotation(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    float result = selfCpp->GetTotalLambdaRotation();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_ConeConstraint_GetBody1(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_ConeConstraint_GetBody2(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody1Matrix(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody2Matrix(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

unsigned long JoltC_ConeConstraint_GetRefCount(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

void JoltC_ConeConstraint_AddRef(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConeConstraint_Release(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_ConeConstraint_GetType(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_ConeConstraint_GetSubType(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

unsigned long JoltC_ConeConstraint_GetConstraintPriority(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

void JoltC_ConeConstraint_SetConstraintPriority(
  JoltC_ConeConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

void JoltC_ConeConstraint_SetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

long JoltC_ConeConstraint_GetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

void JoltC_ConeConstraint_SetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

long JoltC_ConeConstraint_GetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

void JoltC_ConeConstraint_SetEnabled(
  JoltC_ConeConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

bool JoltC_ConeConstraint_GetEnabled(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

bool JoltC_ConeConstraint_IsActive(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

unsigned long long int JoltC_ConeConstraint_GetUserData(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
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

void JoltC_ConeConstraint_SetUserData(
  JoltC_ConeConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

void JoltC_ConeConstraint_ResetWarmStart(
  JoltC_ConeConstraint_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraint * selfCpp = static_cast<ConeConstraint *>(self->obj);
    
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

