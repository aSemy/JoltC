#include "JoltC/JoltC_Ragdoll.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Ragdoll_t * JoltC_Ragdoll_new(
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
) {
  try {
    JoltC_Ragdoll_t * cInstance = new JoltC_Ragdoll_t();
    Ragdoll * cppInstance = new Ragdoll(
      reinterpret_cast<PhysicsSystem *>(inSystem->obj)
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

void JoltC_Ragdoll_AddToPhysicsSystem(
  JoltC_Ragdoll_t * self,
  JoltC_EActivation inActivationMode,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->AddToPhysicsSystem(
    static_cast<EActivation>(static_cast<int>(inActivationMode)),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_RemoveFromPhysicsSystem(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->RemoveFromPhysicsSystem(
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_Activate(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->Activate(
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Ragdoll_IsActive(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    bool result = selfCpp->IsActive(
    inLockBodies
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

void JoltC_Ragdoll_SetGroupID(
  JoltC_Ragdoll_t * self,
  long inGroupID,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->SetGroupID(
    inGroupID,
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_SetPose(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->SetPose(
    *reinterpret_cast<SkeletonPose *>(inPose->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_GetPose(
  JoltC_Ragdoll_t * self,
  JoltC_SkeletonPose_t * outPose,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->GetPose(
    *reinterpret_cast<SkeletonPose *>(outPose->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_ResetWarmStart(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->ResetWarmStart();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_DriveToPoseUsingKinematics(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  float inDeltaTime,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->DriveToPoseUsingKinematics(
    *reinterpret_cast<SkeletonPose *>(inPose->obj),
    inDeltaTime,
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_DriveToPoseUsingMotors(
  JoltC_Ragdoll_t * self,
  const JoltC_SkeletonPose_t * inPose,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->DriveToPoseUsingMotors(
    *reinterpret_cast<SkeletonPose *>(inPose->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_SetLinearAndAngularVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  const JoltC_Vec3_t * inAngularVelocity,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->SetLinearAndAngularVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    *reinterpret_cast<Vec3 *>(inAngularVelocity->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_SetLinearVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->SetLinearVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_AddLinearVelocity(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->AddLinearVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_AddImpulse(
  JoltC_Ragdoll_t * self,
  const JoltC_Vec3_t * inImpulse,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->AddImpulse(
    *reinterpret_cast<Vec3 *>(inImpulse->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Ragdoll_GetRootTransform(
  JoltC_Ragdoll_t * self,
  JoltC_RVec3_t * outPosition,
  JoltC_Quat_t * outRotation,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    
    selfCpp->GetRootTransform(
    *reinterpret_cast<RVec3 *>(outPosition->obj),
    *reinterpret_cast<Quat *>(outRotation->obj),
    inLockBodies
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_Ragdoll_GetBodyCount(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    long result = selfCpp->GetBodyCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyID_t * JoltC_Ragdoll_GetBodyID(
  JoltC_Ragdoll_t * self,
  long inBodyIndex,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    BodyID resultValue = selfCpp->GetBodyID(
    inBodyIndex
    );
    BodyID* result = new BodyID(resultValue);
    return reinterpret_cast<JoltC_BodyID_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_BodyIDVector_t * JoltC_Ragdoll_GetBodyIDs(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    const BodyIDVector& resultRef = selfCpp->GetBodyIDs();
    const BodyIDVector * result = &resultRef;
    return reinterpret_cast<const JoltC_BodyIDVector_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_Ragdoll_GetConstraintCount(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    long result = selfCpp->GetConstraintCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_AABox_t * JoltC_Ragdoll_GetWorldSpaceBounds(
  JoltC_Ragdoll_t * self,
  bool inLockBodies,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    AABox resultValue = selfCpp->GetWorldSpaceBounds(
    inLockBodies
    );
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

const JoltC_TwoBodyConstraint_t * JoltC_Ragdoll_GetConstraint(
  JoltC_Ragdoll_t * self,
  long inConstraintIndex,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    const TwoBodyConstraint * result = selfCpp->GetConstraint(
    inConstraintIndex
    );
    return reinterpret_cast<const JoltC_TwoBodyConstraint_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_RagdollSettings_t * JoltC_Ragdoll_GetRagdollSettings(
  JoltC_Ragdoll_t * self,
  char** outErrMsg
) {
  try {
    Ragdoll * selfCpp = static_cast<Ragdoll *>(self->obj);
    const RagdollSettings * result = selfCpp->GetRagdollSettings();
    return reinterpret_cast<const JoltC_RagdollSettings_t *>(result);
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

