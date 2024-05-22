#include "JoltC/JPC_CharacterContactSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterContactSettings_t * JPC_CharacterContactSettings_new() {
  JPC_CharacterContactSettings_t * cInstance = new JPC_CharacterContactSettings_t();
  CharacterContactSettings * cppInstance = new CharacterContactSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

bool JPC_CharacterContactSettings_mCanPushCharacter_Get(
  JPC_CharacterContactSettings_t * self
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanPushCharacter;
  return result;
};

void JPC_CharacterContactSettings_mCanPushCharacter_Set(
  JPC_CharacterContactSettings_t * self,
  bool mCanPushCharacter
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanPushCharacter = mCanPushCharacter;
};

bool JPC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JPC_CharacterContactSettings_t * self
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanReceiveImpulses;
  return result;
};

void JPC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JPC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanReceiveImpulses = mCanReceiveImpulses;
};

//endregion properties

#ifdef __cplusplus
}
#endif

