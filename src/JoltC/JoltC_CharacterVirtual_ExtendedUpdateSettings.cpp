#include "JoltC/JoltC_CharacterVirtual_ExtendedUpdateSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CharacterVirtual::ExtendedUpdateSettings` instance.
 */
JoltC_CharacterVirtual_ExtendedUpdateSettings_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_new() {
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * cInstance = new JoltC_CharacterVirtual_ExtendedUpdateSettings_t();
  CharacterVirtual::ExtendedUpdateSettings * cppInstance = new CharacterVirtual::ExtendedUpdateSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CharacterVirtual_ExtendedUpdateSettings_destroy(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mStickToFloorStepDown;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mStickToFloorStepDown
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mStickToFloorStepDown = *static_cast<Vec3 *>(mStickToFloorStepDown->obj);
}

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWalkStairsStepUp;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepUp
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepUp = *static_cast<Vec3 *>(mWalkStairsStepUp->obj);
}

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  return selfCpp->mWalkStairsMinStepForward;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsMinStepForward = mWalkStairsMinStepForward;
}

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  return selfCpp->mWalkStairsStepForwardTest;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepForwardTest = mWalkStairsStepForwardTest;
}

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  return selfCpp->mWalkStairsCosAngleForwardContact;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsCosAngleForwardContact = mWalkStairsCosAngleForwardContact;
}

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWalkStairsStepDownExtra;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepDownExtra
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepDownExtra = *static_cast<Vec3 *>(mWalkStairsStepDownExtra->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
