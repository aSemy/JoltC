#include "JoltC/JoltC_CharacterVirtual.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtual_t * JoltC_CharacterVirtual_new(
  const JoltC_CharacterVirtualSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
) {
  try {
    JoltC_CharacterVirtual_t * cInstance = new JoltC_CharacterVirtual_t();
    CharacterVirtual * cppInstance = new CharacterVirtual(
      reinterpret_cast<CharacterVirtualSettings *>(inSettings->obj),
      *reinterpret_cast<RVec3 *>(inPosition->obj),
      *reinterpret_cast<Quat *>(inRotation->obj),
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

void JoltC_CharacterVirtual_SetListener(
  JoltC_CharacterVirtual_t * self,
  JoltC_CharacterContactListener_t * inListener,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetListener(
    reinterpret_cast<CharacterContactListener *>(inListener->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_CharacterContactListener_t * JoltC_CharacterVirtual_GetListener(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    CharacterContactListener * result = selfCpp->GetListener();
    return reinterpret_cast<JoltC_CharacterContactListener_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

void JoltC_CharacterVirtual_SetLinearVelocity(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetLinearVelocity(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_CharacterVirtual_GetPosition(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

void JoltC_CharacterVirtual_SetPosition(
  JoltC_CharacterVirtual_t * self,
  const JoltC_RVec3_t * inPosition,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetPosition(
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

JoltC_Quat_t * JoltC_CharacterVirtual_GetRotation(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

void JoltC_CharacterVirtual_SetRotation(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Quat_t * inRotation,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetRotation(
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

JoltC_RMat44_t * JoltC_CharacterVirtual_GetWorldTransform(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

JoltC_RMat44_t * JoltC_CharacterVirtual_GetCenterOfMassTransform(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

float JoltC_CharacterVirtual_GetMass(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetMass();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetMass(
  JoltC_CharacterVirtual_t * self,
  float inMass,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetMass(
    inMass
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CharacterVirtual_GetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetMaxStrength();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetMaxStrength(
  JoltC_CharacterVirtual_t * self,
  float inMaxStrength,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetMaxStrength(
    inMaxStrength
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CharacterVirtual_GetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetPenetrationRecoverySpeed();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetPenetrationRecoverySpeed(
  JoltC_CharacterVirtual_t * self,
  float inSpeed,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetPenetrationRecoverySpeed(
    inSpeed
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CharacterVirtual_GetCharacterPadding(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetCharacterPadding();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_CharacterVirtual_GetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    unsigned long result = selfCpp->GetMaxNumHits();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetMaxNumHits(
  JoltC_CharacterVirtual_t * self,
  unsigned long inMaxHits,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetMaxNumHits(
    inMaxHits
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CharacterVirtual_GetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetHitReductionCosMaxAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetHitReductionCosMaxAngle(
  JoltC_CharacterVirtual_t * self,
  float inCosMaxAngle,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetHitReductionCosMaxAngle(
    inCosMaxAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CharacterVirtual_GetMaxHitsExceeded(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->GetMaxHitsExceeded();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    Vec3 resultValue = selfCpp->GetShapeOffset();
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

void JoltC_CharacterVirtual_SetShapeOffset(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inShapeOffset,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetShapeOffset(
    *reinterpret_cast<Vec3 *>(inShapeOffset->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long long int JoltC_CharacterVirtual_GetUserData(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

void JoltC_CharacterVirtual_SetUserData(
  JoltC_CharacterVirtual_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_CharacterVirtual_CancelVelocityTowardsSteepSlopes(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inDesiredVelocity,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    Vec3 resultValue = selfCpp->CancelVelocityTowardsSteepSlopes(
    *reinterpret_cast<Vec3 *>(inDesiredVelocity->obj)
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

void JoltC_CharacterVirtual_Update(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->Update(
    inDeltaTime,
    *reinterpret_cast<Vec3 *>(inGravity->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CharacterVirtual_CanWalkStairs(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inLinearVelocity,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->CanWalkStairs(
    *reinterpret_cast<Vec3 *>(inLinearVelocity->obj)
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

bool JoltC_CharacterVirtual_WalkStairs(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inStepUp,
  const JoltC_Vec3_t * inStepForward,
  const JoltC_Vec3_t * inStepForwardTest,
  const JoltC_Vec3_t * inStepDownExtra,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->WalkStairs(
    inDeltaTime,
    *reinterpret_cast<Vec3 *>(inStepUp->obj),
    *reinterpret_cast<Vec3 *>(inStepForward->obj),
    *reinterpret_cast<Vec3 *>(inStepForwardTest->obj),
    *reinterpret_cast<Vec3 *>(inStepDownExtra->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
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

bool JoltC_CharacterVirtual_StickToFloor(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inStepDown,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->StickToFloor(
    *reinterpret_cast<Vec3 *>(inStepDown->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
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

void JoltC_CharacterVirtual_ExtendedUpdate(
  JoltC_CharacterVirtual_t * self,
  float inDeltaTime,
  const JoltC_Vec3_t * inGravity,
  const JoltC_CharacterVirtual_ExtendedUpdateSettings_t * inSettings,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->ExtendedUpdate(
    inDeltaTime,
    *reinterpret_cast<Vec3 *>(inGravity->obj),
    *reinterpret_cast<CharacterVirtual::ExtendedUpdateSettings *>(inSettings->obj),
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_RefreshContacts(
  JoltC_CharacterVirtual_t * self,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->RefreshContacts(
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_UpdateGroundVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->UpdateGroundVelocity();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CharacterVirtual_SetShape(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Shape_t * inShape,
  float inMaxPenetrationDepth,
  const JoltC_BroadPhaseLayerFilter_t * inBroadPhaseLayerFilter,
  const JoltC_ObjectLayerFilter_t * inObjectLayerFilter,
  const JoltC_BodyFilter_t * inBodyFilter,
  const JoltC_ShapeFilter_t * inShapeFilter,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->SetShape(
    reinterpret_cast<Shape *>(inShape->obj),
    inMaxPenetrationDepth,
    *reinterpret_cast<BroadPhaseLayerFilter *>(inBroadPhaseLayerFilter->obj),
    *reinterpret_cast<ObjectLayerFilter *>(inObjectLayerFilter->obj),
    *reinterpret_cast<BodyFilter *>(inBodyFilter->obj),
    *reinterpret_cast<ShapeFilter *>(inShapeFilter->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
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

unsigned long JoltC_CharacterVirtual_GetRefCount(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_AddRef(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_Release(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  float inMaxSlopeAngle,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetMaxSlopeAngle(
    inMaxSlopeAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CharacterVirtual_GetCosMaxSlopeAngle(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    float result = selfCpp->GetCosMaxSlopeAngle();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtual_SetUp(
  JoltC_CharacterVirtual_t * self,
  const JoltC_Vec3_t * inUp,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    
    selfCpp->SetUp(
    *reinterpret_cast<Vec3 *>(inUp->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_CharacterVirtual_GetUp(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    Vec3 resultValue = selfCpp->GetUp();
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

const JoltC_Shape_t * JoltC_CharacterVirtual_GetShape(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
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

JoltC_EGroundState JoltC_CharacterVirtual_GetGroundState(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    EGroundState result = selfCpp->GetGroundState();
    return static_cast<JoltC_EGroundState>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CharacterVirtual_IsSlopeTooSteep(
  JoltC_CharacterVirtual_t * self,
  JoltC_Vec3_t * inNormal,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->IsSlopeTooSteep(
    *reinterpret_cast<Vec3 *>(inNormal->obj)
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

bool JoltC_CharacterVirtual_IsSupported(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    bool result = selfCpp->IsSupported();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_CharacterVirtual_GetGroundPosition(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    RVec3 resultValue = selfCpp->GetGroundPosition();
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

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundNormal(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    Vec3 resultValue = selfCpp->GetGroundNormal();
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

JoltC_Vec3_t * JoltC_CharacterVirtual_GetGroundVelocity(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    Vec3 resultValue = selfCpp->GetGroundVelocity();
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

const JoltC_PhysicsMaterial_t * JoltC_CharacterVirtual_GetGroundMaterial(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    const PhysicsMaterial * result = selfCpp->GetGroundMaterial();
    return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyID_t * JoltC_CharacterVirtual_GetGroundBodyID(
  JoltC_CharacterVirtual_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtual * selfCpp = static_cast<CharacterVirtual *>(self->obj);
    BodyID resultValue = selfCpp->GetGroundBodyID();
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

//endregion functions

#ifdef __cplusplus
}
#endif

