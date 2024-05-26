#include "JoltC/JoltC_ContactListener.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

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

