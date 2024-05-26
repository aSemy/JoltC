#include "JoltC/JoltC_SoftBodyVertexTraits.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodyVertexTraits_mPreviousPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mPreviousPositionOffset;
  return result;
};

unsigned long JoltC_SoftBodyVertexTraits_mPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mPositionOffset;
  return result;
};

unsigned long JoltC_SoftBodyVertexTraits_mVelocityOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mVelocityOffset;
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

