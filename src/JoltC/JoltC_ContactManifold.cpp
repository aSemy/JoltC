#include "JoltC/JPC_ContactManifold.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ContactManifold_t * JPC_ContactManifold_new() {
  JPC_ContactManifold_t * cInstance = new JPC_ContactManifold_t();
  ContactManifold * cppInstance = new ContactManifold();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_ContactManifold_t * JPC_ContactManifold_SwapShapes(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactManifold resultValue = selfCpp->SwapShapes();
  ContactManifold* result = new ContactManifold(resultValue);
  return reinterpret_cast<JPC_ContactManifold_t *>(result);
};

JPC_RVec3_t * JPC_ContactManifold_GetWorldSpaceContactPointOn1(
  JPC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->GetWorldSpaceContactPointOn1(
  inIndex
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_ContactManifold_GetWorldSpaceContactPointOn2(
  JPC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->GetWorldSpaceContactPointOn2(
  inIndex
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

//endregion functions

//region properties

JPC_RVec3_t * JPC_ContactManifold_mBaseOffset_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 resultValue = selfCpp->mBaseOffset;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_ContactManifold_mBaseOffset_Set(
  JPC_ContactManifold_t * self,
  JPC_RVec3_t * mBaseOffset
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mBaseOffset = *reinterpret_cast<RVec3 *>(mBaseOffset->obj);
};

JPC_Vec3_t * JPC_ContactManifold_mWorldSpaceNormal_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  Vec3 resultValue = selfCpp->mWorldSpaceNormal;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ContactManifold_mWorldSpaceNormal_Set(
  JPC_ContactManifold_t * self,
  JPC_Vec3_t * mWorldSpaceNormal
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mWorldSpaceNormal = *reinterpret_cast<Vec3 *>(mWorldSpaceNormal->obj);
};

float JPC_ContactManifold_mPenetrationDepth_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JPC_ContactManifold_mPenetrationDepth_Set(
  JPC_ContactManifold_t * self,
  float mPenetrationDepth
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JPC_SubShapeID_t * JPC_ContactManifold_mSubShapeID1_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_ContactManifold_mSubShapeID1_Set(
  JPC_ContactManifold_t * self,
  JPC_SubShapeID_t * mSubShapeID1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JPC_SubShapeID_t * JPC_ContactManifold_mSubShapeID2_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_ContactManifold_mSubShapeID2_Set(
  JPC_ContactManifold_t * self,
  JPC_SubShapeID_t * mSubShapeID2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JPC_ContactPoints_t * JPC_ContactManifold_mRelativeContactPointsOn1_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints resultValue = selfCpp->mRelativeContactPointsOn1;
  ContactPoints* result = new ContactPoints(resultValue);
  return reinterpret_cast<JPC_ContactPoints_t *>(result);
};

void JPC_ContactManifold_mRelativeContactPointsOn1_Set(
  JPC_ContactManifold_t * self,
  JPC_ContactPoints_t * mRelativeContactPointsOn1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn1 = *reinterpret_cast<ContactPoints *>(mRelativeContactPointsOn1->obj);
};

JPC_ContactPoints_t * JPC_ContactManifold_mRelativeContactPointsOn2_Get(
  JPC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints resultValue = selfCpp->mRelativeContactPointsOn2;
  ContactPoints* result = new ContactPoints(resultValue);
  return reinterpret_cast<JPC_ContactPoints_t *>(result);
};

void JPC_ContactManifold_mRelativeContactPointsOn2_Set(
  JPC_ContactManifold_t * self,
  JPC_ContactPoints_t * mRelativeContactPointsOn2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn2 = *reinterpret_cast<ContactPoints *>(mRelativeContactPointsOn2->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

