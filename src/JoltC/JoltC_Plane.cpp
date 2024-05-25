#include "JoltC/JoltC_Plane.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Plane_t * JoltC_Plane_new(
  const JoltC_Vec3_t * inNormal,
  float inConstant,
  char** outErrMsg
) {
  try {
    JoltC_Plane_t * cInstance = new JoltC_Plane_t();
    Plane * cppInstance = new Plane(
      *reinterpret_cast<Vec3 *>(inNormal->obj),
      inConstant
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

JoltC_Vec3_t * JoltC_Plane_GetNormal(
  JoltC_Plane_t * self,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    Vec3 resultValue = selfCpp->GetNormal();
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

void JoltC_Plane_SetNormal(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inNormal,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    
    selfCpp->SetNormal(
    *reinterpret_cast<Vec3 *>(inNormal->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Plane_GetConstant(
  JoltC_Plane_t * self,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    float result = selfCpp->GetConstant();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Plane_SetConstant(
  JoltC_Plane_t * self,
  float inConstant,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    
    selfCpp->SetConstant(
    inConstant
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Plane_t * JoltC_Plane_sFromPointAndNormal(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint,
  const JoltC_Vec3_t * inNormal,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    const Plane resultValue = selfCpp->sFromPointAndNormal(
    *reinterpret_cast<Vec3 *>(inPoint->obj),
    *reinterpret_cast<Vec3 *>(inNormal->obj)
    );
    const Plane* result = new Plane(resultValue);
    return reinterpret_cast<const JoltC_Plane_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Plane_t * JoltC_Plane_sFromPointsCCW(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint1,
  const JoltC_Vec3_t * inPoint2,
  const JoltC_Vec3_t * inPoint3,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    const Plane resultValue = selfCpp->sFromPointsCCW(
    *reinterpret_cast<Vec3 *>(inPoint1->obj),
    *reinterpret_cast<Vec3 *>(inPoint2->obj),
    *reinterpret_cast<Vec3 *>(inPoint3->obj)
    );
    const Plane* result = new Plane(resultValue);
    return reinterpret_cast<const JoltC_Plane_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Plane_t * JoltC_Plane_Offset(
  JoltC_Plane_t * self,
  float inDistance,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    const Plane resultValue = selfCpp->Offset(
    inDistance
    );
    const Plane* result = new Plane(resultValue);
    return reinterpret_cast<const JoltC_Plane_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Plane_t * JoltC_Plane_GetTransformed(
  JoltC_Plane_t * self,
  const JoltC_Mat44_t * inTransform,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    const Plane resultValue = selfCpp->GetTransformed(
    *reinterpret_cast<Mat44 *>(inTransform->obj)
    );
    const Plane* result = new Plane(resultValue);
    return reinterpret_cast<const JoltC_Plane_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Plane_SignedDistance(
  JoltC_Plane_t * self,
  const JoltC_Vec3_t * inPoint,
  char** outErrMsg
) {
  try {
    Plane * selfCpp = static_cast<Plane *>(self->obj);
    float result = selfCpp->SignedDistance(
    *reinterpret_cast<Vec3 *>(inPoint->obj)
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

