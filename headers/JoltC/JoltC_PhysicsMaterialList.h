#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsMaterialList_t * JPC_PhysicsMaterialList_new();

//endregion constructors

//region functions

bool JPC_PhysicsMaterialList_empty(
  JPC_PhysicsMaterialList_t * self
);

long JPC_PhysicsMaterialList_size(
  JPC_PhysicsMaterialList_t * self
);

const JPC_PhysicsMaterial_t * JPC_PhysicsMaterialList_at(
  JPC_PhysicsMaterialList_t * self,
  long inIndex
);

void JPC_PhysicsMaterialList_push_back(
  JPC_PhysicsMaterialList_t * self,
  const JPC_PhysicsMaterial_t * inMaterial
);

void JPC_PhysicsMaterialList_reserve(
  JPC_PhysicsMaterialList_t * self,
  unsigned long inSize
);

void JPC_PhysicsMaterialList_resize(
  JPC_PhysicsMaterialList_t * self,
  unsigned long inSize
);

void JPC_PhysicsMaterialList_clear(
  JPC_PhysicsMaterialList_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

