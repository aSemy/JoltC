#include "JoltC/JPC_Float3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Float3_t * JPC_Float3_new(
  float inX,
  float inY,
  float inZ
) {
  JPC_Float3_t * cInstance = new JPC_Float3_t();
  Float3 * cppInstance = new Float3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_Float3_Equals(
  JPC_Float3_t * self,
  const JPC_Float3_t * inV
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<Float3 *>(inV->obj)
  );
  return result;
};

bool JPC_Float3_NotEquals(
  JPC_Float3_t * self,
  const JPC_Float3_t * inV
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<Float3 *>(inV->obj)
  );
  return result;
};

//endregion functions

//region properties

float JPC_Float3_x_Get(
  JPC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->x;
  return result;
};

void JPC_Float3_x_Set(
  JPC_Float3_t * self,
  float x
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->x = x;
};

float JPC_Float3_y_Get(
  JPC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->y;
  return result;
};

void JPC_Float3_y_Set(
  JPC_Float3_t * self,
  float y
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->y = y;
};

float JPC_Float3_z_Get(
  JPC_Float3_t * self
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->z;
  return result;
};

void JPC_Float3_z_Set(
  JPC_Float3_t * self,
  float z
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->z = z;
};

//endregion properties

#ifdef __cplusplus
}
#endif

