#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterial_new();

//endregion

//region functions

unsigned long JoltC_PhysicsMaterial_GetRefCount(
  JoltC_PhysicsMaterial_t * self
);

void JoltC_PhysicsMaterial_AddRef(
  JoltC_PhysicsMaterial_t * self
);

void JoltC_PhysicsMaterial_Release(
  JoltC_PhysicsMaterial_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

