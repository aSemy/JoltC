#include "JoltC/JPC_Vec4.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vec4_t * JPC_Vec4_new_0() {
  JPC_Vec4_t * cInstance = new JPC_Vec4_t();
  Vec4 * cppInstance = new Vec4();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Vec4_t * JPC_Vec4_new_1(
  const JPC_Vec4_t * inV
) {
  JPC_Vec4_t * cInstance = new JPC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *reinterpret_cast<Vec4 *>(inV->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Vec4_t * JPC_Vec4_new_2(
  JPC_Vec3_t * inV,
  float inW
) {
  JPC_Vec4_t * cInstance = new JPC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    *reinterpret_cast<Vec3 *>(inV->obj),
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Vec4_t * JPC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW
) {
  JPC_Vec4_t * cInstance = new JPC_Vec4_t();
  Vec4 * cppInstance = new Vec4(
    inX,
    inY,
    inZ,
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_Vec4_GetX(
  JPC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JPC_Vec4_GetY(
  JPC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JPC_Vec4_GetZ(
  JPC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

float JPC_Vec4_GetW(
  JPC_Vec4_t * self
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->GetW();
  return result;
};

void JPC_Vec4_SetX(
  JPC_Vec4_t * self,
  float inX
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JPC_Vec4_SetY(
  JPC_Vec4_t * self,
  float inY
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JPC_Vec4_SetZ(
  JPC_Vec4_t * self,
  float inZ
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

void JPC_Vec4_SetW(
  JPC_Vec4_t * self,
  float inW
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  
  selfCpp->SetW(
  inW
  );
};

void JPC_Vec4_Set(
  JPC_Vec4_t * self,
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

float JPC_Vec4_GetComponent(
  JPC_Vec4_t * self,
  unsigned long inCoordinate
) {
  Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
  float result = selfCpp->operator[](
  inCoordinate
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

