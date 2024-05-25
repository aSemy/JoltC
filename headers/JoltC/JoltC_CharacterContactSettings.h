#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterContactSettings_t * JoltC_CharacterContactSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

bool JoltC_CharacterContactSettings_mCanPushCharacter_Get(
  JoltC_CharacterContactSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterContactSettings_mCanPushCharacter_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanPushCharacter,
  char** outErrMsg
);

bool JoltC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JoltC_CharacterContactSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

