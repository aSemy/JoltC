#include "JoltC/JoltC_SoftBodyContactListener.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyContactListener_destroy(
  JoltC_SoftBodyContactListener_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyContactListener *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_SoftBodyContactListenerEm_t into JoltC_SoftBodyContactListener_t.
 */
JoltC_SoftBodyContactListener_t * JoltC_SoftBodyContactListener_From_SoftBodyContactListenerEm(
  JoltC_SoftBodyContactListenerEm_t * subtype
) {
  return (JoltC_SoftBodyContactListener_t*) subtype;
};

//endregion


#ifdef __cplusplus
}
#endif
