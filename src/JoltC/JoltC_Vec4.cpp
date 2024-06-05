#include "JoltC/JoltC_Vec4.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec4_t * JoltC_Vec4_new_0() {
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_Vec4_t * JoltC_Vec4_new_1(
  JoltC_Vec4_t * inV
) {
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *reinterpret_cast<Vec4 *>(inV->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_Vec4_t * JoltC_Vec4_new_2(
  JoltC_Vec3_t * inV,
  float inW
) {
  JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *reinterpret_cast<Vec3 *>(inV->obj),
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

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

//region functions

float JoltC_Vec4_GetX(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JoltC_Vec4_GetY(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JoltC_Vec4_GetZ(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

float JoltC_Vec4_GetW(
  JoltC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetW();
  return result;
};

void JoltC_Vec4_SetX(
  JoltC_Vec4_t * self,
  float inX
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetX(
    inX
  );
};

void JoltC_Vec4_SetY(
  JoltC_Vec4_t * self,
  float inY
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetY(
    inY
  );
};

void JoltC_Vec4_SetZ(
  JoltC_Vec4_t * self,
  float inZ
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetZ(
    inZ
  );
};

void JoltC_Vec4_SetW(
  JoltC_Vec4_t * self,
  float inW
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  selfCpp->SetW(
    inW
  );
};

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
};

float JoltC_Vec4_GetComponent(
  JoltC_Vec4_t * self,
  unsigned long inCoordinate
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->operator[](
    inCoordinate
  );
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

