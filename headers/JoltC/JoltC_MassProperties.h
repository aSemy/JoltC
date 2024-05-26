#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MassProperties_t * JoltC_MassProperties_new();

//endregion

//region functions

void JoltC_MassProperties_SetMassAndInertiaOfSolidBox(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inBoxSize,
  float inDensity
);

void JoltC_MassProperties_ScaleToMass(
  JoltC_MassProperties_t * self,
  float inMass
);

JoltC_Vec3_t * JoltC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  const JoltC_Vec3_t * inInertiaDiagonal
);

void JoltC_MassProperties_Rotate(
  JoltC_MassProperties_t * self,
  const JoltC_Mat44_t * inRotation
);

void JoltC_MassProperties_Translate(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inTranslation
);

void JoltC_MassProperties_Scale(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inScale
);

//endregion

//region properties

float JoltC_MassProperties_mMass_Get(
  JoltC_MassProperties_t * self
);

void JoltC_MassProperties_mMass_Set(
  JoltC_MassProperties_t * self,
  float mMass
);

JoltC_Mat44_t * JoltC_MassProperties_mInertia_Get(
  JoltC_MassProperties_t * self
);

void JoltC_MassProperties_mInertia_Set(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * mInertia
);

//endregion


#ifdef __cplusplus
}
#endif

