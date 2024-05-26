#include "JoltC/JoltC_MassProperties.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  
  selfCpp->SetMassAndInertiaOfSolidBox(
    *reinterpret_cast<Vec3 *>(inBoxSize->obj),
    inDensity
  );
};

void JoltC_MassProperties_ScaleToMass(
  JoltC_MassProperties_t * self,
  float inMass
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->ScaleToMass(
    inMass
  );
};

JoltC_Vec3_t * JoltC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  JoltC_Vec3_t * inInertiaDiagonal
) {
  static Vec3 resultValue = MassProperties::sGetEquivalentSolidBoxSize(
    inMass,
    *reinterpret_cast<Vec3 *>(inInertiaDiagonal->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_MassProperties_Rotate(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * inRotation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Rotate(
    *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
};

void JoltC_MassProperties_Translate(
  JoltC_MassProperties_t * self,
  JoltC_Vec3_t * inTranslation
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Translate(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
};

void JoltC_MassProperties_Scale(
  JoltC_MassProperties_t * self,
  JoltC_Vec3_t * inScale
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  
  selfCpp->Scale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
};

//endregion

//region properties

float JoltC_MassProperties_mMass_Get(
  JoltC_MassProperties_t * self
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

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
  static Mat44 resultValue = selfCpp->mInertia;
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_MassProperties_mInertia_Set(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * mInertia
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mInertia = *reinterpret_cast<Mat44 *>(mInertia->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

