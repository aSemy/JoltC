#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterialList_t * JoltC_PhysicsMaterialList_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_PhysicsMaterialList_empty(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
);

long JoltC_PhysicsMaterialList_size(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterialList_at(
  JoltC_PhysicsMaterialList_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_PhysicsMaterialList_push_back(
  JoltC_PhysicsMaterialList_t * self,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

void JoltC_PhysicsMaterialList_reserve(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_PhysicsMaterialList_resize(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_PhysicsMaterialList_clear(
  JoltC_PhysicsMaterialList_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

