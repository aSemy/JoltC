#include "JoltC/JoltC_WheeledVehicleController.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_new(
  const JoltC_WheeledVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    JoltC_WheeledVehicleController_t * cInstance = new JoltC_WheeledVehicleController_t();
    WheeledVehicleController * cppInstance = new WheeledVehicleController(
      *reinterpret_cast<WheeledVehicleControllerSettings *>(inSettings->obj),
      *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
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

void JoltC_WheeledVehicleController_SetDriverInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetDriverInput(
    inForward,
    inRight,
    inBrake,
    inHandBrake
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_SetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetForwardInput(
    inForward
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetForwardInput();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_SetRightInput(
  JoltC_WheeledVehicleController_t * self,
  float inRight,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetRightInput(
    inRight
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetRightInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetRightInput();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_SetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inBrake,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetBrakeInput(
    inBrake
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetBrakeInput();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_SetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inHandBrake,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetHandBrakeInput(
    inHandBrake
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetHandBrakeInput();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_VehicleEngine_t * JoltC_WheeledVehicleController_GetEngine(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    VehicleEngine& resultRef = selfCpp->GetEngine();
    VehicleEngine * result = &resultRef;
    return reinterpret_cast<JoltC_VehicleEngine_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_VehicleTransmission_t * JoltC_WheeledVehicleController_GetTransmission(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    VehicleTransmission& resultRef = selfCpp->GetTransmission();
    VehicleTransmission * result = &resultRef;
    return reinterpret_cast<JoltC_VehicleTransmission_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleController_GetDifferentials(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    ArrayVehicleDifferentialSettings& resultRef = selfCpp->GetDifferentials();
    ArrayVehicleDifferentialSettings * result = &resultRef;
    return reinterpret_cast<JoltC_ArrayVehicleDifferentialSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetDifferentialLimitedSlipRatio();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  float inV,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->SetDifferentialLimitedSlipRatio(
    inV
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    float result = selfCpp->GetWheelSpeedAtClutch();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_WheeledVehicleController_GetRefCount(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
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

void JoltC_WheeledVehicleController_AddRef(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheeledVehicleController_Release(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
) {
  try {
    WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
    
    selfCpp->Release();
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

