#include "JoltC/JoltC_CharacterBase.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CharacterVirtual_t into JoltC_CharacterBase_t.
 */
JoltC_CharacterBase_t * JoltC_CharacterBase_From_CharacterVirtual(
  JoltC_CharacterVirtual_t * subtype
) {
  return (JoltC_CharacterBase_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_CharacterBase_GetRefCount(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_CharacterBase_AddRef(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_CharacterBase_Release(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  selfCpp->Release();
}

void JoltC_CharacterBase_SetMaxSlopeAngle(
  JoltC_CharacterBase_t * self,
  float inMaxSlopeAngle
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  selfCpp->SetMaxSlopeAngle(
    inMaxSlopeAngle
  );
}

float JoltC_CharacterBase_GetCosMaxSlopeAngle(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  return selfCpp->GetCosMaxSlopeAngle();
}

void JoltC_CharacterBase_SetUp(
  JoltC_CharacterBase_t * self,
  JoltC_Vec3_t * inUp
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  const Vec3 * inUpCpp = static_cast<const Vec3 *>(inUp->obj);
  selfCpp->SetUp(
    *inUpCpp
  );
}

JoltC_Vec3_t * JoltC_CharacterBase_GetUp(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetUp();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_CharacterBase_GetShape(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  const Shape * resultPtr = selfCpp->GetShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_EGroundState JoltC_CharacterBase_GetGroundState(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  EGroundState result = selfCpp->GetGroundState();
  return static_cast<JoltC_EGroundState>(static_cast<int>(result));
}

bool JoltC_CharacterBase_IsSlopeTooSteep(
  JoltC_CharacterBase_t * self,
  JoltC_Vec3_t * inNormal
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 * inNormalCpp = static_cast<Vec3 *>(inNormal->obj);
  return selfCpp->IsSlopeTooSteep(
    *inNormalCpp
  );
}

bool JoltC_CharacterBase_IsSupported(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  return selfCpp->IsSupported();
}

JoltC_RVec3_t * JoltC_CharacterBase_GetGroundPosition(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetGroundPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundNormal(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetGroundNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundVelocity(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetGroundVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_CharacterBase_GetGroundMaterial(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetGroundMaterial();
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_BodyID_t * JoltC_CharacterBase_GetGroundBodyID(
  JoltC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetGroundBodyID();
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

