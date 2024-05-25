#include "JoltC/JoltC_CollideShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeSettings_t * JoltC_CollideShapeSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_CollideShapeSettings_t * cInstance = new JoltC_CollideShapeSettings_t();
    CollideShapeSettings * cppInstance = new CollideShapeSettings();
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

//region properties

float JoltC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mMaxSeparationDistance;
  return result;
};

void JoltC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mMaxSeparationDistance = mMaxSeparationDistance;
};

JoltC_EBackFaceMode JoltC_CollideShapeSettings_mBackFaceMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_CollideShapeSettings_mBackFaceMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

JoltC_EActiveEdgeMode JoltC_CollideShapeSettings_mActiveEdgeMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JoltC_EActiveEdgeMode>(static_cast<int>(result));
};

void JoltC_CollideShapeSettings_mActiveEdgeMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JoltC_ECollectFacesMode JoltC_CollideShapeSettings_mCollectFacesMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JoltC_ECollectFacesMode>(static_cast<int>(result));
};

void JoltC_CollideShapeSettings_mCollectFacesMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JoltC_CollideShapeSettings_mCollisionTolerance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JoltC_CollideShapeSettings_mCollisionTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mCollisionTolerance,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JoltC_CollideShapeSettings_mPenetrationTolerance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JoltC_CollideShapeSettings_mPenetrationTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mPenetrationTolerance,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JoltC_Vec3_t * JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection,
  char** outErrMsg
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

