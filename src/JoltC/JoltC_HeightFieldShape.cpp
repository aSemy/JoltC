#include "JoltC/JoltC_HeightFieldShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_HeightFieldShape_GetSampleCount(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    long result = selfCpp->GetSampleCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_HeightFieldShape_GetBlockSize(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    long result = selfCpp->GetBlockSize();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_HeightFieldShape_GetPosition(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetPosition(
    inX,
    inY
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

bool JoltC_HeightFieldShape_IsNoCollision(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    bool result = selfCpp->IsNoCollision(
    inX,
    inY
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

float JoltC_HeightFieldShape_GetMinHeightValue(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    float result = selfCpp->GetMinHeightValue();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HeightFieldShape_GetMaxHeightValue(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    float result = selfCpp->GetMaxHeightValue();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HeightFieldShape_GetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * outHeights,
  long inHeightsStride,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
    selfCpp->GetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<FloatMemRef *>(outHeights->obj),
    inHeightsStride
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HeightFieldShape_SetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JoltC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
    selfCpp->SetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<FloatMemRef *>(inHeights->obj),
    inHeightsStride,
    *reinterpret_cast<TempAllocator *>(inAllocator->obj),
    inActiveEdgeCosThresholdAngle
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HeightFieldShape_GetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
    selfCpp->GetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<Uint8MemRef *>(outMaterials->obj),
    inMaterialsStride
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_HeightFieldShape_SetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JoltC_PhysicsMaterialList_t * inMaterialList,
  JoltC_TempAllocator_t * inAllocator,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    bool result = selfCpp->SetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<Uint8MemRef *>(inMaterials->obj),
    inMaterialsStride,
    reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj),
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

unsigned long JoltC_HeightFieldShape_GetRefCount(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
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

void JoltC_HeightFieldShape_AddRef(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HeightFieldShape_Release(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_HeightFieldShape_GetType(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    EShapeType result = selfCpp->GetType();
    return static_cast<JoltC_EShapeType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeSubType JoltC_HeightFieldShape_GetSubType(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    EShapeSubType result = selfCpp->GetSubType();
    return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_HeightFieldShape_MustBeStatic(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    bool result = selfCpp->MustBeStatic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_AABox_t * JoltC_HeightFieldShape_GetLocalBounds(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    AABox resultValue = selfCpp->GetLocalBounds();
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

JoltC_AABox_t * JoltC_HeightFieldShape_GetWorldSpaceBounds(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
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

JoltC_Vec3_t * JoltC_HeightFieldShape_GetCenterOfMass(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetCenterOfMass();
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

unsigned long long int JoltC_HeightFieldShape_GetUserData(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
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

void JoltC_HeightFieldShape_SetUserData(
  JoltC_HeightFieldShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    
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

unsigned long JoltC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_HeightFieldShape_GetInnerRadius(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    float result = selfCpp->GetInnerRadius();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MassProperties_t * JoltC_HeightFieldShape_GetMassProperties(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    MassProperties resultValue = selfCpp->GetMassProperties();
    MassProperties* result = new MassProperties(resultValue);
    return reinterpret_cast<JoltC_MassProperties_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_PhysicsMaterial_t * JoltC_HeightFieldShape_GetMaterial(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    const PhysicsMaterial * result = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
    );
    return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_HeightFieldShape_GetSurfaceNormal(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
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

unsigned long long int JoltC_HeightFieldShape_GetSubShapeUserData(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
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

JoltC_TransformedShape_t * JoltC_HeightFieldShape_GetSubShapeTransformedShape(
  JoltC_HeightFieldShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
    );
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

float JoltC_HeightFieldShape_GetVolume(
  JoltC_HeightFieldShape_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    float result = selfCpp->GetVolume();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_HeightFieldShape_IsValidScale(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
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

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShape_ScaleShape(
  JoltC_HeightFieldShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
    Shape::ShapeResult resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
    return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
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
