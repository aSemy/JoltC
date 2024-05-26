#include "JoltC/JoltC_CompoundShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_StaticCompoundShape_t into JoltC_CompoundShape_t.
 */
JoltC_CompoundShape_t * JoltC_CompoundShape_From_StaticCompoundShape(
  JoltC_StaticCompoundShape_t * subtype
) {
  return (JoltC_CompoundShape_t*) subtype;
};

//endregion

//region functions

long JoltC_CompoundShape_GetNumSubShapes(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  long result = selfCpp->GetNumSubShapes();
  return result;
};

const JoltC_CompoundShapeSubShape_t * JoltC_CompoundShape_GetSubShape(
  JoltC_CompoundShape_t * self,
  long inIdx
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
  inIdx
  );
  const CompoundShapeSubShape * result = &resultRef;
  return reinterpret_cast<const JoltC_CompoundShapeSubShape_t *>(result);
};

unsigned long JoltC_CompoundShape_GetRefCount(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CompoundShape_AddRef(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CompoundShape_Release(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_CompoundShape_GetType(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_CompoundShape_GetSubType(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_CompoundShape_MustBeStatic(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_CompoundShape_GetLocalBounds(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_CompoundShape_GetWorldSpaceBounds(
  JoltC_CompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_CompoundShape_GetCenterOfMass(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_CompoundShape_GetUserData(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_CompoundShape_SetUserData(
  JoltC_CompoundShape_t * self,
  unsigned long long int inUserData
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_CompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_CompoundShape_GetInnerRadius(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_CompoundShape_GetMassProperties(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_CompoundShape_GetMaterial(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_CompoundShape_GetSurfaceNormal(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_CompoundShape_GetSubShapeUserData(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_CompoundShape_GetSubShapeTransformedShape(
  JoltC_CompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

float JoltC_CompoundShape_GetVolume(
  JoltC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_CompoundShape_IsValidScale(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_CompoundShape_ScaleShape(
  JoltC_CompoundShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

