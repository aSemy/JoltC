#include "JoltC/JPC_OffsetCenterOfMassShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OffsetCenterOfMassShape_t * JPC_OffsetCenterOfMassShape_new(
  const JPC_Shape_t * inShape,
  const JPC_Vec3_t * inOffset
) {
  JPC_OffsetCenterOfMassShape_t * cInstance = new JPC_OffsetCenterOfMassShape_t();
  OffsetCenterOfMassShape * cppInstance = new OffsetCenterOfMassShape(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inOffset->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_Shape_t * JPC_OffsetCenterOfMassShape_GetInnerShape(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

unsigned long JPC_OffsetCenterOfMassShape_GetRefCount(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_OffsetCenterOfMassShape_AddRef(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_OffsetCenterOfMassShape_Release(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_OffsetCenterOfMassShape_GetType(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_OffsetCenterOfMassShape_GetSubType(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_OffsetCenterOfMassShape_MustBeStatic(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_OffsetCenterOfMassShape_GetLocalBounds(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_OffsetCenterOfMassShape_GetWorldSpaceBounds(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_OffsetCenterOfMassShape_GetCenterOfMass(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_OffsetCenterOfMassShape_GetUserData(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_OffsetCenterOfMassShape_SetUserData(
  JPC_OffsetCenterOfMassShape_t * self,
  unsigned long long int inUserData
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_OffsetCenterOfMassShape_GetSubShapeIDBitsRecursive(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_OffsetCenterOfMassShape_GetInnerRadius(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_OffsetCenterOfMassShape_GetMassProperties(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_OffsetCenterOfMassShape_GetMaterial(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_OffsetCenterOfMassShape_GetSurfaceNormal(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_OffsetCenterOfMassShape_GetSubShapeUserData(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_OffsetCenterOfMassShape_GetSubShapeTransformedShape(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
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

float JPC_OffsetCenterOfMassShape_GetVolume(
  JPC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_OffsetCenterOfMassShape_IsValidScale(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_OffsetCenterOfMassShape_ScaleShape(
  JPC_OffsetCenterOfMassShape_t * self,
  const JPC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
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

