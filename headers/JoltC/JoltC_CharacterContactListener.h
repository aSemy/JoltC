#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CharacterContactListenerEm_t into JoltC_CharacterContactListener_t.
 */
JoltC_CharacterContactListener_t * JoltC_CharacterContactListener_From_CharacterContactListenerEm(
  JoltC_CharacterContactListenerEm_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif

