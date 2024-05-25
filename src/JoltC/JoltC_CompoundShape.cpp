#include "JoltC/JoltC_CompoundShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_CompoundShape_GetNumSubShapes(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
    long result = selfCpp->GetNumSubShapes();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_CompoundShapeSubShape_t * JoltC_CompoundShape_GetSubShape(
  JoltC_CompoundShape_t * self,
  long inIdx,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
    const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
    inIdx
    );
    const CompoundShapeSubShape * result = &resultRef;
    return reinterpret_cast<const JoltC_CompoundShapeSubShape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_CompoundShape_GetRefCount(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

void JoltC_CompoundShape_AddRef(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CompoundShape_Release(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_CompoundShape_GetType(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_CompoundShape_GetSubType(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

bool JoltC_CompoundShape_MustBeStatic(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CompoundShape_GetLocalBounds(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CompoundShape_GetWorldSpaceBounds(
  JoltC_CompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CompoundShape_GetCenterOfMass(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

unsigned long long int JoltC_CompoundShape_GetUserData(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

void JoltC_CompoundShape_SetUserData(
  JoltC_CompoundShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
    
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

unsigned long JoltC_CompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

float JoltC_CompoundShape_GetInnerRadius(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_CompoundShape_GetMassProperties(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_CompoundShape_GetMaterial(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CompoundShape_GetSurfaceNormal(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

unsigned long long int JoltC_CompoundShape_GetSubShapeUserData(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_CompoundShape_GetSubShapeTransformedShape(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

float JoltC_CompoundShape_GetVolume(
  JoltC_CompoundShape_t * self,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

bool JoltC_CompoundShape_IsValidScale(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_CompoundShape_ScaleShape(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

