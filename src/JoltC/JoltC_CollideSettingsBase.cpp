#include "JoltC/JoltC_CollideSettingsBase.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_EActiveEdgeMode JoltC_CollideSettingsBase_mActiveEdgeMode_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JoltC_EActiveEdgeMode>(static_cast<int>(result));
};

void JoltC_CollideSettingsBase_mActiveEdgeMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JoltC_ECollectFacesMode JoltC_CollideSettingsBase_mCollectFacesMode_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JoltC_ECollectFacesMode>(static_cast<int>(result));
};

void JoltC_CollideSettingsBase_mCollectFacesMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JoltC_CollideSettingsBase_mCollisionTolerance_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JoltC_CollideSettingsBase_mCollisionTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mCollisionTolerance,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JoltC_CollideSettingsBase_mPenetrationTolerance_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JoltC_CollideSettingsBase_mPenetrationTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mPenetrationTolerance,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JoltC_Vec3_t * JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection,
  char** outErrMsg
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

