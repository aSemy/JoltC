#include "JoltC/JoltC_CharacterVirtual_ExtendedUpdateSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_ExtendedUpdateSettings_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_new() {
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * cInstance = new JoltC_CharacterVirtual_ExtendedUpdateSettings_t();
  CharacterVirtual::ExtendedUpdateSettings * cppInstance = new CharacterVirtual::ExtendedUpdateSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mStickToFloorStepDown;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mStickToFloorStepDown
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mStickToFloorStepDown = *reinterpret_cast<Vec3 *>(mStickToFloorStepDown->obj);
};

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWalkStairsStepUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepUp
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepUp = *reinterpret_cast<Vec3 *>(mWalkStairsStepUp->obj);
};

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsMinStepForward;
  return result;
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsMinStepForward = mWalkStairsMinStepForward;
};

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsStepForwardTest;
  return result;
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepForwardTest = mWalkStairsStepForwardTest;
};

float JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsCosAngleForwardContact;
  return result;
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsCosAngleForwardContact = mWalkStairsCosAngleForwardContact;
};

JoltC_Vec3_t * JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWalkStairsStepDownExtra;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JoltC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JoltC_Vec3_t * mWalkStairsStepDownExtra
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepDownExtra = *reinterpret_cast<Vec3 *>(mWalkStairsStepDownExtra->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

