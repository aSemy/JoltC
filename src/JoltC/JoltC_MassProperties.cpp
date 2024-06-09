#include "JoltC/JoltC_MassProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `MassProperties` instance.
 */
JoltC_MassProperties_t * JoltC_MassProperties_new() {
  JoltC_MassProperties_t * cInstance = new JoltC_MassProperties_t();
  MassProperties * cppInstance = new MassProperties();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_MassProperties_SetMassAndInertiaOfSolidBox(
  JoltC_MassProperties_t * self,
  JoltC_Vec3_t * inBoxSize,
  float inDensity
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  const Vec3 * inBoxSizeCpp = static_cast<const Vec3 *>(inBoxSize->obj);
  selfCpp->SetMassAndInertiaOfSolidBox(
    *inBoxSizeCpp,
    inDensity
  );
}

void JoltC_MassProperties_ScaleToMass(
  JoltC_MassProperties_t * self,
  float inMass
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->ScaleToMass(
    inMass
  );
}

JoltC_Vec3_t * JoltC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  JoltC_Vec3_t * inInertiaDiagonal
) {
  const Vec3 * inInertiaDiagonalCpp = static_cast<const Vec3 *>(inInertiaDiagonal->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = MassProperties::sGetEquivalentSolidBoxSize(
    inMass,
    *inInertiaDiagonalCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MassProperties_Rotate(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * inRotation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  const Mat44 * inRotationCpp = static_cast<const Mat44 *>(inRotation->obj);
  selfCpp->Rotate(
    *inRotationCpp
  );
}

void JoltC_MassProperties_Translate(
  JoltC_MassProperties_t * self,
  JoltC_Vec3_t * inTranslation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  selfCpp->Translate(
    *inTranslationCpp
  );
}

void JoltC_MassProperties_Scale(
  JoltC_MassProperties_t * self,
  JoltC_Vec3_t * inScale
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  selfCpp->Scale(
    *inScaleCpp
  );
}

//endregion

//region properties

float JoltC_MassProperties_mMass_Get(
  JoltC_MassProperties_t * self
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  return selfCpp->mMass;
}

void JoltC_MassProperties_mMass_Set(
  JoltC_MassProperties_t * self,
  float mMass
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mMass = mMass;
};

JoltC_Mat44_t * JoltC_MassProperties_mInertia_Get(
  JoltC_MassProperties_t * self
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->mInertia;
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MassProperties_mInertia_Set(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * mInertia
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mInertia = *static_cast<Mat44 *>(mInertia->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

