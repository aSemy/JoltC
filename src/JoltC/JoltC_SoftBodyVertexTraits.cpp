#include "JoltC/JoltC_SoftBodyVertexTraits.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyVertexTraits_destroy(
  JoltC_SoftBodyVertexTraits_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyVertexTraits *>(self->obj);
  free(self);
}

//endregion
//region properties

unsigned long JoltC_SoftBodyVertexTraits_mPreviousPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  return SoftBodyVertexTraits::mPreviousPositionOffset;
}

unsigned long JoltC_SoftBodyVertexTraits_mPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  return SoftBodyVertexTraits::mPositionOffset;
}

unsigned long JoltC_SoftBodyVertexTraits_mVelocityOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  return SoftBodyVertexTraits::mVelocityOffset;
}

//endregion


#ifdef __cplusplus
}
#endif
