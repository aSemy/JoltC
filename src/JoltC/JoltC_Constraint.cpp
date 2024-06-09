#include "JoltC/JoltC_Constraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_TwoBodyConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_TwoBodyConstraint(
  JoltC_TwoBodyConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_DistanceConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_DistanceConstraint(
  JoltC_DistanceConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PointConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PointConstraint(
  JoltC_PointConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_HingeConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_HingeConstraint(
  JoltC_HingeConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConeConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_ConeConstraint(
  JoltC_ConeConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SliderConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SliderConstraint(
  JoltC_SliderConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SwingTwistConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SwingTwistConstraint(
  JoltC_SwingTwistConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SixDOFConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SixDOFConstraint(
  JoltC_SixDOFConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PathConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PathConstraint(
  JoltC_PathConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PulleyConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PulleyConstraint(
  JoltC_PulleyConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_GearConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_GearConstraint(
  JoltC_GearConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_RackAndPinionConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_RackAndPinionConstraint(
  JoltC_RackAndPinionConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_VehicleConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_VehicleConstraint(
  JoltC_VehicleConstraint_t * subtype
) {
  return (JoltC_Constraint_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_Constraint_GetRefCount(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_Constraint_AddRef(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_Constraint_Release(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_Constraint_GetType(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_Constraint_GetSubType(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_Constraint_GetConstraintPriority(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_Constraint_SetConstraintPriority(
  JoltC_Constraint_t * self,
  unsigned long inPriority
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_Constraint_SetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  long inN
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_Constraint_GetNumVelocityStepsOverride(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_Constraint_SetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  long inN
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_Constraint_GetNumPositionStepsOverride(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_Constraint_SetEnabled(
  JoltC_Constraint_t * self,
  bool inEnabled
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_Constraint_GetEnabled(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_Constraint_IsActive(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_Constraint_GetUserData(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_Constraint_SetUserData(
  JoltC_Constraint_t * self,
  unsigned long long int inUserData
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_Constraint_ResetWarmStart(
  JoltC_Constraint_t * self
) {
  Constraint * selfCpp = static_cast<Constraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion

#ifdef __cplusplus
}
#endif

