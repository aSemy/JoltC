#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
);

//endregion

//region destructor

void JoltC_SoftBodySharedSettingsDihedralBend_destroy(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self
);

//endregion
//region properties

size_t JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue
);

void JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

float JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self
);

void JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance
);

float JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self
);

void JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle
);

//endregion


#ifdef __cplusplus
}
#endif
