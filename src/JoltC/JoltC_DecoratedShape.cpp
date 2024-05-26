#include "JoltC/JoltC_DecoratedShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ScaledShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_ScaledShape(
  JoltC_ScaledShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_OffsetCenterOfMassShape(
  JoltC_OffsetCenterOfMassShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_RotatedTranslatedShape_t into JoltC_DecoratedShape_t.
 */
JoltC_DecoratedShape_t * JoltC_DecoratedShape_From_RotatedTranslatedShape(
  JoltC_RotatedTranslatedShape_t * subtype
) {
  return (JoltC_DecoratedShape_t*) subtype;
};

//endregion

//region functions

const JoltC_Shape_t * JoltC_DecoratedShape_GetInnerShape(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

unsigned long JoltC_DecoratedShape_GetRefCount(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_DecoratedShape_AddRef(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_DecoratedShape_Release(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_DecoratedShape_GetType(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_DecoratedShape_GetSubType(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_DecoratedShape_MustBeStatic(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_DecoratedShape_GetLocalBounds(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_DecoratedShape_GetWorldSpaceBounds(
  JoltC_DecoratedShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_DecoratedShape_GetCenterOfMass(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_DecoratedShape_GetUserData(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_DecoratedShape_SetUserData(
  JoltC_DecoratedShape_t * self,
  unsigned long long int inUserData
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_DecoratedShape_GetInnerRadius(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_DecoratedShape_GetMassProperties(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_DecoratedShape_GetMaterial(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_DecoratedShape_GetSurfaceNormal(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_DecoratedShape_GetSubShapeUserData(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_DecoratedShape_GetSubShapeTransformedShape(
  JoltC_DecoratedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

float JoltC_DecoratedShape_GetVolume(
  JoltC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_DecoratedShape_IsValidScale(
  JoltC_DecoratedShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShape_ScaleShape(
  JoltC_DecoratedShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

