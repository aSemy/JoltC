#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterContactSettings_t * JPC_CharacterContactSettings_new();

//endregion constructors

//region properties

bool JPC_CharacterContactSettings_mCanPushCharacter_Get(
  JPC_CharacterContactSettings_t * self
);

void JPC_CharacterContactSettings_mCanPushCharacter_Set(
  JPC_CharacterContactSettings_t * self,
  bool mCanPushCharacter
);

bool JPC_CharacterContactSettings_mCanReceiveImpulses_Get(
  JPC_CharacterContactSettings_t * self
);

void JPC_CharacterContactSettings_mCanReceiveImpulses_Set(
  JPC_CharacterContactSettings_t * self,
  bool mCanReceiveImpulses
);

//endregion properties


#ifdef __cplusplus
}
#endif

