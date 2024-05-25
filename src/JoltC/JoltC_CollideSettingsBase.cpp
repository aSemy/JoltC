#include "JoltC/JPC_CollideSettingsBase.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_EActiveEdgeMode JPC_CollideSettingsBase_mActiveEdgeMode_Get(
  JPC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JPC_EActiveEdgeMode>(static_cast<int>(result));
};

void JPC_CollideSettingsBase_mActiveEdgeMode_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JPC_ECollectFacesMode JPC_CollideSettingsBase_mCollectFacesMode_Get(
  JPC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JPC_ECollectFacesMode>(static_cast<int>(result));
};

void JPC_CollideSettingsBase_mCollectFacesMode_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JPC_CollideSettingsBase_mCollisionTolerance_Get(
  JPC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JPC_CollideSettingsBase_mCollisionTolerance_Set(
  JPC_CollideSettingsBase_t * self,
  float mCollisionTolerance
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JPC_CollideSettingsBase_mPenetrationTolerance_Get(
  JPC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JPC_CollideSettingsBase_mPenetrationTolerance_Set(
  JPC_CollideSettingsBase_t * self,
  float mPenetrationTolerance
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JPC_Vec3_t * JPC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JPC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

