#include "JoltC/JoltC_CharacterContactSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterContactSettings_t * JoltC_CharacterContactSettings_new() {
  JoltC_CharacterContactSettings_t * cInstance = new JoltC_CharacterContactSettings_t();
  CharacterContactSettings * cppInstance = new CharacterContactSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

bool JoltC_CharacterContactSettings_mCanPushCharacter_Get(
  JoltC_CharacterContactSettings_t * self
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanPushCharacter;
  return result;
};

void JoltC_CharacterContactSettings_mCanPushCharacter_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanPushCharacter
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanPushCharacter = mCanPushCharacter;
};

bool JoltC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JoltC_CharacterContactSettings_t * self
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanReceiveImpulses;
  return result;
};

void JoltC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanReceiveImpulses = mCanReceiveImpulses;
};

//endregion

#ifdef __cplusplus
}
#endif

