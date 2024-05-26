#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterialList_t * JoltC_PhysicsMaterialList_new();

//endregion

//region functions

bool JoltC_PhysicsMaterialList_empty(
  JoltC_PhysicsMaterialList_t * self
);

long JoltC_PhysicsMaterialList_size(
  JoltC_PhysicsMaterialList_t * self
);

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterialList_at(
  JoltC_PhysicsMaterialList_t * self,
  long inIndex
);

void JoltC_PhysicsMaterialList_push_back(
  JoltC_PhysicsMaterialList_t * self,
  JoltC_PhysicsMaterial_t * inMaterial
);

void JoltC_PhysicsMaterialList_reserve(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
);

void JoltC_PhysicsMaterialList_resize(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
);

void JoltC_PhysicsMaterialList_clear(
  JoltC_PhysicsMaterialList_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

