#include "JoltC/JPC_TaperedCapsuleShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_TaperedCapsuleShape_GetDensity(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_TaperedCapsuleShape_SetDensity(
  JPC_TaperedCapsuleShape_t * self,
  float inDensity
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_TaperedCapsuleShape_GetRefCount(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_TaperedCapsuleShape_AddRef(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_TaperedCapsuleShape_Release(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_TaperedCapsuleShape_GetType(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_TaperedCapsuleShape_GetSubType(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_TaperedCapsuleShape_MustBeStatic(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_TaperedCapsuleShape_GetLocalBounds(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_TaperedCapsuleShape_GetCenterOfMass(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_TaperedCapsuleShape_GetUserData(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_TaperedCapsuleShape_SetUserData(
  JPC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_TaperedCapsuleShape_GetInnerRadius(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_TaperedCapsuleShape_GetMassProperties(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_TaperedCapsuleShape_GetMaterial(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_TaperedCapsuleShape_GetSurfaceNormal(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_TaperedCapsuleShape_GetSubShapeUserData(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj),
  *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

float JPC_TaperedCapsuleShape_GetVolume(
  JPC_TaperedCapsuleShape_t * self
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_TaperedCapsuleShape_IsValidScale(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_TaperedCapsuleShape_ScaleShape(
  JPC_TaperedCapsuleShape_t * self,
  const JPC_Vec3_t * inScale
) {
  TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ScaleShape(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

