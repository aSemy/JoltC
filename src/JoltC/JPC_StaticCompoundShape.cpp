#include "JoltC/JPC_StaticCompoundShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_StaticCompoundShape_GetNumSubShapes(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  long result = selfCpp->GetNumSubShapes();
  return result;
};

const JPC_CompoundShapeSubShape_t * JPC_StaticCompoundShape_GetSubShape(
  JPC_StaticCompoundShape_t * self,
  long inIdx
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
  inIdx
  );
  const CompoundShapeSubShape * result = &resultRef;
  return reinterpret_cast<const JPC_CompoundShapeSubShape_t *>(result);
};

unsigned long JPC_StaticCompoundShape_GetRefCount(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_StaticCompoundShape_AddRef(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_StaticCompoundShape_Release(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_StaticCompoundShape_GetType(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_StaticCompoundShape_GetSubType(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_StaticCompoundShape_MustBeStatic(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_StaticCompoundShape_GetLocalBounds(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_StaticCompoundShape_GetWorldSpaceBounds(
  JPC_StaticCompoundShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_StaticCompoundShape_GetCenterOfMass(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_StaticCompoundShape_GetUserData(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_StaticCompoundShape_SetUserData(
  JPC_StaticCompoundShape_t * self,
  unsigned long long int inUserData
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_StaticCompoundShape_GetInnerRadius(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_StaticCompoundShape_GetMassProperties(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_StaticCompoundShape_GetMaterial(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_StaticCompoundShape_GetSurfaceNormal(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_StaticCompoundShape_GetSubShapeUserData(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_StaticCompoundShape_GetSubShapeTransformedShape(
  JPC_StaticCompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
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
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

float JPC_StaticCompoundShape_GetVolume(
  JPC_StaticCompoundShape_t * self
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_StaticCompoundShape_IsValidScale(
  JPC_StaticCompoundShape_t * self,
  const JPC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_StaticCompoundShape_ScaleShape(
  JPC_StaticCompoundShape_t * self,
  const JPC_Vec3_t * inScale
) {
  StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

