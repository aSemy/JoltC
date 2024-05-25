#include "JoltC/JoltC_TrackedVehicleController.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TrackedVehicleController_t * JoltC_TrackedVehicleController_new(
  const JoltC_TrackedVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    JoltC_TrackedVehicleController_t * cInstance = new JoltC_TrackedVehicleController_t();
    TrackedVehicleController * cppInstance = new TrackedVehicleController(
      *reinterpret_cast<TrackedVehicleControllerSettings *>(inSettings->obj),
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

void JoltC_TrackedVehicleController_SetDriverInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward,
  float inLeftRatio,
  float inRightRatio,
  float inBrake,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
    selfCpp->SetDriverInput(
    inForward,
    inLeftRatio,
    inRightRatio,
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

void JoltC_TrackedVehicleController_SetForwardInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
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

float JoltC_TrackedVehicleController_GetForwardInput(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
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

void JoltC_TrackedVehicleController_SetLeftRatio(
  JoltC_TrackedVehicleController_t * self,
  float inLeftRatio,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
    selfCpp->SetLeftRatio(
    inLeftRatio
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_TrackedVehicleController_GetLeftRatio(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    float result = selfCpp->GetLeftRatio();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TrackedVehicleController_SetRightRatio(
  JoltC_TrackedVehicleController_t * self,
  float inRightRatio,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
    selfCpp->SetRightRatio(
    inRightRatio
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_TrackedVehicleController_GetRightRatio(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    float result = selfCpp->GetRightRatio();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TrackedVehicleController_SetBrakeInput(
  JoltC_TrackedVehicleController_t * self,
  float inBrake,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
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

float JoltC_TrackedVehicleController_GetBrakeInput(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
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

JoltC_VehicleEngine_t * JoltC_TrackedVehicleController_GetEngine(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
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

JoltC_VehicleTransmission_t * JoltC_TrackedVehicleController_GetTransmission(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
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

size_t JoltC_TrackedVehicleController_GetTracks(
  JoltC_TrackedVehicleController_t * self,
  JoltC_VehicleTrack_t * * outValue,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    VehicleTrack * values = selfCpp->GetTracks();
    size_t resultSize = std::size(selfCpp->GetTracks());
    for (size_t i = 0; i < resultSize; ++i) {
      JoltC_VehicleTrack_t * element = new JoltC_VehicleTrack_t();
      element->obj = &(selfCpp->GetTracks()[i]);
      outValue[i] = element;
    };
    return resultSize;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_TrackedVehicleController_GetRefCount(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
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

void JoltC_TrackedVehicleController_AddRef(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TrackedVehicleController_Release(
  JoltC_TrackedVehicleController_t * self,
  char** outErrMsg
) {
  try {
    TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
    
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

