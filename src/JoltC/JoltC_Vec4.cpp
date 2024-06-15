#include "JoltC/JoltC_Vec4.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Vec4` instance.
 */
JoltC_Vec4_t * JoltC_Vec4_new_0() {
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Vec4` instance.
 */
JoltC_Vec4_t * JoltC_Vec4_new_1(
  JoltC_Vec4_t * inV
) {
  const Vec4 * inVCpp = static_cast<const Vec4 *>(inV->obj);
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *inVCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Vec4` instance.
 */
JoltC_Vec4_t * JoltC_Vec4_new_2(
  JoltC_Vec3_t * inV,
  float inW
) {
  Vec3 * inVCpp = static_cast<Vec3 *>(inV->obj);
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *inVCpp,
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Vec4` instance.
 */
JoltC_Vec4_t * JoltC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW
) {
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    inX,
    inY,
    inZ,
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Vec4_destroy(
  JoltC_Vec4_t * self
){
  if (self == NULL) return;
  delete static_cast<Vec4 *>(self->obj);
  free(self);
}

//endregion
//region functions

float JoltC_Vec4_GetX(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  return selfCpp->GetX();
}

float JoltC_Vec4_GetY(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  return selfCpp->GetY();
}

float JoltC_Vec4_GetZ(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  return selfCpp->GetZ();
}

float JoltC_Vec4_GetW(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  return selfCpp->GetW();
}

void JoltC_Vec4_SetX(
  JoltC_Vec4_t * self,
  float inX
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetX(
    inX
  );
}

void JoltC_Vec4_SetY(
  JoltC_Vec4_t * self,
  float inY
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetY(
    inY
  );
}

void JoltC_Vec4_SetZ(
  JoltC_Vec4_t * self,
  float inZ
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetZ(
    inZ
  );
}

void JoltC_Vec4_SetW(
  JoltC_Vec4_t * self,
  float inW
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetW(
    inW
  );
}

void JoltC_Vec4_Set(
  JoltC_Vec4_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->Set(
    inX,
    inY,
    inZ,
    inW
  );
}

float JoltC_Vec4_GetComponent(
  JoltC_Vec4_t * self,
  unsigned long inCoordinate
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  return selfCpp->operator[](
    inCoordinate
  );
}

//endregion


#ifdef __cplusplus
}
#endif
