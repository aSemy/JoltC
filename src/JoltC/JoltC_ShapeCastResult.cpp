#include "JoltC/JPC_ShapeCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCastResult_t * JPC_ShapeCastResult_new() {
  JPC_ShapeCastResult_t * cInstance = new JPC_ShapeCastResult_t();
  ShapeCastResult * cppInstance = new ShapeCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

float JPC_ShapeCastResult_mFraction_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JPC_ShapeCastResult_mFraction_Set(
  JPC_ShapeCastResult_t * self,
  float mFraction
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

bool JPC_ShapeCastResult_mIsBackFaceHit_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  bool result = selfCpp->mIsBackFaceHit;
  return result;
};

void JPC_ShapeCastResult_mIsBackFaceHit_Set(
  JPC_ShapeCastResult_t * self,
  bool mIsBackFaceHit
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mIsBackFaceHit = mIsBackFaceHit;
};

JPC_Vec3_t * JPC_ShapeCastResult_mContactPointOn1_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ShapeCastResult_mContactPointOn1_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mContactPointOn1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn1 = *reinterpret_cast<Vec3 *>(mContactPointOn1->obj);
};

JPC_Vec3_t * JPC_ShapeCastResult_mContactPointOn2_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ShapeCastResult_mContactPointOn2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mContactPointOn2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn2 = *reinterpret_cast<Vec3 *>(mContactPointOn2->obj);
};

JPC_Vec3_t * JPC_ShapeCastResult_mPenetrationAxis_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mPenetrationAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ShapeCastResult_mPenetrationAxis_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mPenetrationAxis
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationAxis = *reinterpret_cast<Vec3 *>(mPenetrationAxis->obj);
};

float JPC_ShapeCastResult_mPenetrationDepth_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JPC_ShapeCastResult_mPenetrationDepth_Set(
  JPC_ShapeCastResult_t * self,
  float mPenetrationDepth
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JPC_SubShapeID_t * JPC_ShapeCastResult_mSubShapeID1_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_ShapeCastResult_mSubShapeID1_Set(
  JPC_ShapeCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JPC_SubShapeID_t * JPC_ShapeCastResult_mSubShapeID2_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JPC_SubShapeID_t *>(result);
};

void JPC_ShapeCastResult_mSubShapeID2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JPC_BodyID_t * JPC_ShapeCastResult_mBodyID2_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID2;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

void JPC_ShapeCastResult_mBodyID2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_BodyID_t * mBodyID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mBodyID2 = *reinterpret_cast<BodyID *>(mBodyID2->obj);
};

JPC_CollideShapeResultFace_t * JPC_ShapeCastResult_mShape1Face_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape1Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JPC_CollideShapeResultFace_t *>(result);
};

void JPC_ShapeCastResult_mShape1Face_Set(
  JPC_ShapeCastResult_t * self,
  JPC_CollideShapeResultFace_t * mShape1Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape1Face = *reinterpret_cast<CollideShapeResultFace *>(mShape1Face->obj);
};

JPC_CollideShapeResultFace_t * JPC_ShapeCastResult_mShape2Face_Get(
  JPC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape2Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JPC_CollideShapeResultFace_t *>(result);
};

void JPC_ShapeCastResult_mShape2Face_Set(
  JPC_ShapeCastResult_t * self,
  JPC_CollideShapeResultFace_t * mShape2Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape2Face = *reinterpret_cast<CollideShapeResultFace *>(mShape2Face->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

