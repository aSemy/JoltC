#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsMaterial_t * JPC_PhysicsMaterial_new();

//endregion constructors

//region functions

unsigned long JPC_PhysicsMaterial_GetRefCount(
  JPC_PhysicsMaterial_t * self
);

void JPC_PhysicsMaterial_AddRef(
  JPC_PhysicsMaterial_t * self
);

void JPC_PhysicsMaterial_Release(
  JPC_PhysicsMaterial_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

