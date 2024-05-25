#include "JoltC/JoltC_WheelTV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelTV_t * JoltC_WheelTV_new(
  const JoltC_WheelSettingsTV_t * inWheel,
  char** outErrMsg
) {
  try {
    JoltC_WheelTV_t * cInstance = new JoltC_WheelTV_t();
    WheelTV * cppInstance = new WheelTV(
      *reinterpret_cast<WheelSettingsTV *>(inWheel->obj)
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

const JoltC_WheelSettingsTV_t * JoltC_WheelTV_GetSettings_0(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
    const WheelSettingsTV * result = selfCpp->GetSettings();
    return reinterpret_cast<const JoltC_WheelSettingsTV_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_WheelSettings_t * JoltC_WheelTV_GetSettings_1(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

float JoltC_WheelTV_GetAngularVelocity(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

void JoltC_WheelTV_SetAngularVelocity(
  JoltC_WheelTV_t * self,
  float inVel,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
    
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

float JoltC_WheelTV_GetRotationAngle(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

void JoltC_WheelTV_SetRotationAngle(
  JoltC_WheelTV_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
    
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

float JoltC_WheelTV_GetSteerAngle(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

void JoltC_WheelTV_SetSteerAngle(
  JoltC_WheelTV_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
    
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

bool JoltC_WheelTV_HasContact(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_BodyID_t * JoltC_WheelTV_GetContactBodyID(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_RVec3_t * JoltC_WheelTV_GetContactPosition(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelTV_GetContactPointVelocity(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelTV_GetContactNormal(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelTV_GetContactLongitudinal(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelTV_GetContactLateral(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

float JoltC_WheelTV_GetSuspensionLength(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

bool JoltC_WheelTV_HasHitHardPoint(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

float JoltC_WheelTV_GetSuspensionLambda(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

float JoltC_WheelTV_GetLongitudinalLambda(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

float JoltC_WheelTV_GetLateralLambda(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  try {
    WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
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

//region properties

long JoltC_WheelTV_mTrackIndex_Get(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  long result = selfCpp->mTrackIndex;
  return result;
};

void JoltC_WheelTV_mTrackIndex_Set(
  JoltC_WheelTV_t * self,
  long mTrackIndex,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mTrackIndex = mTrackIndex;
};

float JoltC_WheelTV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JoltC_WheelTV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLongitudinalFriction,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JoltC_WheelTV_mCombinedLateralFriction_Get(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JoltC_WheelTV_mCombinedLateralFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLateralFriction,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JoltC_WheelTV_mBrakeImpulse_Get(
  JoltC_WheelTV_t * self,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JoltC_WheelTV_mBrakeImpulse_Set(
  JoltC_WheelTV_t * self,
  float mBrakeImpulse,
  char** outErrMsg
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion properties

#ifdef __cplusplus
}
#endif

