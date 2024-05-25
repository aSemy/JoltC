#include "JoltC/JoltC_WheelWV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelWV_t * JoltC_WheelWV_new(
  const JoltC_WheelSettingsWV_t * inWheel,
  char** outErrMsg
) {
  try {
    JoltC_WheelWV_t * cInstance = new JoltC_WheelWV_t();
    WheelWV * cppInstance = new WheelWV(
      *reinterpret_cast<WheelSettingsWV *>(inWheel->obj)
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

const JoltC_WheelSettingsWV_t * JoltC_WheelWV_GetSettings_0(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
    const WheelSettingsWV * result = selfCpp->GetSettings();
    return reinterpret_cast<const JoltC_WheelSettingsWV_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_WheelSettings_t * JoltC_WheelWV_GetSettings_1(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_GetAngularVelocity(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

void JoltC_WheelWV_SetAngularVelocity(
  JoltC_WheelWV_t * self,
  float inVel,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
    
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

float JoltC_WheelWV_GetRotationAngle(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

void JoltC_WheelWV_SetRotationAngle(
  JoltC_WheelWV_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
    
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

float JoltC_WheelWV_GetSteerAngle(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

void JoltC_WheelWV_SetSteerAngle(
  JoltC_WheelWV_t * self,
  float inAngle,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
    
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

bool JoltC_WheelWV_HasContact(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_BodyID_t * JoltC_WheelWV_GetContactBodyID(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_RVec3_t * JoltC_WheelWV_GetContactPosition(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelWV_GetContactPointVelocity(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelWV_GetContactNormal(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelWV_GetContactLongitudinal(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

JoltC_Vec3_t * JoltC_WheelWV_GetContactLateral(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_GetSuspensionLength(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

bool JoltC_WheelWV_HasHitHardPoint(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_GetSuspensionLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_GetLongitudinalLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_GetLateralLambda(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  try {
    WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
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

float JoltC_WheelWV_mLongitudinalSlip_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLongitudinalSlip;
  return result;
};

void JoltC_WheelWV_mLongitudinalSlip_Set(
  JoltC_WheelWV_t * self,
  float mLongitudinalSlip,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLongitudinalSlip = mLongitudinalSlip;
};

float JoltC_WheelWV_mLateralSlip_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLateralSlip;
  return result;
};

void JoltC_WheelWV_mLateralSlip_Set(
  JoltC_WheelWV_t * self,
  float mLateralSlip,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLateralSlip = mLateralSlip;
};

float JoltC_WheelWV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JoltC_WheelWV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLongitudinalFriction,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JoltC_WheelWV_mCombinedLateralFriction_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JoltC_WheelWV_mCombinedLateralFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLateralFriction,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JoltC_WheelWV_mBrakeImpulse_Get(
  JoltC_WheelWV_t * self,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JoltC_WheelWV_mBrakeImpulse_Set(
  JoltC_WheelWV_t * self,
  float mBrakeImpulse,
  char** outErrMsg
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion properties

#ifdef __cplusplus
}
#endif

