#include "JoltC/JPC_SoftBodyVertexTraits.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodyVertexTraits_mPreviousPositionOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mPreviousPositionOffset;
  return result;
};

unsigned long JPC_SoftBodyVertexTraits_mPositionOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mPositionOffset;
  return result;
};

unsigned long JPC_SoftBodyVertexTraits_mVelocityOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
) {
  unsigned long result = SoftBodyVertexTraits::mVelocityOffset;
  return result;
};

//endregion properties

#ifdef __cplusplus
}
#endif

