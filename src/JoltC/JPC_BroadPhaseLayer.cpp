#include "JoltC/JPC_BroadPhaseLayer.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BroadPhaseLayer_t * JPC_BroadPhaseLayer_new(
  unsigned short inLayer
) {
  JPC_BroadPhaseLayer_t * cInstance = new JPC_BroadPhaseLayer_t();
  BroadPhaseLayer * cppInstance = new BroadPhaseLayer(
    inLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned short JPC_BroadPhaseLayer_GetValue(
  JPC_BroadPhaseLayer_t * self
) {
  BroadPhaseLayer * selfCpp = static_cast<BroadPhaseLayer *>(self->obj);
  unsigned short result = selfCpp->GetValue();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

