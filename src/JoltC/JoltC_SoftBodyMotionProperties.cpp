#include "JoltC/JoltC_SoftBodyMotionProperties.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_SoftBodySharedSettings_t * JoltC_SoftBodyMotionProperties_GetSettings(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const SoftBodySharedSettings * result = selfCpp->GetSettings();
    return reinterpret_cast<const JoltC_SoftBodySharedSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    ArraySoftBodyVertex& resultRef = selfCpp->GetVertices();
    ArraySoftBodyVertex * result = &resultRef;
    return reinterpret_cast<JoltC_ArraySoftBodyVertex_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SoftBodyVertex_t * JoltC_SoftBodyMotionProperties_GetVertex(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    SoftBodyVertex& resultRef = selfCpp->GetVertex(
    inIndex
    );
    SoftBodyVertex * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodyVertex_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_PhysicsMaterialList_t * JoltC_SoftBodyMotionProperties_GetMaterials(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const PhysicsMaterialList& resultRef = selfCpp->GetMaterials();
    const PhysicsMaterialList * result = &resultRef;
    return reinterpret_cast<const JoltC_PhysicsMaterialList_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFaces(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const ArraySoftBodySharedSettingsFace& resultRef = selfCpp->GetFaces();
    const ArraySoftBodySharedSettingsFace * result = &resultRef;
    return reinterpret_cast<const JoltC_ArraySoftBodySharedSettingsFace_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodyMotionProperties_GetFace(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inIndex,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const SoftBodySharedSettingsFace& resultRef = selfCpp->GetFace(
    inIndex
    );
    const SoftBodySharedSettingsFace * result = &resultRef;
    return reinterpret_cast<const JoltC_SoftBodySharedSettingsFace_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    unsigned long result = selfCpp->GetNumIterations();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetNumIterations(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inNumIterations,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetNumIterations(
    inNumIterations
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetPressure();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetPressure(
  JoltC_SoftBodyMotionProperties_t * self,
  float inPressure,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetPressure(
    inPressure
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_SoftBodyMotionProperties_GetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    bool result = selfCpp->GetUpdatePosition();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetUpdatePosition(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inUpdatePosition,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetUpdatePosition(
    inUpdatePosition
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_SoftBodyMotionProperties_GetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    bool result = selfCpp->GetEnableSkinConstraints();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetEnableSkinConstraints(
  JoltC_SoftBodyMotionProperties_t * self,
  bool inEnableSkinConstraints,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetEnableSkinConstraints(
    inEnableSkinConstraints
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetSkinnedMaxDistanceMultiplier();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetSkinnedMaxDistanceMultiplier(
  JoltC_SoftBodyMotionProperties_t * self,
  float inSkinnedMaxDistanceMultiplier,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetSkinnedMaxDistanceMultiplier(
    inSkinnedMaxDistanceMultiplier
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_AABox_t * JoltC_SoftBodyMotionProperties_GetLocalBounds(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const AABox& resultRef = selfCpp->GetLocalBounds();
    const AABox * result = &resultRef;
    return reinterpret_cast<const JoltC_AABox_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_CustomUpdate(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDeltaTime,
  JoltC_Body_t * ioSoftBody,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->CustomUpdate(
    inDeltaTime,
    *reinterpret_cast<Body *>(ioSoftBody->obj),
    *reinterpret_cast<PhysicsSystem *>(inSystem->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SkinVertices(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_RMat44_t * inRootTransform,
  JoltC_Mat44MemRef_t * inJointMatrices,
  unsigned long inNumJoints,
  bool inHardSkinAll,
  JoltC_TempAllocator_t * ioTempAllocator,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SkinVertices(
    *reinterpret_cast<RMat44 *>(inRootTransform->obj),
    reinterpret_cast<Mat44MemRef *>(inJointMatrices->obj),
    inNumJoints,
    inHardSkinAll,
    *reinterpret_cast<TempAllocator *>(ioTempAllocator->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EMotionQuality JoltC_SoftBodyMotionProperties_GetMotionQuality(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    EMotionQuality result = selfCpp->GetMotionQuality();
    return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EAllowedDOFs JoltC_SoftBodyMotionProperties_GetAllowedDOFs(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    EAllowedDOFs result = selfCpp->GetAllowedDOFs();
    return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_SoftBodyMotionProperties_GetAllowSleeping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
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

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
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

void JoltC_SoftBodyMotionProperties_SetLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
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

void JoltC_SoftBodyMotionProperties_SetLinearVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
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

void JoltC_SoftBodyMotionProperties_SetAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
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

void JoltC_SoftBodyMotionProperties_SetAngularVelocityClamped(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
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

void JoltC_SoftBodyMotionProperties_MoveKinematic(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  float inDeltaTime,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->MoveKinematic(
    *reinterpret_cast<Vec3 *>(inPosition->obj),
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

float JoltC_SoftBodyMotionProperties_GetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetMaxLinearVelocity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetMaxLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetMaxLinearVelocity(
    inVelocity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetMaxAngularVelocity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetMaxAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  float inVelocity,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetMaxAngularVelocity(
    inVelocity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_ClampLinearVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->ClampLinearVelocity();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_ClampAngularVelocity(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->ClampAngularVelocity();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetLinearDamping();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetLinearDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetLinearDamping(
    inDamping
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetAngularDamping();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetAngularDamping(
  JoltC_SoftBodyMotionProperties_t * self,
  float inDamping,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetAngularDamping(
    inDamping
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetGravityFactor();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetGravityFactor(
  JoltC_SoftBodyMotionProperties_t * self,
  float inFactor,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetGravityFactor(
    inFactor
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetMassProperties(
  JoltC_SoftBodyMotionProperties_t * self,
  JoltC_EAllowedDOFs inAllowedDOFs,
  const JoltC_MassProperties_t * inMassProperties,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetMassProperties(
    static_cast<EAllowedDOFs>(static_cast<int>(inAllowedDOFs)),
    *reinterpret_cast<MassProperties *>(inMassProperties->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetInverseMass();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_SoftBodyMotionProperties_GetInverseMassUnchecked(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    float result = selfCpp->GetInverseMassUnchecked();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetInverseMass(
  JoltC_SoftBodyMotionProperties_t * self,
  float inInvM,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetInverseMass(
    inInvM
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaDiagonal(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Vec3 resultValue = selfCpp->GetInverseInertiaDiagonal();
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

JoltC_Quat_t * JoltC_SoftBodyMotionProperties_GetInertiaRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Quat resultValue = selfCpp->GetInertiaRotation();
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

void JoltC_SoftBodyMotionProperties_SetInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inInvI,
  const JoltC_Quat_t * inRotation,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetInverseInertia(
    *reinterpret_cast<Vec3 *>(inInvI->obj),
    *reinterpret_cast<Quat *>(inRotation->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetLocalSpaceInverseInertia(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Mat44 resultValue = selfCpp->GetLocalSpaceInverseInertia();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_SoftBodyMotionProperties_GetInverseInertiaForRotation(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Mat44_t * inRotation,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Mat44 resultValue = selfCpp->GetInverseInertiaForRotation(
    *reinterpret_cast<Mat44 *>(inRotation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_MultiplyWorldSpaceInverseInertiaByVector(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Vec3 resultValue = selfCpp->MultiplyWorldSpaceInverseInertiaByVector(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
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

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetPointVelocityCOM(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inPointRelativeToCOM,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Vec3 resultValue = selfCpp->GetPointVelocityCOM(
    *reinterpret_cast<Vec3 *>(inPointRelativeToCOM->obj)
    );
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

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedForce(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Vec3 resultValue = selfCpp->GetAccumulatedForce();
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

JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_GetAccumulatedTorque(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    Vec3 resultValue = selfCpp->GetAccumulatedTorque();
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

void JoltC_SoftBodyMotionProperties_ResetForce(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->ResetForce();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_ResetTorque(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->ResetTorque();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_ResetMotion(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->ResetMotion();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockTranslation(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const Vec3 resultValue = selfCpp->LockTranslation(
    *reinterpret_cast<Vec3 *>(inV->obj)
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

const JoltC_Vec3_t * JoltC_SoftBodyMotionProperties_LockAngular(
  JoltC_SoftBodyMotionProperties_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    const Vec3 resultValue = selfCpp->LockAngular(
    *reinterpret_cast<Vec3 *>(inV->obj)
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

void JoltC_SoftBodyMotionProperties_SetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetNumVelocityStepsOverride(
    inN
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumVelocityStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    unsigned long result = selfCpp->GetNumVelocityStepsOverride();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodyMotionProperties_SetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  unsigned long inN,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    
    selfCpp->SetNumPositionStepsOverride(
    inN
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_SoftBodyMotionProperties_GetNumPositionStepsOverride(
  JoltC_SoftBodyMotionProperties_t * self,
  char** outErrMsg
) {
  try {
    SoftBodyMotionProperties * selfCpp = static_cast<SoftBodyMotionProperties *>(self->obj);
    unsigned long result = selfCpp->GetNumPositionStepsOverride();
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

