#include "JoltC/JoltC_Body.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_BodyID_t * JoltC_Body_GetID(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const BodyID& resultRef = selfCpp->GetID();
    const BodyID * result = &resultRef;
    return reinterpret_cast<const JoltC_BodyID_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsActive(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsActive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsRigidBody(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsRigidBody();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsSoftBody(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsSoftBody();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsStatic(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsStatic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsKinematic(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsKinematic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsDynamic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_CanBeKinematicOrDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->CanBeKinematicOrDynamic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EBodyType JoltC_Body_GetBodyType(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    EBodyType result = selfCpp->GetBodyType();
    return static_cast<JoltC_EBodyType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EMotionType JoltC_Body_GetMotionType(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    EMotionType result = selfCpp->GetMotionType();
    return static_cast<JoltC_EMotionType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetIsSensor(
  JoltC_Body_t * self,
  bool inIsSensor,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetIsSensor(
    inIsSensor
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsSensor(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsSensor();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  bool inCollide,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetCollideKinematicVsNonDynamic(
    inCollide
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_GetCollideKinematicVsNonDynamic(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->GetCollideKinematicVsNonDynamic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetUseManifoldReduction(
  JoltC_Body_t * self,
  bool inUseReduction,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetUseManifoldReduction(
    inUseReduction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_GetUseManifoldReduction(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->GetUseManifoldReduction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetApplyGyroscopicForce(
  JoltC_Body_t * self,
  bool inApply,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetApplyGyroscopicForce(
    inApply
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_GetApplyGyroscopicForce(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->GetApplyGyroscopicForce();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  bool inApply,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetEnhancedInternalEdgeRemoval(
    inApply
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_GetEnhancedInternalEdgeRemoval(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->GetEnhancedInternalEdgeRemoval();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_Body_GetObjectLayer(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    unsigned long result = selfCpp->GetObjectLayer();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_CollisionGroup_t * JoltC_Body_GetCollisionGroup(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    CollisionGroup& resultRef = selfCpp->GetCollisionGroup();
    CollisionGroup * result = &resultRef;
    return reinterpret_cast<JoltC_CollisionGroup_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_GetAllowSleeping(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->GetAllowSleeping();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetAllowSleeping(
  JoltC_Body_t * self,
  bool inAllow,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetAllowSleeping(
    inAllow
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_ResetSleepTimer(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->ResetSleepTimer();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Body_GetFriction(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    float result = selfCpp->GetFriction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetFriction(
  JoltC_Body_t * self,
  float inFriction,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetFriction(
    inFriction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Body_GetRestitution(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    float result = selfCpp->GetRestitution();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetRestitution(
  JoltC_Body_t * self,
  float inRestitution,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetRestitution(
    inRestitution
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Body_GetLinearVelocity(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    Vec3 resultValue = selfCpp->GetLinearVelocity();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetLinearVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetLinearVelocity(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetLinearVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetLinearVelocityClamped(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Body_GetAngularVelocity(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    Vec3 resultValue = selfCpp->GetAngularVelocity();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetAngularVelocity(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetAngularVelocity(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetAngularVelocityClamped(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetAngularVelocityClamped(
    *reinterpret_cast<Vec3 *>(inVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddForce_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddForce(
    *reinterpret_cast<Vec3 *>(inForce->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddForce_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inForce,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddForce(
    *reinterpret_cast<Vec3 *>(inForce->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddTorque(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inTorque,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddTorque(
    *reinterpret_cast<Vec3 *>(inTorque->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedForce(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const Vec3 resultValue = selfCpp->GetAccumulatedForce();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_Body_GetAccumulatedTorque(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const Vec3 resultValue = selfCpp->GetAccumulatedTorque();
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_ResetForce(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->ResetForce();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_ResetTorque(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->ResetTorque();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_ResetMotion(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->ResetMotion();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddImpulse_0(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddImpulse(
    *reinterpret_cast<Vec3 *>(inImpulse->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddImpulse_1(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inImpulse,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddImpulse(
    *reinterpret_cast<Vec3 *>(inImpulse->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_AddAngularImpulse(
  JoltC_Body_t * self,
  const JoltC_Vec3_t * inAngularImpulse,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->AddAngularImpulse(
    *reinterpret_cast<Vec3 *>(inAngularImpulse->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_MoveKinematic(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->MoveKinematic(
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    inDeltaTime
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_ApplyBuoyancyImpulse(
  JoltC_Body_t * self,
  const JoltC_RVec3_t * inSurfacePosition,
  const JoltC_Vec3_t * inSurfaceNormal,
  float inBuoyancy,
  float inLinearDrag,
  float inAngularDrag,
  const JoltC_Vec3_t * inFluidVelocity,
  const JoltC_Vec3_t * inGravity,
  float inDeltaTime,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->ApplyBuoyancyImpulse(
    *reinterpret_cast<RVec3 *>(inSurfacePosition->obj),
    *reinterpret_cast<Vec3 *>(inSurfaceNormal->obj),
    inBuoyancy,
    inLinearDrag,
    inAngularDrag,
    *reinterpret_cast<Vec3 *>(inFluidVelocity->obj),
    *reinterpret_cast<Vec3 *>(inGravity->obj),
    inDeltaTime
    );
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Body_IsInBroadPhase(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    bool result = selfCpp->IsInBroadPhase();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Mat44_t * JoltC_Body_GetInverseInertia(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const Mat44 resultValue = selfCpp->GetInverseInertia();
    const Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<const JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Shape_t * JoltC_Body_GetShape(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const Shape * result = selfCpp->GetShape();
    return reinterpret_cast<const JoltC_Shape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_Body_GetPosition(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    RVec3 resultValue = selfCpp->GetPosition();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_Body_GetRotation(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    Quat resultValue = selfCpp->GetRotation();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_Body_GetWorldTransform(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    RMat44 resultValue = selfCpp->GetWorldTransform();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_Body_GetCenterOfMassPosition(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    RVec3 resultValue = selfCpp->GetCenterOfMassPosition();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_Body_GetCenterOfMassTransform(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    RMat44 resultValue = selfCpp->GetCenterOfMassTransform();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_Body_GetInverseCenterOfMassTransform(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    RMat44 resultValue = selfCpp->GetInverseCenterOfMassTransform();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_AABox_t * JoltC_Body_GetWorldSpaceBounds(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    AABox resultValue = selfCpp->GetWorldSpaceBounds();
    AABox* result = new AABox(resultValue);
    return reinterpret_cast<JoltC_AABox_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_TransformedShape_t * JoltC_Body_GetTransformedShape(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    TransformedShape resultValue = selfCpp->GetTransformedShape();
    TransformedShape* result = new TransformedShape(resultValue);
    return reinterpret_cast<JoltC_TransformedShape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyCreationSettings_t * JoltC_Body_GetBodyCreationSettings(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    BodyCreationSettings resultValue = selfCpp->GetBodyCreationSettings();
    BodyCreationSettings* result = new BodyCreationSettings(resultValue);
    return reinterpret_cast<JoltC_BodyCreationSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SoftBodyCreationSettings_t * JoltC_Body_GetSoftBodyCreationSettings(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    SoftBodyCreationSettings resultValue = selfCpp->GetSoftBodyCreationSettings();
    SoftBodyCreationSettings* result = new SoftBodyCreationSettings(resultValue);
    return reinterpret_cast<JoltC_SoftBodyCreationSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MotionProperties_t * JoltC_Body_GetMotionProperties(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    MotionProperties * result = selfCpp->GetMotionProperties();
    return reinterpret_cast<JoltC_MotionProperties_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_Body_GetWorldSpaceSurfaceNormal(
  JoltC_Body_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    const Vec3 resultValue = selfCpp->GetWorldSpaceSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj)
    );
    const Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<const JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long long int JoltC_Body_GetUserData(
  JoltC_Body_t * self,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    unsigned long long int result = selfCpp->GetUserData();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Body_SetUserData(
  JoltC_Body_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    Body * selfCpp = static_cast<Body *>(self->obj);
    
    selfCpp->SetUserData(
    inUserData
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

