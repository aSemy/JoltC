#include "JoltC/JoltC_PulleyConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PulleyConstraint_SetLength(
  JoltC_PulleyConstraint_t * self,
  float inMinLength,
  float inMaxLength,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
    selfCpp->SetLength(
    inMinLength,
    inMaxLength
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PulleyConstraint_GetMinLength(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    float result = selfCpp->GetMinLength();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PulleyConstraint_GetMaxLength(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    float result = selfCpp->GetMaxLength();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_PulleyConstraint_GetCurrentLength(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    float result = selfCpp->GetCurrentLength();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Body_t * JoltC_PulleyConstraint_GetBody1(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

JoltC_Body_t * JoltC_PulleyConstraint_GetBody2(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody1Matrix(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody2Matrix(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

unsigned long JoltC_PulleyConstraint_GetRefCount(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

void JoltC_PulleyConstraint_AddRef(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PulleyConstraint_Release(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_PulleyConstraint_GetType(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_PulleyConstraint_GetSubType(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

unsigned long JoltC_PulleyConstraint_GetConstraintPriority(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

void JoltC_PulleyConstraint_SetConstraintPriority(
  JoltC_PulleyConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

void JoltC_PulleyConstraint_SetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

long JoltC_PulleyConstraint_GetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

void JoltC_PulleyConstraint_SetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

long JoltC_PulleyConstraint_GetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

void JoltC_PulleyConstraint_SetEnabled(
  JoltC_PulleyConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

bool JoltC_PulleyConstraint_GetEnabled(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

bool JoltC_PulleyConstraint_IsActive(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

unsigned long long int JoltC_PulleyConstraint_GetUserData(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
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

void JoltC_PulleyConstraint_SetUserData(
  JoltC_PulleyConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

void JoltC_PulleyConstraint_ResetWarmStart(
  JoltC_PulleyConstraint_t * self,
  char** outErrMsg
) {
  try {
    PulleyConstraint * selfCpp = static_cast<PulleyConstraint *>(self->obj);
    
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

