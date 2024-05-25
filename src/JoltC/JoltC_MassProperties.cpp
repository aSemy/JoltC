#include "JoltC/JPC_MassProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MassProperties_t * JPC_MassProperties_new() {
  JPC_MassProperties_t * cInstance = new JPC_MassProperties_t();
  MassProperties * cppInstance = new MassProperties();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_MassProperties_SetMassAndInertiaOfSolidBox(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inBoxSize,
  float inDensity
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->SetMassAndInertiaOfSolidBox(
  *reinterpret_cast<Vec3 *>(inBoxSize->obj),
  inDensity
  );
};

void JPC_MassProperties_ScaleToMass(
  JPC_MassProperties_t * self,
  float inMass
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->ScaleToMass(
  inMass
  );
};

JPC_Vec3_t * JPC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  const JPC_Vec3_t * inInertiaDiagonal
) {
  Vec3 resultValue = MassProperties::sGetEquivalentSolidBoxSize(
  inMass,
  *reinterpret_cast<Vec3 *>(inInertiaDiagonal->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_MassProperties_Rotate(
  JPC_MassProperties_t * self,
  const JPC_Mat44_t * inRotation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Rotate(
  *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
};

void JPC_MassProperties_Translate(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inTranslation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Translate(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
};

void JPC_MassProperties_Scale(
  JPC_MassProperties_t * self,
  const JPC_Vec3_t * inScale
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Scale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

//endregion functions

//region properties

float JPC_MassProperties_mMass_Get(
  JPC_MassProperties_t * self
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

void JPC_MassProperties_mMass_Set(
  JPC_MassProperties_t * self,
  float mMass
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mMass = mMass;
};

JPC_Mat44_t * JPC_MassProperties_mInertia_Get(
  JPC_MassProperties_t * self
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  Mat44 resultValue = selfCpp->mInertia;
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_MassProperties_mInertia_Set(
  JPC_MassProperties_t * self,
  JPC_Mat44_t * mInertia
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mInertia = *reinterpret_cast<Mat44 *>(mInertia->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

