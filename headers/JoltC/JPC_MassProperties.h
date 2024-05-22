#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MassProperties_t * JPC_MassProperties_new();

//endregion constructors

//region functions

void JPC_MassProperties_SetMassAndInertiaOfSolidBox(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inBoxSize,
  float inDensity
);

void JPC_MassProperties_ScaleToMass(
  JPC_MassProperties_t * self,
  float inMass
);

JPC_Vec3_t * JPC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  const JPC_Vec3_t * inInertiaDiagonal
);

void JPC_MassProperties_Rotate(
  JPC_MassProperties_t * self,
  const JPC_Mat44_t * inRotation
);

void JPC_MassProperties_Translate(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inTranslation
);

void JPC_MassProperties_Scale(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inScale
);

//endregion functions

//region properties

float JPC_MassProperties_mMass_Get(
  JPC_MassProperties_t * self
);

void JPC_MassProperties_mMass_Set(
  JPC_MassProperties_t * self,
  float mMass
);

JPC_Mat44_t * JPC_MassProperties_mInertia_Get(
  JPC_MassProperties_t * self
);

void JPC_MassProperties_mInertia_Set(
  JPC_MassProperties_t * self,
  JPC_Mat44_t * mInertia
);

//endregion properties


#ifdef __cplusplus
}
#endif

