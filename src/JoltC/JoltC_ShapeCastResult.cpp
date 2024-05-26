#include "JoltC/JoltC_ShapeCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCastResult_t * JoltC_ShapeCastResult_new() {
  JoltC_ShapeCastResult_t * cInstance = new JoltC_ShapeCastResult_t();
  ShapeCastResult * cppInstance = new ShapeCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

float JoltC_ShapeCastResult_mFraction_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JoltC_ShapeCastResult_mFraction_Set(
  JoltC_ShapeCastResult_t * self,
  float mFraction
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

bool JoltC_ShapeCastResult_mIsBackFaceHit_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  bool result = selfCpp->mIsBackFaceHit;
  return result;
};

void JoltC_ShapeCastResult_mIsBackFaceHit_Set(
  JoltC_ShapeCastResult_t * self,
  bool mIsBackFaceHit
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mIsBackFaceHit = mIsBackFaceHit;
};

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn1_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ShapeCastResult_mContactPointOn1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn1 = *reinterpret_cast<Vec3 *>(mContactPointOn1->obj);
};

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ShapeCastResult_mContactPointOn2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn2 = *reinterpret_cast<Vec3 *>(mContactPointOn2->obj);
};

JoltC_Vec3_t * JoltC_ShapeCastResult_mPenetrationAxis_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 resultValue = selfCpp->mPenetrationAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ShapeCastResult_mPenetrationAxis_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationAxis = *reinterpret_cast<Vec3 *>(mPenetrationAxis->obj);
};

float JoltC_ShapeCastResult_mPenetrationDepth_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JoltC_ShapeCastResult_mPenetrationDepth_Set(
  JoltC_ShapeCastResult_t * self,
  float mPenetrationDepth
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID1_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_ShapeCastResult_mSubShapeID1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_ShapeCastResult_mSubShapeID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JoltC_BodyID_t * JoltC_ShapeCastResult_mBodyID2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID2;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_ShapeCastResult_mBodyID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_BodyID_t * mBodyID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mBodyID2 = *reinterpret_cast<BodyID *>(mBodyID2->obj);
};

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape1Face_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape1Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResultFace_t *>(result);
};

void JoltC_ShapeCastResult_mShape1Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape1Face = *reinterpret_cast<CollideShapeResultFace *>(mShape1Face->obj);
};

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape2Face_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape2Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResultFace_t *>(result);
};

void JoltC_ShapeCastResult_mShape2Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape2Face = *reinterpret_cast<CollideShapeResultFace *>(mShape2Face->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

