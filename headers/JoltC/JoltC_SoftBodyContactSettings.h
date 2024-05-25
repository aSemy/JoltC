#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_SoftBodyContactSettings_mInvMassScale1_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyContactSettings_mInvMassScale1_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale1,
  char** outErrMsg
);

float JoltC_SoftBodyContactSettings_mInvMassScale2_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyContactSettings_mInvMassScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale2,
  char** outErrMsg
);

float JoltC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2,
  char** outErrMsg
);

bool JoltC_SoftBodyContactSettings_mIsSensor_Get(
  JoltC_SoftBodyContactSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyContactSettings_mIsSensor_Set(
  JoltC_SoftBodyContactSettings_t * self,
  bool mIsSensor,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

