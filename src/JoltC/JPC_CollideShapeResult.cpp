#include "JoltC/JPC_CollideShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeResult_t * JPC_CollideShapeResult_new() {
  JPC_CollideShapeResult_t * cInstance = new JPC_CollideShapeResult_t();
  CollideShapeResult * cppInstance = new CollideShapeResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_Vec3_t * JPC_CollideShapeResult_mContactPointOn1_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideShapeResult_mContactPointOn1_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mContactPointOn1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn1 = *reinterpret_cast<Vec3 *>(mContactPointOn1->obj);
};

JPC_Vec3_t * JPC_CollideShapeResult_mContactPointOn2_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideShapeResult_mContactPointOn2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mContactPointOn2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn2 = *reinterpret_cast<Vec3 *>(mContactPointOn2->obj);
};

JPC_Vec3_t * JPC_CollideShapeResult_mPenetrationAxis_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 resultValue = selfCpp->mPenetrationAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideShapeResult_mPenetrationAxis_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mPenetrationAxis
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationAxis = *reinterpret_cast<Vec3 *>(mPenetrationAxis->obj);
};

float JPC_CollideShapeResult_mPenetrationDepth_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JPC_CollideShapeResult_mPenetrationDepth_Set(
  JPC_CollideShapeResult_t * self,
  float mPenetrationDepth
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JPC_SubShapeID_t * JPC_CollideShapeResult_mSubShapeID1_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_CollideShapeResult_mSubShapeID1_Set(
  JPC_CollideShapeResult_t * self,
  JPC_SubShapeID_t * mSubShapeID1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JPC_SubShapeID_t * JPC_CollideShapeResult_mSubShapeID2_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_CollideShapeResult_mSubShapeID2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JPC_BodyID_t * JPC_CollideShapeResult_mBodyID2_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID2;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_CollideShapeResult_mBodyID2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_BodyID_t * mBodyID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mBodyID2 = *reinterpret_cast<BodyID *>(mBodyID2->obj);
};

JPC_CollideShapeResultFace_t * JPC_CollideShapeResult_mShape1Face_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape1Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JPC_CollideShapeResultFace_t *>(result);
};

void JPC_CollideShapeResult_mShape1Face_Set(
  JPC_CollideShapeResult_t * self,
  JPC_CollideShapeResultFace_t * mShape1Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape1Face = *reinterpret_cast<CollideShapeResultFace *>(mShape1Face->obj);
};

JPC_CollideShapeResultFace_t * JPC_CollideShapeResult_mShape2Face_Get(
  JPC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape2Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JPC_CollideShapeResultFace_t *>(result);
};

void JPC_CollideShapeResult_mShape2Face_Set(
  JPC_CollideShapeResult_t * self,
  JPC_CollideShapeResultFace_t * mShape2Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape2Face = *reinterpret_cast<CollideShapeResultFace *>(mShape2Face->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

