#include "JoltC/JPC_SoftBodyMotionProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_SoftBodySharedSettings_t * JPC_SoftBodyMotionProperties_GetSettings(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const SoftBodySharedSettings * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_SoftBodySharedSettings_t *>(result);
};

JPC_ArraySoftBodyVertex_t * JPC_SoftBodyMotionProperties_GetVertices(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  ArraySoftBodyVertex& resultRef = selfCpp->GetVertices();
  ArraySoftBodyVertex * result = &resultRef;
  return reinterpret_cast<JPC_ArraySoftBodyVertex_t *>(result);
};

JPC_SoftBodyVertex_t * JPC_SoftBodyMotionProperties_GetVertex(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  SoftBodyVertex& resultRef = selfCpp->GetVertex(
  inIndex
  );
  SoftBodyVertex * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodyVertex_t *>(result);
};

const JPC_PhysicsMaterialList_t * JPC_SoftBodyMotionProperties_GetMaterials(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const PhysicsMaterialList& resultRef = selfCpp->GetMaterials();
  const PhysicsMaterialList * result = &resultRef;
  return reinterpret_cast<const JPC_PhysicsMaterialList_t *>(result);
};

const JPC_ArraySoftBodySharedSettingsFace_t * JPC_SoftBodyMotionProperties_GetFaces(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const ArraySoftBodySharedSettingsFace& resultRef = selfCpp->GetFaces();
  const ArraySoftBodySharedSettingsFace * result = &resultRef;
  return reinterpret_cast<const JPC_ArraySoftBodySharedSettingsFace_t *>(result);
};

const JPC_SoftBodySharedSettingsFace_t * JPC_SoftBodyMotionProperties_GetFace(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const SoftBodySharedSettingsFace& resultRef = selfCpp->GetFace(
  inIndex
  );
  const SoftBodySharedSettingsFace * result = &resultRef;
  return reinterpret_cast<const JPC_SoftBodySharedSettingsFace_t *>(result);
};

unsigned long JPC_SoftBodyMotionProperties_GetNumIterations(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumIterations();
  return result;
};

void JPC_SoftBodyMotionProperties_SetNumIterations(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetNumIterations(
  inNumIterations
  );
};

float JPC_SoftBodyMotionProperties_GetPressure(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetPressure();
  return result;
};

void JPC_SoftBodyMotionProperties_SetPressure(
  JPC_SoftBodyMotionProperties_t * self,
  float inPressure
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetPressure(
  inPressure
  );
};

bool JPC_SoftBodyMotionProperties_GetUpdatePosition(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetUpdatePosition();
  return result;
};

void JPC_SoftBodyMotionProperties_SetUpdatePosition(
  JPC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetUpdatePosition(
  inUpdatePosition
  );
};

bool JPC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetEnableSkinConstraints();
  return result;
};

void JPC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JPC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetEnableSkinConstraints(
  inEnableSkinConstraints
  );
};

float JPC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetSkinnedMaxDistanceMultiplier();
  return result;
};

void JPC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JPC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetSkinnedMaxDistanceMultiplier(
  inSkinnedMaxDistanceMultiplier
  );
};

const JPC_AABox_t * JPC_SoftBodyMotionProperties_GetLocalBounds(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const AABox& resultRef = selfCpp->GetLocalBounds();
  const AABox * result = &resultRef;
  return reinterpret_cast<const JPC_AABox_t *>(result);
};

void JPC_SoftBodyMotionProperties_CustomUpdate(
  JPC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JPC_Body_t * ioSoftBody,
  JPC_PhysicsSystem_t * inSystem
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->CustomUpdate(
  inDeltaTime,
  *reinterpret_cast<Body *>(ioSoftBody->obj),
  *reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
};

void JPC_SoftBodyMotionProperties_SkinVertices(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_RMat44_t * inRootTransform,
  JPC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JPC_TempAllocator_t * ioTempAllocator
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SkinVertices(
  *reinterpret_cast<RMat44 *>(inRootTransform->obj),
  reinterpret_cast<Mat44MemRef *>(inJointMatrices->obj),
  inNumJoints,
  inHardSkinAll,
  *reinterpret_cast<TempAllocator *>(ioTempAllocator->obj)
  );
};

JPC_EMotionQuality JPC_SoftBodyMotionProperties_GetMotionQuality(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality();
  return static_cast<JPC_EMotionQuality>(static_cast<int>(result));
};

JPC_EAllowedDOFs JPC_SoftBodyMotionProperties_GetAllowedDOFs(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JPC_EAllowedDOFs>(static_cast<int>(result));
};

bool JPC_SoftBodyMotionProperties_GetAllowSleeping(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetLinearVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyMotionProperties_SetLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetLinearVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAngularVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyMotionProperties_SetAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetAngularVelocityClamped(
  *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JPC_SoftBodyMotionProperties_MoveKinematic(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  float inDeltaTime
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->MoveKinematic(
  *reinterpret_cast<Vec3 *>(inPosition->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  inDeltaTime
  );
};

float JPC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetMaxLinearVelocity();
  return result;
};

void JPC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetMaxLinearVelocity(
  inVelocity
  );
};

float JPC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetMaxAngularVelocity();
  return result;
};

void JPC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetMaxAngularVelocity(
  inVelocity
  );
};

void JPC_SoftBodyMotionProperties_ClampLinearVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->ClampLinearVelocity();
};

void JPC_SoftBodyMotionProperties_ClampAngularVelocity(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->ClampAngularVelocity();
};

float JPC_SoftBodyMotionProperties_GetLinearDamping(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetLinearDamping();
  return result;
};

void JPC_SoftBodyMotionProperties_SetLinearDamping(
  JPC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetLinearDamping(
  inDamping
  );
};

float JPC_SoftBodyMotionProperties_GetAngularDamping(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetAngularDamping();
  return result;
};

void JPC_SoftBodyMotionProperties_SetAngularDamping(
  JPC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetAngularDamping(
  inDamping
  );
};

float JPC_SoftBodyMotionProperties_GetGravityFactor(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetGravityFactor();
  return result;
};

void JPC_SoftBodyMotionProperties_SetGravityFactor(
  JPC_SoftBodyMotionProperties_t * self,
  float inFactor
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetGravityFactor(
  inFactor
  );
};

void JPC_SoftBodyMotionProperties_SetMassProperties(
  JPC_SoftBodyMotionProperties_t * self,
  JPC_EAllowedDOFs inAllowedDOFs,
  const JPC_MassProperties_t * inMassProperties
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetMassProperties(
  static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs)),
  *reinterpret_cast<MassProperties *>(inMassProperties->obj)
  );
};

float JPC_SoftBodyMotionProperties_GetInverseMass(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMass();
  return result;
};

float JPC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMassUnchecked();
  return result;
};

void JPC_SoftBodyMotionProperties_SetInverseMass(
  JPC_SoftBodyMotionProperties_t * self,
  float inInvM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetInverseMass(
  inInvM
  );
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetInverseInertiaDiagonal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Quat_t * JPC_SoftBodyMotionProperties_GetInertiaRotation(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Quat resultValue = selfCpp->GetInertiaRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SoftBodyMotionProperties_SetInverseInertia(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inInvI,
  const JPC_Quat_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetInverseInertia(
  *reinterpret_cast<Vec3 *>(inInvI->obj),
  *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JPC_Mat44_t * JPC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetLocalSpaceInverseInertia();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Mat44_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Mat44 resultValue = selfCpp->GetInverseInertiaForRotation(
  *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inPointRelativeToCOM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetPointVelocityCOM(
  *reinterpret_cast<Vec3 *>(inPointRelativeToCOM->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAccumulatedForce(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedForce();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 resultValue = selfCpp->GetAccumulatedTorque();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SoftBodyMotionProperties_ResetForce(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->ResetForce();
};

void JPC_SoftBodyMotionProperties_ResetTorque(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->ResetTorque();
};

void JPC_SoftBodyMotionProperties_ResetMotion(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->ResetMotion();
};

const JPC_Vec3_t * JPC_SoftBodyMotionProperties_LockTranslation(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockTranslation(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_SoftBodyMotionProperties_LockAngular(
  JPC_SoftBodyMotionProperties_t * self,
  const JPC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 resultValue = selfCpp->LockAngular(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

void JPC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

unsigned long JPC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JPC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

unsigned long JPC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JPC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

