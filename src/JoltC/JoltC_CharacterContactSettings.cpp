#include "JoltC/JoltC_CharacterContactSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterContactSettings_t * JoltC_CharacterContactSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_CharacterContactSettings_t * cInstance = new JoltC_CharacterContactSettings_t();
    CharacterContactSettings * cppInstance = new CharacterContactSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

bool JoltC_CharacterContactSettings_mCanPushCharacter_Get(
  JoltC_CharacterContactSettings_t * self,
  char** outErrMsg
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanPushCharacter;
  return result;
};

void JoltC_CharacterContactSettings_mCanPushCharacter_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanPushCharacter,
  char** outErrMsg
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanPushCharacter = mCanPushCharacter;
};

bool JoltC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JoltC_CharacterContactSettings_t * self,
  char** outErrMsg
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  bool result = selfCpp->mCanReceiveImpulses;
  return result;
};

void JoltC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses,
  char** outErrMsg
) {
  CharacterContactSettings * selfCpp = static_cast<CharacterContactSettings *>(self->obj);
  selfCpp->mCanReceiveImpulses = mCanReceiveImpulses;
};

//endregion properties

#ifdef __cplusplus
}
#endif

