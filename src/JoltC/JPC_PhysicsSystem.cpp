#include "JoltC/JPC_PhysicsSystem.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PhysicsSystem_SetGravity(
  JPC_PhysicsSystem_t * self,
  const JPC_Vec3_t * inGravity
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SetGravity(
  *reinterpret_cast<Vec3 *>(inGravity->obj)
  );
};

JPC_Vec3_t * JPC_PhysicsSystem_GetGravity(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  Vec3 resultValue = selfCpp->GetGravity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_PhysicsSettings_t * JPC_PhysicsSystem_GetPhysicsSettings(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const PhysicsSettings& resultRef = selfCpp->GetPhysicsSettings();
  const PhysicsSettings * result = &resultRef;
  return reinterpret_cast<const JPC_PhysicsSettings_t *>(result);
};

void JPC_PhysicsSystem_SetPhysicsSettings(
  JPC_PhysicsSystem_t * self,
  const JPC_PhysicsSettings_t * inPhysicsSettings
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SetPhysicsSettings(
  *reinterpret_cast<PhysicsSettings *>(inPhysicsSettings->obj)
  );
};

unsigned long JPC_PhysicsSystem_GetNumBodies(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  unsigned long result = selfCpp->GetNumBodies();
  return result;
};

unsigned long JPC_PhysicsSystem_GetNumActiveBodies(
  JPC_PhysicsSystem_t * self,
  JPC_EBodyType inBodyType
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  unsigned long result = selfCpp->GetNumActiveBodies(
  static_cast<EBodyType>(static_cast<int>(inBodyType))
  );
  return result;
};

unsigned long JPC_PhysicsSystem_GetMaxBodies(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  unsigned long result = selfCpp->GetMaxBodies();
  return result;
};

void JPC_PhysicsSystem_GetBodies(
  JPC_PhysicsSystem_t * self,
  JPC_BodyIDVector_t * outBodies
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->GetBodies(
  *reinterpret_cast<BodyIDVector *>(outBodies->obj)
  );
};

void JPC_PhysicsSystem_GetActiveBodies(
  JPC_PhysicsSystem_t * self,
  JPC_EBodyType inBodyType,
  JPC_BodyIDVector_t * outBodies
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->GetActiveBodies(
  static_cast<EBodyType>(static_cast<int>(inBodyType)),
  *reinterpret_cast<BodyIDVector *>(outBodies->obj)
  );
};

const JPC_AABox_t * JPC_PhysicsSystem_GetBounds(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const AABox resultValue = selfCpp->GetBounds();
  const AABox* result = new AABox(resultValue);
  return reinterpret_cast<const JPC_AABox_t *>(result);
};

void JPC_PhysicsSystem_AddConstraint(
  JPC_PhysicsSystem_t * self,
  JPC_Constraint_t * inConstraint
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->AddConstraint(
  reinterpret_cast<Constraint *>(inConstraint->obj)
  );
};

void JPC_PhysicsSystem_RemoveConstraint(
  JPC_PhysicsSystem_t * self,
  JPC_Constraint_t * inConstraint
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->RemoveConstraint(
  reinterpret_cast<Constraint *>(inConstraint->obj)
  );
};

void JPC_PhysicsSystem_SetContactListener(
  JPC_PhysicsSystem_t * self,
  JPC_ContactListener_t * inListener
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SetContactListener(
  reinterpret_cast<ContactListener *>(inListener->obj)
  );
};

JPC_ContactListener_t * JPC_PhysicsSystem_GetContactListener(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  ContactListener * result = selfCpp->GetContactListener();
  return reinterpret_cast<JPC_ContactListener_t *>(result);
};

void JPC_PhysicsSystem_SetSoftBodyContactListener(
  JPC_PhysicsSystem_t * self,
  JPC_SoftBodyContactListener_t * inListener
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SetSoftBodyContactListener(
  reinterpret_cast<SoftBodyContactListener *>(inListener->obj)
  );
};

JPC_SoftBodyContactListener_t * JPC_PhysicsSystem_GetSoftBodyContactListener(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  SoftBodyContactListener * result = selfCpp->GetSoftBodyContactListener();
  return reinterpret_cast<JPC_SoftBodyContactListener_t *>(result);
};

void JPC_PhysicsSystem_OptimizeBroadPhase(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->OptimizeBroadPhase();
};

JPC_BodyInterface_t * JPC_PhysicsSystem_GetBodyInterface(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  BodyInterface& resultRef = selfCpp->GetBodyInterface();
  BodyInterface * result = &resultRef;
  return reinterpret_cast<JPC_BodyInterface_t *>(result);
};

JPC_BodyInterface_t * JPC_PhysicsSystem_GetBodyInterfaceNoLock(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  BodyInterface& resultRef = selfCpp->GetBodyInterfaceNoLock();
  BodyInterface * result = &resultRef;
  return reinterpret_cast<JPC_BodyInterface_t *>(result);
};

const JPC_BodyLockInterfaceNoLock_t * JPC_PhysicsSystem_GetBodyLockInterfaceNoLock(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const BodyLockInterfaceNoLock& resultRef = selfCpp->GetBodyLockInterfaceNoLock();
  const BodyLockInterfaceNoLock * result = &resultRef;
  return reinterpret_cast<const JPC_BodyLockInterfaceNoLock_t *>(result);
};

const JPC_BodyLockInterfaceLocking_t * JPC_PhysicsSystem_GetBodyLockInterface(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const BodyLockInterfaceLocking& resultRef = selfCpp->GetBodyLockInterface();
  const BodyLockInterfaceLocking * result = &resultRef;
  return reinterpret_cast<const JPC_BodyLockInterfaceLocking_t *>(result);
};

const JPC_BroadPhaseQuery_t * JPC_PhysicsSystem_GetBroadPhaseQuery(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const BroadPhaseQuery& resultRef = selfCpp->GetBroadPhaseQuery();
  const BroadPhaseQuery * result = &resultRef;
  return reinterpret_cast<const JPC_BroadPhaseQuery_t *>(result);
};

const JPC_NarrowPhaseQuery_t * JPC_PhysicsSystem_GetNarrowPhaseQuery(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const NarrowPhaseQuery& resultRef = selfCpp->GetNarrowPhaseQuery();
  const NarrowPhaseQuery * result = &resultRef;
  return reinterpret_cast<const JPC_NarrowPhaseQuery_t *>(result);
};

const JPC_NarrowPhaseQuery_t * JPC_PhysicsSystem_GetNarrowPhaseQueryNoLock(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const NarrowPhaseQuery& resultRef = selfCpp->GetNarrowPhaseQueryNoLock();
  const NarrowPhaseQuery * result = &resultRef;
  return reinterpret_cast<const JPC_NarrowPhaseQuery_t *>(result);
};

void JPC_PhysicsSystem_SaveState(
  JPC_PhysicsSystem_t * self,
  JPC_StateRecorder_t * inStream,
  JPC_EStateRecorderState inState
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SaveState(
  *reinterpret_cast<StateRecorder *>(inStream->obj),
  static_cast<EStateRecorderState>(static_cast<int>(inState))
  );
};

bool JPC_PhysicsSystem_RestoreState(
  JPC_PhysicsSystem_t * self,
  JPC_StateRecorder_t * inStream
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  bool result = selfCpp->RestoreState(
  *reinterpret_cast<StateRecorder *>(inStream->obj)
  );
  return result;
};

void JPC_PhysicsSystem_AddStepListener(
  JPC_PhysicsSystem_t * self,
  JPC_PhysicsStepListener_t * inListener
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->AddStepListener(
  reinterpret_cast<PhysicsStepListener *>(inListener->obj)
  );
};

void JPC_PhysicsSystem_RemoveStepListener(
  JPC_PhysicsSystem_t * self,
  JPC_PhysicsStepListener_t * inListener
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->RemoveStepListener(
  reinterpret_cast<PhysicsStepListener *>(inListener->obj)
  );
};

void JPC_PhysicsSystem_SetBodyActivationListener(
  JPC_PhysicsSystem_t * self,
  JPC_BodyActivationListener_t * inListener
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  
  selfCpp->SetBodyActivationListener(
  reinterpret_cast<BodyActivationListener *>(inListener->obj)
  );
};

const JPC_BodyActivationListener_t * JPC_PhysicsSystem_GetBodyActivationListener(
  JPC_PhysicsSystem_t * self
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  const BodyActivationListener * result = selfCpp->GetBodyActivationListener();
  return reinterpret_cast<const JPC_BodyActivationListener_t *>(result);
};

bool JPC_PhysicsSystem_WereBodiesInContact(
  JPC_PhysicsSystem_t * self,
  const JPC_BodyID_t * inBodyID1,
  const JPC_BodyID_t * inBodyID2
) {
  PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
  bool result = selfCpp->WereBodiesInContact(
  *reinterpret_cast<BodyID *>(inBodyID1->obj),
  *reinterpret_cast<BodyID *>(inBodyID2->obj)
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

