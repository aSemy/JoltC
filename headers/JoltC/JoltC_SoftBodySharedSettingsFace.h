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
  unsigned long inMaterialIndex,
  char** outErrMsg
);

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsFace_mVertex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * outValue,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsFace_mVertex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
);

unsigned long JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self,
  char** outErrMsg
);

void JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long mMaterialIndex,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

