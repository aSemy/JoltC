#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JPC_SoftBodyContactSettings_mInvMassScale1_Get(
  JPC_SoftBodyContactSettings_t * self
);

void JPC_SoftBodyContactSettings_mInvMassScale1_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvMassScale1
);

float JPC_SoftBodyContactSettings_mInvMassScale2_Get(
  JPC_SoftBodyContactSettings_t * self
);

void JPC_SoftBodyContactSettings_mInvMassScale2_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvMassScale2
);

float JPC_SoftBodyContactSettings_mInvInertiaScale2_Get(
  JPC_SoftBodyContactSettings_t * self
);

void JPC_SoftBodyContactSettings_mInvInertiaScale2_Set(
  JPC_SoftBodyContactSettings_t * self,
  float mInvInertiaScale2
);

bool JPC_SoftBodyContactSettings_mIsSensor_Get(
  JPC_SoftBodyContactSettings_t * self
);

void JPC_SoftBodyContactSettings_mIsSensor_Set(
  JPC_SoftBodyContactSettings_t * self,
  bool mIsSensor
);

//endregion properties


#ifdef __cplusplus
}
#endif

