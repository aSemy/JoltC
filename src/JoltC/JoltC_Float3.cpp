#include "JoltC/JoltC_Float3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Float3` instance.
 */
JoltC_Float3_t * JoltC_Float3_new(
  float inX,
  float inY,
  float inZ
) {
  JoltC_Float3_t * cInstance = new JoltC_Float3_t();
  Float3 * cppInstance = new Float3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Float3_destroy(
  JoltC_Float3_t * self
){
  if (self == NULL) return;
  delete static_cast<Float3 *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_Float3_Equals(
  JoltC_Float3_t * self,
  JoltC_Float3_t * inV
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  const Float3 * inVCpp = static_cast<const Float3 *>(inV->obj);
  return selfCpp->operator==(
    *inVCpp
  );
}

bool JoltC_Float3_NotEquals(
  JoltC_Float3_t * self,
  JoltC_Float3_t * inV
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  const Float3 * inVCpp = static_cast<const Float3 *>(inV->obj);
  return selfCpp->operator!=(
    *inVCpp
  );
}

//endregion

//region properties

float JoltC_Float3_x_Get(
  JoltC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  return selfCpp->x;
}

void JoltC_Float3_x_Set(
  JoltC_Float3_t * self,
  float x
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->x = x;
}

float JoltC_Float3_y_Get(
  JoltC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  return selfCpp->y;
}

void JoltC_Float3_y_Set(
  JoltC_Float3_t * self,
  float y
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->y = y;
}

float JoltC_Float3_z_Get(
  JoltC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  return selfCpp->z;
}

void JoltC_Float3_z_Set(
  JoltC_Float3_t * self,
  float z
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->z = z;
}

//endregion


#ifdef __cplusplus
}
#endif
