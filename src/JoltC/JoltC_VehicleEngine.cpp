#include "JoltC/JoltC_VehicleEngine.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleEngine_ClampRPM(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  try {
    VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
    
    selfCpp->ClampRPM();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_VehicleEngine_GetCurrentRPM(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  try {
    VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
    float result = selfCpp->GetCurrentRPM();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleEngine_SetCurrentRPM(
  JoltC_VehicleEngine_t * self,
  float inRPM,
  char** outErrMsg
) {
  try {
    VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
    
    selfCpp->SetCurrentRPM(
    inRPM
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_VehicleEngine_GetAngularVelocity(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  try {
    VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
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

float JoltC_VehicleEngine_GetTorque(
  JoltC_VehicleEngine_t * self,
  float inAcceleration,
  char** outErrMsg
) {
  try {
    VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
    float result = selfCpp->GetTorque(
    inAcceleration
    );
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

float JoltC_VehicleEngine_mMaxTorque_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxTorque;
  return result;
};

void JoltC_VehicleEngine_mMaxTorque_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxTorque,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxTorque = mMaxTorque;
};

float JoltC_VehicleEngine_mMinRPM_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMinRPM;
  return result;
};

void JoltC_VehicleEngine_mMinRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMinRPM,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMinRPM = mMinRPM;
};

float JoltC_VehicleEngine_mMaxRPM_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mMaxRPM;
  return result;
};

void JoltC_VehicleEngine_mMaxRPM_Set(
  JoltC_VehicleEngine_t * self,
  float mMaxRPM,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mMaxRPM = mMaxRPM;
};

JoltC_LinearCurve_t * JoltC_VehicleEngine_mNormalizedTorque_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  LinearCurve resultValue = selfCpp->mNormalizedTorque;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JoltC_LinearCurve_t *>(result);
};

void JoltC_VehicleEngine_mNormalizedTorque_Set(
  JoltC_VehicleEngine_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mNormalizedTorque = *reinterpret_cast<LinearCurve *>(mNormalizedTorque->obj);
};

float JoltC_VehicleEngine_mInertia_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_VehicleEngine_mInertia_Set(
  JoltC_VehicleEngine_t * self,
  float mInertia,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_VehicleEngine_mAngularDamping_Get(
  JoltC_VehicleEngine_t * self,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_VehicleEngine_mAngularDamping_Set(
  JoltC_VehicleEngine_t * self,
  float mAngularDamping,
  char** outErrMsg
) {
  VehicleEngine * selfCpp = static_cast<VehicleEngine *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

