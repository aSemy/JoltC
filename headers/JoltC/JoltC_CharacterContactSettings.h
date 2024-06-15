#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterContactSettings_t * JoltC_CharacterContactSettings_new();

//endregion

//region destructor

void JoltC_CharacterContactSettings_destroy(
  JoltC_CharacterContactSettings_t * self
);

//endregion
//region properties

bool JoltC_CharacterContactSettings_mCanPushCharacter_Get(
  JoltC_CharacterContactSettings_t * self
);

void JoltC_CharacterContactSettings_mCanPushCharacter_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanPushCharacter
);

bool JoltC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JoltC_CharacterContactSettings_t * self
);

void JoltC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JoltC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses
);

//endregion


#ifdef __cplusplus
}
#endif
