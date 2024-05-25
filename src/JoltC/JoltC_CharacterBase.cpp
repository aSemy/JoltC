#include "JoltC/JPC_CharacterBase.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_CharacterBase_GetRefCount(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CharacterBase_AddRef(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CharacterBase_Release(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  
  selfCpp->Release();
};

void JPC_CharacterBase_SetMaxSlopeAngle(
  JPC_CharacterBase_t * self,
  float inMaxSlopeAngle
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  
  selfCpp->SetMaxSlopeAngle(
  inMaxSlopeAngle
  );
};

float JPC_CharacterBase_GetCosMaxSlopeAngle(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  float result = selfCpp->GetCosMaxSlopeAngle();
  return result;
};

void JPC_CharacterBase_SetUp(
  JPC_CharacterBase_t * self,
  const JPC_Vec3_t * inUp
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  
  selfCpp->SetUp(
  *reinterpret_cast<Vec3 *>(inUp->obj)
  );
};

JPC_Vec3_t * JPC_CharacterBase_GetUp(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 resultValue = selfCpp->GetUp();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_Shape_t * JPC_CharacterBase_GetShape(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

JPC_EGroundState JPC_CharacterBase_GetGroundState(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  EGroundState result = selfCpp->GetGroundState();
  return static_cast<JPC_EGroundState>(static_cast<int>(result));
};

bool JPC_CharacterBase_IsSlopeTooSteep(
  JPC_CharacterBase_t * self,
  JPC_Vec3_t * inNormal
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  bool result = selfCpp->IsSlopeTooSteep(
  *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
  return result;
};

bool JPC_CharacterBase_IsSupported(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  bool result = selfCpp->IsSupported();
  return result;
};

JPC_RVec3_t * JPC_CharacterBase_GetGroundPosition(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  RVec3 resultValue = selfCpp->GetGroundPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Vec3_t * JPC_CharacterBase_GetGroundNormal(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_CharacterBase_GetGroundVelocity(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  Vec3 resultValue = selfCpp->GetGroundVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_CharacterBase_GetGroundMaterial(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetGroundMaterial();
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_BodyID_t * JPC_CharacterBase_GetGroundBodyID(
  JPC_CharacterBase_t * self
) {
  CharacterBase * selfCpp = static_cast<CharacterBase *>(self->obj);
  BodyID resultValue = selfCpp->GetGroundBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

