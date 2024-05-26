#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettingsFace_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inMaterialIndex
);

//endregion

//region properties

size_t JoltC_SoftBodySharedSettingsFace_mVertex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * outValue
);

void JoltC_SoftBodySharedSettingsFace_mVertex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

unsigned long JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self
);

void JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long mMaterialIndex
);

//endregion


#ifdef __cplusplus
}
#endif

