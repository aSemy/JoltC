#include "JoltC/JoltC_OffsetCenterOfMassShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OffsetCenterOfMassShape_t * JoltC_OffsetCenterOfMassShape_new(
  const JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inOffset
) {
  JoltC_OffsetCenterOfMassShape_t * cInstance = new JoltC_OffsetCenterOfMassShape_t();
  OffsetCenterOfMassShape * cppInstance = new OffsetCenterOfMassShape(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inOffset->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const JoltC_Shape_t * JoltC_OffsetCenterOfMassShape_GetInnerShape(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

unsigned long JoltC_OffsetCenterOfMassShape_GetRefCount(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_OffsetCenterOfMassShape_AddRef(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_OffsetCenterOfMassShape_Release(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_OffsetCenterOfMassShape_GetType(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_OffsetCenterOfMassShape_GetSubType(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_OffsetCenterOfMassShape_MustBeStatic(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetLocalBounds(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_OffsetCenterOfMassShape_GetWorldSpaceBounds(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetCenterOfMass(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_OffsetCenterOfMassShape_GetUserData(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_OffsetCenterOfMassShape_SetUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  unsigned long long int inUserData
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_OffsetCenterOfMassShape_GetSubShapeIDBitsRecursive(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_OffsetCenterOfMassShape_GetInnerRadius(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_OffsetCenterOfMassShape_GetMassProperties(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_OffsetCenterOfMassShape_GetMaterial(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShape_GetSurfaceNormal(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_OffsetCenterOfMassShape_GetSubShapeUserData(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_OffsetCenterOfMassShape_GetSubShapeTransformedShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
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
  return reinterpret_cast<JoltC_TransformedShape_t *>(result);
};

float JoltC_OffsetCenterOfMassShape_GetVolume(
  JoltC_OffsetCenterOfMassShape_t * self
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_OffsetCenterOfMassShape_IsValidScale(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShape_ScaleShape(
  JoltC_OffsetCenterOfMassShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  OffsetCenterOfMassShape * selfCpp = static_cast<OffsetCenterOfMassShape *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ScaleShape(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

