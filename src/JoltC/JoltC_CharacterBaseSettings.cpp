#include "JoltC/JoltC_CharacterBaseSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_CharacterBaseSettings_GetRefCount(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
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

void JoltC_CharacterBaseSettings_AddRef(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterBaseSettings_Release(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
    
    selfCpp->Release();
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

JoltC_Vec3_t * JoltC_CharacterBaseSettings_mUp_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterBaseSettings_mUp_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Vec3_t * mUp,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JoltC_Plane_t * JoltC_CharacterBaseSettings_mSupportingVolume_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  Plane resultValue = selfCpp->mSupportingVolume;
  Plane* result = new Plane(resultValue);
  return reinterpret_cast<JoltC_Plane_t *>(result);
};

void JoltC_CharacterBaseSettings_mSupportingVolume_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Plane_t * mSupportingVolume,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mSupportingVolume = *reinterpret_cast<Plane *>(mSupportingVolume->obj);
};

float JoltC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  float result = selfCpp->mMaxSlopeAngle;
  return result;
};

void JoltC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

const JoltC_Shape_t * JoltC_CharacterBaseSettings_mShape_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const void JoltC_CharacterBaseSettings_mShape_Set(
  JoltC_CharacterBaseSettings_t * self,
  const JoltC_Shape_t * mShape,
  char** outErrMsg
) {
  CharacterBaseSettings * selfCpp = static_cast<CharacterBaseSettings *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

