#include "JoltC/JoltC_TwoBodyConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody1(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody2(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

unsigned long JoltC_TwoBodyConstraint_GetRefCount(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

void JoltC_TwoBodyConstraint_AddRef(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TwoBodyConstraint_Release(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_TwoBodyConstraint_GetType(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_TwoBodyConstraint_GetSubType(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

unsigned long JoltC_TwoBodyConstraint_GetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

void JoltC_TwoBodyConstraint_SetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

void JoltC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

long JoltC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

void JoltC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

long JoltC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

void JoltC_TwoBodyConstraint_SetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

bool JoltC_TwoBodyConstraint_GetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

bool JoltC_TwoBodyConstraint_IsActive(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

unsigned long long int JoltC_TwoBodyConstraint_GetUserData(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
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

void JoltC_TwoBodyConstraint_SetUserData(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

void JoltC_TwoBodyConstraint_ResetWarmStart(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
    
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

