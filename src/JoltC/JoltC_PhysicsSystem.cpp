#include "JoltC/JoltC_PhysicsSystem.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PhysicsSystem_SetGravity(
  JoltC_PhysicsSystem_t * self,
  const JoltC_Vec3_t * inGravity,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SetGravity(
    *reinterpret_cast<Vec3 *>(inGravity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_PhysicsSystem_GetGravity(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    Vec3 resultValue = selfCpp->GetGravity();
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

const JoltC_PhysicsSettings_t * JoltC_PhysicsSystem_GetPhysicsSettings(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const PhysicsSettings& resultRef = selfCpp->GetPhysicsSettings();
    const PhysicsSettings * result = &resultRef;
    return reinterpret_cast<const JoltC_PhysicsSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_SetPhysicsSettings(
  JoltC_PhysicsSystem_t * self,
  const JoltC_PhysicsSettings_t * inPhysicsSettings,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SetPhysicsSettings(
    *reinterpret_cast<PhysicsSettings *>(inPhysicsSettings->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_PhysicsSystem_GetNumBodies(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    unsigned long result = selfCpp->GetNumBodies();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_PhysicsSystem_GetNumActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    unsigned long result = selfCpp->GetNumActiveBodies(
    static_cast<EBodyType>(static_cast<int>(inBodyType))
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

unsigned long JoltC_PhysicsSystem_GetMaxBodies(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    unsigned long result = selfCpp->GetMaxBodies();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_GetBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyIDVector_t * outBodies,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->GetBodies(
    *reinterpret_cast<BodyIDVector *>(outBodies->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_GetActiveBodies(
  JoltC_PhysicsSystem_t * self,
  JoltC_EBodyType inBodyType,
  JoltC_BodyIDVector_t * outBodies,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->GetActiveBodies(
    static_cast<EBodyType>(static_cast<int>(inBodyType)),
    *reinterpret_cast<BodyIDVector *>(outBodies->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_AABox_t * JoltC_PhysicsSystem_GetBounds(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const AABox resultValue = selfCpp->GetBounds();
    const AABox* result = new AABox(resultValue);
    return reinterpret_cast<const JoltC_AABox_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_AddConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->AddConstraint(
    reinterpret_cast<Constraint *>(inConstraint->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_RemoveConstraint(
  JoltC_PhysicsSystem_t * self,
  JoltC_Constraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->RemoveConstraint(
    reinterpret_cast<Constraint *>(inConstraint->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_SetContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_ContactListener_t * inListener,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SetContactListener(
    reinterpret_cast<ContactListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ContactListener_t * JoltC_PhysicsSystem_GetContactListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    ContactListener * result = selfCpp->GetContactListener();
    return reinterpret_cast<JoltC_ContactListener_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_SetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_SoftBodyContactListener_t * inListener,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SetSoftBodyContactListener(
    reinterpret_cast<SoftBodyContactListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SoftBodyContactListener_t * JoltC_PhysicsSystem_GetSoftBodyContactListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    SoftBodyContactListener * result = selfCpp->GetSoftBodyContactListener();
    return reinterpret_cast<JoltC_SoftBodyContactListener_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_OptimizeBroadPhase(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->OptimizeBroadPhase();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterface(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    BodyInterface& resultRef = selfCpp->GetBodyInterface();
    BodyInterface * result = &resultRef;
    return reinterpret_cast<JoltC_BodyInterface_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyInterface_t * JoltC_PhysicsSystem_GetBodyInterfaceNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    BodyInterface& resultRef = selfCpp->GetBodyInterfaceNoLock();
    BodyInterface * result = &resultRef;
    return reinterpret_cast<JoltC_BodyInterface_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_BodyLockInterfaceNoLock_t * JoltC_PhysicsSystem_GetBodyLockInterfaceNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const BodyLockInterfaceNoLock& resultRef = selfCpp->GetBodyLockInterfaceNoLock();
    const BodyLockInterfaceNoLock * result = &resultRef;
    return reinterpret_cast<const JoltC_BodyLockInterfaceNoLock_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_BodyLockInterfaceLocking_t * JoltC_PhysicsSystem_GetBodyLockInterface(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const BodyLockInterfaceLocking& resultRef = selfCpp->GetBodyLockInterface();
    const BodyLockInterfaceLocking * result = &resultRef;
    return reinterpret_cast<const JoltC_BodyLockInterfaceLocking_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_BroadPhaseQuery_t * JoltC_PhysicsSystem_GetBroadPhaseQuery(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const BroadPhaseQuery& resultRef = selfCpp->GetBroadPhaseQuery();
    const BroadPhaseQuery * result = &resultRef;
    return reinterpret_cast<const JoltC_BroadPhaseQuery_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQuery(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const NarrowPhaseQuery& resultRef = selfCpp->GetNarrowPhaseQuery();
    const NarrowPhaseQuery * result = &resultRef;
    return reinterpret_cast<const JoltC_NarrowPhaseQuery_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_NarrowPhaseQuery_t * JoltC_PhysicsSystem_GetNarrowPhaseQueryNoLock(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const NarrowPhaseQuery& resultRef = selfCpp->GetNarrowPhaseQueryNoLock();
    const NarrowPhaseQuery * result = &resultRef;
    return reinterpret_cast<const JoltC_NarrowPhaseQuery_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_SaveState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream,
  JoltC_EStateRecorderState inState,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SaveState(
    *reinterpret_cast<StateRecorder *>(inStream->obj),
    static_cast<EStateRecorderState>(static_cast<int>(inState))
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_PhysicsSystem_RestoreState(
  JoltC_PhysicsSystem_t * self,
  JoltC_StateRecorder_t * inStream,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    bool result = selfCpp->RestoreState(
    *reinterpret_cast<StateRecorder *>(inStream->obj)
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

void JoltC_PhysicsSystem_AddStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->AddStepListener(
    reinterpret_cast<PhysicsStepListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_RemoveStepListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_PhysicsStepListener_t * inListener,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->RemoveStepListener(
    reinterpret_cast<PhysicsStepListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsSystem_SetBodyActivationListener(
  JoltC_PhysicsSystem_t * self,
  JoltC_BodyActivationListener_t * inListener,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    
    selfCpp->SetBodyActivationListener(
    reinterpret_cast<BodyActivationListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_BodyActivationListener_t * JoltC_PhysicsSystem_GetBodyActivationListener(
  JoltC_PhysicsSystem_t * self,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    const BodyActivationListener * result = selfCpp->GetBodyActivationListener();
    return reinterpret_cast<const JoltC_BodyActivationListener_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_PhysicsSystem_WereBodiesInContact(
  JoltC_PhysicsSystem_t * self,
  const JoltC_BodyID_t * inBodyID1,
  const JoltC_BodyID_t * inBodyID2,
  char** outErrMsg
) {
  try {
    PhysicsSystem * selfCpp = static_cast<PhysicsSystem *>(self->obj);
    bool result = selfCpp->WereBodiesInContact(
    *reinterpret_cast<BodyID *>(inBodyID1->obj),
    *reinterpret_cast<BodyID *>(inBodyID2->obj)
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

//endregion functions

#ifdef __cplusplus
}
#endif

