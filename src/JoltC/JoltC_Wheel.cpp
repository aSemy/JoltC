#include "JoltC/JoltC_Wheel.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Wheel_t * JoltC_Wheel_new(
  const JoltC_WheelSettings_t * inSettings,
  char** outErrMsg
) {
  try {
    JoltC_Wheel_t * cInstance = new JoltC_Wheel_t();
    Wheel * cppInstance = new Wheel(
      *reinterpret_cast<WheelSettings *>(inSettings->obj)
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

const JoltC_WheelSettings_t * JoltC_Wheel_GetSettings(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    const WheelSettings * result = selfCpp->GetSettings();
    return reinterpret_cast<const JoltC_WheelSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Wheel_GetAngularVelocity(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetAngularVelocity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Wheel_SetAngularVelocity(
  JoltC_Wheel_t * self,
  float inVel,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    
    selfCpp->SetAngularVelocity(
    inVel
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Wheel_GetRotationAngle(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetRotationAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Wheel_SetRotationAngle(
  JoltC_Wheel_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    
    selfCpp->SetRotationAngle(
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

float JoltC_Wheel_GetSteerAngle(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetSteerAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Wheel_SetSteerAngle(
  JoltC_Wheel_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    
    selfCpp->SetSteerAngle(
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

bool JoltC_Wheel_HasContact(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    bool result = selfCpp->HasContact();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyID_t * JoltC_Wheel_GetContactBodyID(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    BodyID resultValue = selfCpp->GetContactBodyID();
    BodyID* result = new BodyID(resultValue);
    return reinterpret_cast<JoltC_BodyID_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_Wheel_GetContactPosition(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    RVec3 resultValue = selfCpp->GetContactPosition();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Wheel_GetContactPointVelocity(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    Vec3 resultValue = selfCpp->GetContactPointVelocity();
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

JoltC_Vec3_t * JoltC_Wheel_GetContactNormal(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    Vec3 resultValue = selfCpp->GetContactNormal();
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

JoltC_Vec3_t * JoltC_Wheel_GetContactLongitudinal(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    Vec3 resultValue = selfCpp->GetContactLongitudinal();
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

JoltC_Vec3_t * JoltC_Wheel_GetContactLateral(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    Vec3 resultValue = selfCpp->GetContactLateral();
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

float JoltC_Wheel_GetSuspensionLength(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetSuspensionLength();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Wheel_HasHitHardPoint(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    bool result = selfCpp->HasHitHardPoint();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Wheel_GetSuspensionLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetSuspensionLambda();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Wheel_GetLongitudinalLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetLongitudinalLambda();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Wheel_GetLateralLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
) {
  try {
    Wheel * selfCpp = static_cast<Wheel *>(self->obj);
    float result = selfCpp->GetLateralLambda();
    return result;
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

