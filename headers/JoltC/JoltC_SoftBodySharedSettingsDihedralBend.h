#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsDihedralBend_t * JPC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
);

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue
);

void JPC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JPC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self
);

void JPC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance
);

float JPC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self
);

void JPC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle
);

//endregion properties


#ifdef __cplusplus
}
#endif

