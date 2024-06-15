#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyContactListener_destroy(
  JoltC_SoftBodyContactListener_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_SoftBodyContactListenerEm_t into JoltC_SoftBodyContactListener_t.
 */
JoltC_SoftBodyContactListener_t * JoltC_SoftBodyContactListener_From_SoftBodyContactListenerEm(
  JoltC_SoftBodyContactListenerEm_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif
