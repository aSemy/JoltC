#include "JoltC/JoltC_StaticCompoundShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_StaticCompoundShape_GetNumSubShapes(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  long result = selfCpp->GetNumSubShapes();
  return result;
};

const JoltC_CompoundShapeSubShape_t * JoltC_StaticCompoundShape_GetSubShape(
  JoltC_StaticCompoundShape_t * self,
  long inIdx
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
  inIdx
  );
  const CompoundShapeSubShape * result = &resultRef;
  return reinterpret_cast<const JoltC_CompoundShapeSubShape_t *>(result);
};

unsigned long JoltC_StaticCompoundShape_GetRefCount(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_StaticCompoundShape_AddRef(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_StaticCompoundShape_Release(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_StaticCompoundShape_GetType(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_StaticCompoundShape_GetSubType(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_StaticCompoundShape_MustBeStatic(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_StaticCompoundShape_GetLocalBounds(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_StaticCompoundShape_GetWorldSpaceBounds(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetCenterOfMass(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_StaticCompoundShape_GetUserData(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_StaticCompoundShape_SetUserData(
  JoltC_StaticCompoundShape_t * self,
  unsigned long long int inUserData
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_StaticCompoundShape_GetInnerRadius(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_StaticCompoundShape_GetMassProperties(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_StaticCompoundShape_GetMaterial(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetSurfaceNormal(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_StaticCompoundShape_GetSubShapeUserData(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_StaticCompoundShape_GetSubShapeTransformedShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

float JoltC_StaticCompoundShape_GetVolume(
  JoltC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_StaticCompoundShape_IsValidScale(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShape_ScaleShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

