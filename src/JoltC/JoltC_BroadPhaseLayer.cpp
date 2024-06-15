#include "JoltC/JoltC_BroadPhaseLayer.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BroadPhaseLayer` instance.
 */
JoltC_BroadPhaseLayer_t * JoltC_BroadPhaseLayer_new(
  unsigned short inLayer
) {
  JoltC_BroadPhaseLayer_t * cInstance = new JoltC_BroadPhaseLayer_t();
  BroadPhaseLayer * cppInstance = new BroadPhaseLayer(
    inLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_BroadPhaseLayer_destroy(
  JoltC_BroadPhaseLayer_t * self
){
  if (self == NULL) return;
  delete static_cast<BroadPhaseLayer *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned short JoltC_BroadPhaseLayer_GetValue(
  JoltC_BroadPhaseLayer_t * self
) {
  BroadPhaseLayer * selfCpp = static_cast<BroadPhaseLayer *>(self->obj);
  return selfCpp->GetValue();
}

//endregion


#ifdef __cplusplus
}
#endif
