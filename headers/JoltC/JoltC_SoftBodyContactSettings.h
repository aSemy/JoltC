#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyContactSettings_destroy(
  JoltC_SoftBodyContactSettings_t * self
);

//endregion
//region properties

float JoltC_SoftBodyContactSettings_mInvMassScale1_Get(
  JoltC_SoftBodyContactSettings_t * self
);

void JoltC_SoftBodyContactSettings_mInvMassScale1_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale1
);

float JoltC_SoftBodyContactSettings_mInvMassScale2_Get(
  JoltC_SoftBodyContactSettings_t * self
);

void JoltC_SoftBodyContactSettings_mInvMassScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvMassScale2
);

float JoltC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JoltC_SoftBodyContactSettings_t * self
);

void JoltC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JoltC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2
);

bool JoltC_SoftBodyContactSettings_mIsSensor_Get(
  JoltC_SoftBodyContactSettings_t * self
);

void JoltC_SoftBodyContactSettings_mIsSensor_Set(
  JoltC_SoftBodyContactSettings_t * self,
  bool mIsSensor
);

//endregion


#ifdef __cplusplus
}
#endif
