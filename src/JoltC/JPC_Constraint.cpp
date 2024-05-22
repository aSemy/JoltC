#include "JoltC/JPC_Constraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_Constraint_GetRefCount(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_Constraint_AddRef(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_Constraint_Release(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->Release();
};

JPC_EConstraintType JPC_Constraint_GetType(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JPC_EConstraintType>(static_cast<int>(result));
};

JPC_EConstraintSubType JPC_Constraint_GetSubType(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EConstraintSubType>(static_cast<int>(result));
};

unsigned long JPC_Constraint_GetConstraintPriority(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  unsigned long result = selfCpp->GetConstraintPriority();
  return result;
};

void JPC_Constraint_SetConstraintPriority(
  JPC_Constraint_t * self,
  unsigned long inPriority
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->SetConstraintPriority(
  inPriority
  );
};

void JPC_Constraint_SetNumVelocityStepsOverride(
  JPC_Constraint_t * self,
  long inN
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->SetNumVelocityStepsOverride(
  inN
  );
};

long JPC_Constraint_GetNumVelocityStepsOverride(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  long result = selfCpp->GetNumVelocityStepsOverride();
  return result;
};

void JPC_Constraint_SetNumPositionStepsOverride(
  JPC_Constraint_t * self,
  long inN
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->SetNumPositionStepsOverride(
  inN
  );
};

long JPC_Constraint_GetNumPositionStepsOverride(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  long result = selfCpp->GetNumPositionStepsOverride();
  return result;
};

void JPC_Constraint_SetEnabled(
  JPC_Constraint_t * self,
  bool inEnabled
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->SetEnabled(
  inEnabled
  );
};

bool JPC_Constraint_GetEnabled(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  bool result = selfCpp->GetEnabled();
  return result;
};

bool JPC_Constraint_IsActive(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  bool result = selfCpp->IsActive();
  return result;
};

unsigned long long int JPC_Constraint_GetUserData(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_Constraint_SetUserData(
  JPC_Constraint_t * self,
  unsigned long long int inUserData
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

void JPC_Constraint_ResetWarmStart(
  JPC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  
  selfCpp->ResetWarmStart();
};

//endregion functions

#ifdef __cplusplus
}
#endif

