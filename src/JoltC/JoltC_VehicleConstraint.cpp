#include "JoltC/JoltC_VehicleConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraint_t * JoltC_VehicleConstraint_new(
  JoltC_Body_t * inVehicleBody,
  const JoltC_VehicleConstraintSettings_t * inSettings,
  char** outErrMsg
) {
  try {
    JoltC_VehicleConstraint_t * cInstance = new JoltC_VehicleConstraint_t();
    VehicleConstraint * cppInstance = new VehicleConstraint(
      *reinterpret_cast<Body *>(inVehicleBody->obj),
      *reinterpret_cast<VehicleConstraintSettings *>(inSettings->obj)
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

void JoltC_VehicleConstraint_SetMaxPitchRollAngle(
  JoltC_VehicleConstraint_t * self,
  float inMaxPitchRollAngle,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->SetMaxPitchRollAngle(
    inMaxPitchRollAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraint_SetVehicleCollisionTester(
  JoltC_VehicleConstraint_t * self,
  const JoltC_VehicleCollisionTester_t * inTester,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->SetVehicleCollisionTester(
    reinterpret_cast<VehicleCollisionTester *>(inTester->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalUp(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalUp();
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

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalForward(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetLocalForward();
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

JoltC_Vec3_t * JoltC_VehicleConstraint_GetWorldUp(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    Vec3 resultValue = selfCpp->GetWorldUp();
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

JoltC_Body_t * JoltC_VehicleConstraint_GetVehicleBody(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    Body * result = selfCpp->GetVehicleBody();
    return reinterpret_cast<JoltC_Body_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_VehicleController_t * JoltC_VehicleConstraint_GetController(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    VehicleController * result = selfCpp->GetController();
    return reinterpret_cast<JoltC_VehicleController_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Wheel_t * JoltC_VehicleConstraint_GetWheel(
  JoltC_VehicleConstraint_t * self,
  unsigned long inIdx,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    const Wheel * result = selfCpp->GetWheel(
    inIdx
    );
    return reinterpret_cast<const JoltC_Wheel_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_VehicleConstraint_GetWheelLocalTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    Mat44 resultValue = selfCpp->GetWheelLocalTransform(
    inWheelIndex,
    *reinterpret_cast<Vec3 *>(inWheelRight->obj),
    *reinterpret_cast<Vec3 *>(inWheelUp->obj)
    );
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

JoltC_RMat44_t * JoltC_VehicleConstraint_GetWheelWorldTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    RMat44 resultValue = selfCpp->GetWheelWorldTransform(
    inWheelIndex,
    *reinterpret_cast<Vec3 *>(inWheelRight->obj),
    *reinterpret_cast<Vec3 *>(inWheelUp->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->SetNumStepsBetweenCollisionTestActive(
    inSteps
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    const unsigned long result = selfCpp->GetNumStepsBetweenCollisionTestActive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->SetNumStepsBetweenCollisionTestInactive(
    inSteps
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    const unsigned long result = selfCpp->GetNumStepsBetweenCollisionTestInactive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_VehicleConstraint_GetRefCount(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

void JoltC_VehicleConstraint_AddRef(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleConstraint_Release(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EConstraintType JoltC_VehicleConstraint_GetType(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

JoltC_EConstraintSubType JoltC_VehicleConstraint_GetSubType(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

unsigned long JoltC_VehicleConstraint_GetConstraintPriority(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

void JoltC_VehicleConstraint_SetConstraintPriority(
  JoltC_VehicleConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

void JoltC_VehicleConstraint_SetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

long JoltC_VehicleConstraint_GetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

void JoltC_VehicleConstraint_SetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

long JoltC_VehicleConstraint_GetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

void JoltC_VehicleConstraint_SetEnabled(
  JoltC_VehicleConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

bool JoltC_VehicleConstraint_GetEnabled(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

bool JoltC_VehicleConstraint_IsActive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

unsigned long long int JoltC_VehicleConstraint_GetUserData(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
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

void JoltC_VehicleConstraint_SetUserData(
  JoltC_VehicleConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

void JoltC_VehicleConstraint_ResetWarmStart(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
) {
  try {
    VehicleConstraint * selfCpp = static_cast<VehicleConstraint *>(self->obj);
    
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

