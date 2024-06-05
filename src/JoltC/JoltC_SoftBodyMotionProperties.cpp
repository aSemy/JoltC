#include "JoltC/JoltC_SoftBodyMotionProperties.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodyMotionProperties_GetSettings(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const SoftBodySharedSettings * resultValue = selfCpp->GetSettings();
  JoltC_SoftBodySharedSettings_t* result = new JoltC_SoftBodySharedSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertices(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  ArraySoftBodyVertex* resultRef = &selfCpp->GetVertices();
  JoltC_ArraySoftBodyVertex_t* result = new JoltC_ArraySoftBodyVertex_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

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
};

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
};

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
};

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
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumIterations();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumIterations(
    inNumIterations
  );
};

float JoltC_SoftBodyMotionProperties_GetPressure(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetPressure();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  float inPressure
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetPressure(
    inPressure
  );
};

bool JoltC_SoftBodyMotionProperties_GetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetUpdatePosition();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetUpdatePosition(
    inUpdatePosition
  );
};

bool JoltC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetEnableSkinConstraints();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetEnableSkinConstraints(
    inEnableSkinConstraints
  );
};

float JoltC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetSkinnedMaxDistanceMultiplier();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetSkinnedMaxDistanceMultiplier(
    inSkinnedMaxDistanceMultiplier
  );
};

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
};

void JoltC_SoftBodyMotionProperties_CustomUpdate(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JoltC_Body_t * ioSoftBody,
  JoltC_PhysicsSystem_t * inSystem
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->CustomUpdate(
    inDeltaTime,
    *reinterpret_cast<Body *>(ioSoftBody->obj),
    *reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
};

void JoltC_SoftBodyMotionProperties_SkinVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_RMat44_t * inRootTransform,
  JoltC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JoltC_TempAllocator_t * ioTempAllocator
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

JoltC_EMotionQuality JoltC_SoftBodyMotionProperties_GetMotionQuality(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EMotionQuality result = selfCpp->GetMotionQuality();
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
};

JoltC_EAllowedDOFs JoltC_SoftBodyMotionProperties_GetAllowedDOFs(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  EAllowedDOFs result = selfCpp->GetAllowedDOFs();
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
};

bool JoltC_SoftBodyMotionProperties_GetAllowSleeping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  bool result = selfCpp->GetAllowSleeping();
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetLinearVelocity();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodyMotionProperties_SetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetLinearVelocity(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetLinearVelocityClamped(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAngularVelocity();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodyMotionProperties_SetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetAngularVelocity(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetAngularVelocityClamped(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
  );
};

void JoltC_SoftBodyMotionProperties_MoveKinematic(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  float inDeltaTime
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->MoveKinematic(
    *reinterpret_cast<Vec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    inDeltaTime
  );
};

float JoltC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetMaxLinearVelocity();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetMaxLinearVelocity(
    inVelocity
  );
};

float JoltC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetMaxAngularVelocity();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetMaxAngularVelocity(
    inVelocity
  );
};

void JoltC_SoftBodyMotionProperties_ClampLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ClampLinearVelocity();
};

void JoltC_SoftBodyMotionProperties_ClampAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ClampAngularVelocity();
};

float JoltC_SoftBodyMotionProperties_GetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetLinearDamping();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetLinearDamping(
    inDamping
  );
};

float JoltC_SoftBodyMotionProperties_GetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetAngularDamping();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetAngularDamping(
    inDamping
  );
};

float JoltC_SoftBodyMotionProperties_GetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetGravityFactor();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  float inFactor
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetGravityFactor(
    inFactor
  );
};

void JoltC_SoftBodyMotionProperties_SetMassProperties(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  JoltC_MassProperties_t * inMassProperties
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetMassProperties(
    static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs)),
    *reinterpret_cast<MassProperties *>(inMassProperties->obj)
  );
};

float JoltC_SoftBodyMotionProperties_GetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMass();
  return result;
};

float JoltC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  float result = selfCpp->GetInverseMassUnchecked();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  float inInvM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetInverseMass(
    inInvM
  );
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetInverseInertiaDiagonal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Quat_t * JoltC_SoftBodyMotionProperties_GetInertiaRotation(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Quat& resultValue = selfCpp->GetInertiaRotation();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodyMotionProperties_SetInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inInvI,
  JoltC_Quat_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetInverseInertia(
    *reinterpret_cast<Vec3 *>(inInvI->obj),
    *reinterpret_cast<Quat *>(inRotation->obj)
  );
};

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Mat44& resultValue = selfCpp->GetLocalSpaceInverseInertia();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Mat44_t * inRotation
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Mat44& resultValue = selfCpp->GetInverseInertiaForRotation(
    *reinterpret_cast<Mat44 *>(inRotation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inPointRelativeToCOM
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetPointVelocityCOM(
    *reinterpret_cast<Vec3 *>(inPointRelativeToCOM->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedForce(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAccumulatedForce();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAccumulatedTorque();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodyMotionProperties_ResetForce(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetForce();
};

void JoltC_SoftBodyMotionProperties_ResetTorque(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetTorque();
};

void JoltC_SoftBodyMotionProperties_ResetMotion(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->ResetMotion();
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockTranslation(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->LockTranslation(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockAngular(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_Vec3_t * inV
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  const Vec3& resultValue = selfCpp->LockAngular(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JoltC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self
) {
  SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
  unsigned long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

