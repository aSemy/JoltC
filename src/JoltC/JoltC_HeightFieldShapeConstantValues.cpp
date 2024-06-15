#include "JoltC/JoltC_HeightFieldShapeConstantValues.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_HeightFieldShapeConstantValues_destroy(
  JoltC_HeightFieldShapeConstantValues_t * self
){
  if (self == NULL) return;
  delete static_cast<HeightFieldShapeConstantValues *>(self->obj);
  free(self);
}

//endregion
//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self
) {
  return HeightFieldShapeConstantValues::cNoCollisionValue;
}

//endregion


#ifdef __cplusplus
}
#endif
