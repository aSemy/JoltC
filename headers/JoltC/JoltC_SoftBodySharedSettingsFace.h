#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsFace_t * JPC_SoftBodySharedSettingsFace_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inMaterialIndex
);

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsFace_mVertex_Get(
  JPC_SoftBodySharedSettingsFace_t * self,
  unsigned long * outValue
);

void JPC_SoftBodySharedSettingsFace_mVertex_Set(
  JPC_SoftBodySharedSettingsFace_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
);

unsigned long JPC_SoftBodySharedSettingsFace_mMaterialIndex_Get(
  JPC_SoftBodySharedSettingsFace_t * self
);

void JPC_SoftBodySharedSettingsFace_mMaterialIndex_Set(
  JPC_SoftBodySharedSettingsFace_t * self,
  unsigned long mMaterialIndex
);

//endregion properties


#ifdef __cplusplus
}
#endif

