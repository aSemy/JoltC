#include "JoltC/JoltC_ContactListener.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ContactListener_destroy(
  JoltC_ContactListener_t * self
){
  if (self == NULL) return;
  delete static_cast<ContactListener *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_ContactListenerEm_t into JoltC_ContactListener_t.
 */
JoltC_ContactListener_t * JoltC_ContactListener_From_ContactListenerEm(
  JoltC_ContactListenerEm_t * subtype
) {
  return (JoltC_ContactListener_t*) subtype;
};

//endregion


#ifdef __cplusplus
}
#endif
