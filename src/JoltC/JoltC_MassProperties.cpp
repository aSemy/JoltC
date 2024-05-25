#include "JoltC/JoltC_MassProperties.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MassProperties_t * JoltC_MassProperties_new(
  char** outErrMsg
) {
  try {
    JoltC_MassProperties_t * cInstance = new JoltC_MassProperties_t();
    MassProperties * cppInstance = new MassProperties();
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

void JoltC_MassProperties_SetMassAndInertiaOfSolidBox(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inBoxSize,
  float inDensity,
  char** outErrMsg
) {
  try {
    MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
    
    selfCpp->SetMassAndInertiaOfSolidBox(
    *reinterpret_cast<Vec3 *>(inBoxSize->obj),
    inDensity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_MassProperties_ScaleToMass(
  JoltC_MassProperties_t * self,
  float inMass,
  char** outErrMsg
) {
  try {
    MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
    
    selfCpp->ScaleToMass(
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

JoltC_Vec3_t * JoltC_MassProperties_sGetEquivalentSolidBoxSize(
  float inMass,
  const JoltC_Vec3_t * inInertiaDiagonal,
  char** outErrMsg
) {
  try {
    Vec3 resultValue = MassProperties::sGetEquivalentSolidBoxSize(
    inMass,
    *reinterpret_cast<Vec3 *>(inInertiaDiagonal->obj)
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

void JoltC_MassProperties_Rotate(
  JoltC_MassProperties_t * self,
  const JoltC_Mat44_t * inRotation,
  char** outErrMsg
) {
  try {
    MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
    
    selfCpp->Rotate(
    *reinterpret_cast<Mat44 *>(inRotation->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_MassProperties_Translate(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
    
    selfCpp->Translate(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_MassProperties_Scale(
  JoltC_MassProperties_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
    
    selfCpp->Scale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
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

//region properties

float JoltC_MassProperties_mMass_Get(
  JoltC_MassProperties_t * self,
  char** outErrMsg
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

void JoltC_MassProperties_mMass_Set(
  JoltC_MassProperties_t * self,
  float mMass,
  char** outErrMsg
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mMass = mMass;
};

JoltC_Mat44_t * JoltC_MassProperties_mInertia_Get(
  JoltC_MassProperties_t * self,
  char** outErrMsg
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  Mat44 resultValue = selfCpp->mInertia;
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

void JoltC_MassProperties_mInertia_Set(
  JoltC_MassProperties_t * self,
  JoltC_Mat44_t * mInertia,
  char** outErrMsg
) {
  MassProperties * selfCpp = static_cast<MassProperties *>(self->obj);
  selfCpp->mInertia = *reinterpret_cast<Mat44 *>(mInertia->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

