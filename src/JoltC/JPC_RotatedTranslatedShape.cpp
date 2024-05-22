#include "JoltC/JPC_RotatedTranslatedShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Quat_t * JPC_RotatedTranslatedShape_GetRotation(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  Quat resultValue = selfCpp->GetRotation();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetPosition(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetPosition();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_Shape_t * JPC_RotatedTranslatedShape_GetInnerShape(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

unsigned long JPC_RotatedTranslatedShape_GetRefCount(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_RotatedTranslatedShape_AddRef(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_RotatedTranslatedShape_Release(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_RotatedTranslatedShape_GetType(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_RotatedTranslatedShape_GetSubType(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_RotatedTranslatedShape_MustBeStatic(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_RotatedTranslatedShape_GetLocalBounds(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_RotatedTranslatedShape_GetWorldSpaceBounds(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetCenterOfMass(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_RotatedTranslatedShape_GetUserData(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_RotatedTranslatedShape_SetUserData(
  JPC_RotatedTranslatedShape_t * self,
  unsigned long long int inUserData
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_RotatedTranslatedShape_GetSubShapeIDBitsRecursive(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_RotatedTranslatedShape_GetInnerRadius(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_RotatedTranslatedShape_GetMassProperties(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_RotatedTranslatedShape_GetMaterial(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_RotatedTranslatedShape_GetSurfaceNormal(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_RotatedTranslatedShape_GetSubShapeUserData(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_RotatedTranslatedShape_GetSubShapeTransformedShape(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

float JPC_RotatedTranslatedShape_GetVolume(
  JPC_RotatedTranslatedShape_t * self
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_RotatedTranslatedShape_IsValidScale(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Vec3_t * inScale
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_RotatedTranslatedShape_ScaleShape(
  JPC_RotatedTranslatedShape_t * self,
  const JPC_Vec3_t * inScale
) {
  RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

