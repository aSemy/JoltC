#include "JoltC/JoltC_PointConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint1(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalSpacePoint1();
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

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint2(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalSpacePoint2();
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

JoltC_Vec3_t * JoltC_PointConstraint_GetTotalLambdaPosition(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_PointConstraint_GetBody1(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_PointConstraint_GetBody2(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody1Matrix(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody2Matrix(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

unsigned long JoltC_PointConstraint_GetRefCount(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

void JoltC_PointConstraint_AddRef(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PointConstraint_Release(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_PointConstraint_GetType(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_PointConstraint_GetSubType(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

unsigned long JoltC_PointConstraint_GetConstraintPriority(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

void JoltC_PointConstraint_SetConstraintPriority(
  JoltC_PointConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

void JoltC_PointConstraint_SetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

long JoltC_PointConstraint_GetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

void JoltC_PointConstraint_SetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

long JoltC_PointConstraint_GetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

void JoltC_PointConstraint_SetEnabled(
  JoltC_PointConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

bool JoltC_PointConstraint_GetEnabled(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

bool JoltC_PointConstraint_IsActive(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

unsigned long long int JoltC_PointConstraint_GetUserData(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
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

void JoltC_PointConstraint_SetUserData(
  JoltC_PointConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

void JoltC_PointConstraint_ResetWarmStart(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
) {
  try {
    PointConstraint * selfCpp = static_cast<PointConstraint *>(self->obj);
    
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

