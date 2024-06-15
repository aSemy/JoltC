#include "JoltC/JoltC_SoftBodyMotionProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SoftBodyMotionProperties_destroy(
  JoltC_SoftBodyMotionProperties_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyMotionProperties *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodyMotionProperties_GetSettings(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const SoftBodySharedSettings * resultPtr = selfCpp->GetSettings();
  JoltC_SoftBodySharedSettings_t * result = new JoltC_SoftBodySharedSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertices(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  ArraySoftBodyVertex* resultRef = &selfCpp->GetVertices();
  JoltC_ArraySoftBodyVertex_t* result = new JoltC_ArraySoftBodyVertex_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_SoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertex(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  SoftBodyVertex* resultRef = &selfCpp->GetVertex(
    inIndex
  );
  JoltC_SoftBodyVertex_t* result = new JoltC_SoftBodyVertex_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_PhysicsMaterialList_t * JoltC_SoftBodyMotionProperties_GetMaterials(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const PhysicsMaterialList* resultRef = &selfCpp->GetMaterials();
  JoltC_PhysicsMaterialList_t* result = new JoltC_PhysicsMaterialList_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFaces(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const ArraySoftBodySharedSettingsFace* resultRef = &selfCpp->GetFaces();
  JoltC_ArraySoftBodySharedSettingsFace_t* result = new JoltC_ArraySoftBodySharedSettingsFace_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFace(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const SoftBodySharedSettingsFace* resultRef = &selfCpp->GetFace(
    inIndex
  );
  JoltC_SoftBodySharedSettingsFace_t* result = new JoltC_SoftBodySharedSettingsFace_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

unsigned long JoltC_SoftBodyMotionProperties_GetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetNumIterations();
}

void JoltC_SoftBodyMotionProperties_SetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumIterations(
    inNumIterations
  );
}

float JoltC_SoftBodyMotionProperties_GetPressure(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetPressure();
}

void JoltC_SoftBodyMotionProperties_SetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  float inPressure
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetPressure(
    inPressure
  );
}

bool JoltC_SoftBodyMotionProperties_GetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetUpdatePosition();
}

void JoltC_SoftBodyMotionProperties_SetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetUpdatePosition(
    inUpdatePosition
  );
}

bool JoltC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetEnableSkinConstraints();
}

void JoltC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetEnableSkinConstraints(
    inEnableSkinConstraints
  );
}

float JoltC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetSkinnedMaxDistanceMultiplier();
}

void JoltC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetSkinnedMaxDistanceMultiplier(
    inSkinnedMaxDistanceMultiplier
  );
}

JoltC_AABox_t * JoltC_SoftBodyMotionProperties_GetLocalBounds(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const AABox* resultRef = &selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

void JoltC_SoftBodyMotionProperties_CustomUpdate(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JoltC_Body_t * ioSoftBody,
  JoltC_PhysicsSystem_t * inSystem
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Body * ioSoftBodyCpp = static_cast<Body *>(ioSoftBody->obj);
  PhysicsSystem * inSystemCpp = static_cast<PhysicsSystem *>(inSystem->obj);
  selfCpp->CustomUpdate(
    inDeltaTime,
    *ioSoftBodyCpp,
    *inSystemCpp
  );
}

void JoltC_SoftBodyMotionProperties_SkinVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_RMat44_t * inRootTransform,
  JoltC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JoltC_TempAllocator_t * ioTempAllocator
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const RMat44 * inRootTransformCpp = static_cast<const RMat44 *>(inRootTransform->obj);
  Mat44MemRef * inJointMatricesCpp = static_cast<Mat44MemRef *>(inJointMatrices->obj);
  TempAllocator * ioTempAllocatorCpp = static_cast<TempAllocator *>(ioTempAllocator->obj);
  selfCpp->SkinVertices(
    *inRootTransformCpp,
    inJointMatricesCpp,
    inNumJoints,
    inHardSkinAll,
    *ioTempAllocatorCpp
  );
}

JoltC_EMotionQuality JoltC_SoftBodyMotionProperties_GetMotionQuality(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality();
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
}

JoltC_EAllowedDOFs JoltC_SoftBodyMotionProperties_GetAllowedDOFs(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
}

bool JoltC_SoftBodyMotionProperties_GetAllowSleeping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetAllowSleeping();
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLinearVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyMotionProperties_SetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocity(
    *inVelocityCpp
  );
}

void JoltC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetLinearVelocityClamped(
    *inVelocityCpp
  );
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAngularVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyMotionProperties_SetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocity(
    *inVelocityCpp
  );
}

void JoltC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVelocityCpp = static_cast<const Vec3 *>(inVelocity->obj);
  selfCpp->SetAngularVelocityClamped(
    *inVelocityCpp
  );
}

void JoltC_SoftBodyMotionProperties_MoveKinematic(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inPositionCpp = static_cast<const Vec3 *>(inPosition->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->MoveKinematic(
    *inPositionCpp,
    *inRotationCpp,
    inDeltaTime
  );
}

float JoltC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetMaxLinearVelocity();
}

void JoltC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetMaxLinearVelocity(
    inVelocity
  );
}

float JoltC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetMaxAngularVelocity();
}

void JoltC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetMaxAngularVelocity(
    inVelocity
  );
}

void JoltC_SoftBodyMotionProperties_ClampLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ClampLinearVelocity();
}

void JoltC_SoftBodyMotionProperties_ClampAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ClampAngularVelocity();
}

float JoltC_SoftBodyMotionProperties_GetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetLinearDamping();
}

void JoltC_SoftBodyMotionProperties_SetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetLinearDamping(
    inDamping
  );
}

float JoltC_SoftBodyMotionProperties_GetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetAngularDamping();
}

void JoltC_SoftBodyMotionProperties_SetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetAngularDamping(
    inDamping
  );
}

float JoltC_SoftBodyMotionProperties_GetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetGravityFactor();
}

void JoltC_SoftBodyMotionProperties_SetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  float inFactor
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetGravityFactor(
    inFactor
  );
}

void JoltC_SoftBodyMotionProperties_SetMassProperties(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  JoltC_MassProperties_t * inMassProperties
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EAllowedDOFs inAllowedDOFsCpp = static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs));
  const MassProperties * inMassPropertiesCpp = static_cast<const MassProperties *>(inMassProperties->obj);
  selfCpp->SetMassProperties(
    inAllowedDOFsCpp,
    *inMassPropertiesCpp
  );
}

float JoltC_SoftBodyMotionProperties_GetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetInverseMass();
}

float JoltC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetInverseMassUnchecked();
}

void JoltC_SoftBodyMotionProperties_SetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  float inInvM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetInverseMass(
    inInvM
  );
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetInverseInertiaDiagonal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_SoftBodyMotionProperties_GetInertiaRotation(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetInertiaRotation();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyMotionProperties_SetInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inInvI,
  JoltC_Quat_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inInvICpp = static_cast<const Vec3 *>(inInvI->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  selfCpp->SetInverseInertia(
    *inInvICpp,
    *inRotationCpp
  );
}

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetLocalSpaceInverseInertia();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Mat44_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Mat44 * inRotationCpp = static_cast<const Mat44 *>(inRotation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetInverseInertiaForRotation(
    *inRotationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
    *inRotationCpp,
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPointRelativeToCOM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inPointRelativeToCOMCpp = static_cast<const Vec3 *>(inPointRelativeToCOM->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPointVelocityCOM(
    *inPointRelativeToCOMCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedForce(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedForce();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAccumulatedTorque();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyMotionProperties_ResetForce(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetForce();
}

void JoltC_SoftBodyMotionProperties_ResetTorque(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetTorque();
}

void JoltC_SoftBodyMotionProperties_ResetMotion(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetMotion();
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockTranslation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->LockTranslation(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockAngular(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->LockAngular(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

unsigned long JoltC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

unsigned long JoltC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

//endregion


#ifdef __cplusplus
}
#endif
