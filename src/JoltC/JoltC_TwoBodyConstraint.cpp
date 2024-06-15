#include "JoltC/JoltC_TwoBodyConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_TwoBodyConstraint_destroy(
  JoltC_TwoBodyConstraint_t * self
){
  if (self == NULL) return;
  delete static_cast<TwoBodyConstraint *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_DistanceConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_DistanceConstraint(
  JoltC_DistanceConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PointConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PointConstraint(
  JoltC_PointConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_HingeConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_HingeConstraint(
  JoltC_HingeConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConeConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_ConeConstraint(
  JoltC_ConeConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SliderConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SliderConstraint(
  JoltC_SliderConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SwingTwistConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SwingTwistConstraint(
  JoltC_SwingTwistConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_SixDOFConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SixDOFConstraint(
  JoltC_SixDOFConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PathConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PathConstraint(
  JoltC_PathConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_PulleyConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PulleyConstraint(
  JoltC_PulleyConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_GearConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_GearConstraint(
  JoltC_GearConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

/**
 * Convert an instance of JoltC_RackAndPinionConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_RackAndPinionConstraint(
  JoltC_RackAndPinionConstraint_t * subtype
) {
  return (JoltC_TwoBodyConstraint_t*) subtype;
};

//endregion

//region functions

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody1(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody1();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody2(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  const Body * resultPtr = selfCpp->GetBody2();
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody1Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetConstraintToBody2Matrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long JoltC_TwoBodyConstraint_GetRefCount(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_TwoBodyConstraint_AddRef(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_TwoBodyConstraint_Release(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->Release();
}

JoltC_EConstraintType JoltC_TwoBodyConstraint_GetType(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  EConstraintType result = selfCpp->GetType();
  return static_cast<JoltC_EConstraintType>(static_cast<int>(result));
}

JoltC_EConstraintSubType JoltC_TwoBodyConstraint_GetSubType(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  EConstraintSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EConstraintSubType>(static_cast<int>(result));
}

unsigned long JoltC_TwoBodyConstraint_GetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetConstraintPriority();
}

void JoltC_TwoBodyConstraint_SetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long inPriority
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->SetConstraintPriority(
    inPriority
  );
}

void JoltC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->SetNumVelocityStepsOverride(
    inN
  );
}

long JoltC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetNumVelocityStepsOverride();
}

void JoltC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->SetNumPositionStepsOverride(
    inN
  );
}

long JoltC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetNumPositionStepsOverride();
}

void JoltC_TwoBodyConstraint_SetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  bool inEnabled
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->SetEnabled(
    inEnabled
  );
}

bool JoltC_TwoBodyConstraint_GetEnabled(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetEnabled();
}

bool JoltC_TwoBodyConstraint_IsActive(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->IsActive();
}

unsigned long long int JoltC_TwoBodyConstraint_GetUserData(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_TwoBodyConstraint_SetUserData(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

void JoltC_TwoBodyConstraint_ResetWarmStart(
  JoltC_TwoBodyConstraint_t * self
) {
  TwoBodyConstraint * selfCpp = static_cast<TwoBodyConstraint *>(self->obj);
  selfCpp->ResetWarmStart();
}

//endregion


#ifdef __cplusplus
}
#endif
