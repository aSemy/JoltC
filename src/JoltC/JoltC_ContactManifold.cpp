#include "JoltC/JoltC_ContactManifold.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ContactManifold_t * JoltC_ContactManifold_new() {
  JoltC_ContactManifold_t * cInstance = new JoltC_ContactManifold_t();
  ContactManifold * cppInstance = new ContactManifold();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_ContactManifold_t * JoltC_ContactManifold_SwapShapes(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactManifold resultValue = selfCpp->SwapShapes();
  ContactManifold* result = new ContactManifold(resultValue);
  return reinterpret_cast<JoltC_ContactManifold_t *>(result);
};

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn1(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->GetWorldSpaceContactPointOn1(
  inIndex
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn2(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->GetWorldSpaceContactPointOn2(
  inIndex
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

//endregion

//region properties

JoltC_RVec3_t * JoltC_ContactManifold_mBaseOffset_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->mBaseOffset;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_ContactManifold_mBaseOffset_Set(
  JoltC_ContactManifold_t * self,
  JoltC_RVec3_t * mBaseOffset
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mBaseOffset = *reinterpret_cast<RVec3 *>(mBaseOffset->obj);
};

JoltC_Vec3_t * JoltC_ContactManifold_mWorldSpaceNormal_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  Vec3 resultValue = selfCpp->mWorldSpaceNormal;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ContactManifold_mWorldSpaceNormal_Set(
  JoltC_ContactManifold_t * self,
  JoltC_Vec3_t * mWorldSpaceNormal
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mWorldSpaceNormal = *reinterpret_cast<Vec3 *>(mWorldSpaceNormal->obj);
};

float JoltC_ContactManifold_mPenetrationDepth_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JoltC_ContactManifold_mPenetrationDepth_Set(
  JoltC_ContactManifold_t * self,
  float mPenetrationDepth
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID1_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_ContactManifold_mSubShapeID1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID2_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_ContactManifold_mSubShapeID2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn1_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints resultValue = selfCpp->mRelativeContactPointsOn1;
  ContactPoints* result = new ContactPoints(resultValue);
  return reinterpret_cast<JoltC_ContactPoints_t *>(result);
};

void JoltC_ContactManifold_mRelativeContactPointsOn1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn1 = *reinterpret_cast<ContactPoints *>(mRelativeContactPointsOn1->obj);
};

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn2_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints resultValue = selfCpp->mRelativeContactPointsOn2;
  ContactPoints* result = new ContactPoints(resultValue);
  return reinterpret_cast<JoltC_ContactPoints_t *>(result);
};

void JoltC_ContactManifold_mRelativeContactPointsOn2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn2 = *reinterpret_cast<ContactPoints *>(mRelativeContactPointsOn2->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

