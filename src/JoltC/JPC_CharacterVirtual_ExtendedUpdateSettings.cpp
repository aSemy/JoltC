#include "JoltC/JPC_CharacterVirtual_ExtendedUpdateSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtual_ExtendedUpdateSettings_t * JPC_CharacterVirtual_ExtendedUpdateSettings_new() {
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * cInstance = new JPC_CharacterVirtual_ExtendedUpdateSettings_t();
  CharacterVirtual::ExtendedUpdateSettings * cppInstance = new CharacterVirtual::ExtendedUpdateSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mStickToFloorStepDown;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mStickToFloorStepDown_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mStickToFloorStepDown
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mStickToFloorStepDown = *reinterpret_cast<Vec3 *>(mStickToFloorStepDown->obj);
};

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWalkStairsStepUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepUp_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mWalkStairsStepUp
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepUp = *reinterpret_cast<Vec3 *>(mWalkStairsStepUp->obj);
};

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsMinStepForward;
  return result;
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsMinStepForward_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsMinStepForward
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsMinStepForward = mWalkStairsMinStepForward;
};

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsStepForwardTest;
  return result;
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepForwardTest_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsStepForwardTest
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepForwardTest = mWalkStairsStepForwardTest;
};

float JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  float result = selfCpp->mWalkStairsCosAngleForwardContact;
  return result;
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsCosAngleForwardContact_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  float mWalkStairsCosAngleForwardContact
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsCosAngleForwardContact = mWalkStairsCosAngleForwardContact;
};

JPC_Vec3_t * JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Get(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWalkStairsStepDownExtra;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtual_ExtendedUpdateSettings_mWalkStairsStepDownExtra_Set(
  JPC_CharacterVirtual_ExtendedUpdateSettings_t * self,
  JPC_Vec3_t * mWalkStairsStepDownExtra
) {
  CharacterVirtual::ExtendedUpdateSettings * selfCpp = static_cast<CharacterVirtual::ExtendedUpdateSettings *>(self->obj);
  selfCpp->mWalkStairsStepDownExtra = *reinterpret_cast<Vec3 *>(mWalkStairsStepDownExtra->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

