#include "JoltC/JPC_CompoundShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_CompoundShape_GetNumSubShapes(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  long result = selfCpp->GetNumSubShapes();
  return result;
};

const JPC_CompoundShapeSubShape_t * JPC_CompoundShape_GetSubShape(
  JPC_CompoundShape_t * self,
  long inIdx
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
  inIdx
  );
  const CompoundShapeSubShape * result = &resultRef;
  return reinterpret_cast<const JPC_CompoundShapeSubShape_t *>(result);
};

unsigned long JPC_CompoundShape_GetRefCount(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CompoundShape_AddRef(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CompoundShape_Release(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_CompoundShape_GetType(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_CompoundShape_GetSubType(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_CompoundShape_MustBeStatic(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_CompoundShape_GetLocalBounds(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_CompoundShape_GetWorldSpaceBounds(
  JPC_CompoundShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_CompoundShape_GetCenterOfMass(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CompoundShape_GetUserData(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_CompoundShape_SetUserData(
  JPC_CompoundShape_t * self,
  unsigned long long int inUserData
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_CompoundShape_GetSubShapeIDBitsRecursive(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_CompoundShape_GetInnerRadius(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_CompoundShape_GetMassProperties(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_CompoundShape_GetMaterial(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_CompoundShape_GetSurfaceNormal(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CompoundShape_GetSubShapeUserData(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_CompoundShape_GetSubShapeTransformedShape(
  JPC_CompoundShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
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
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

float JPC_CompoundShape_GetVolume(
  JPC_CompoundShape_t * self
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_CompoundShape_IsValidScale(
  JPC_CompoundShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_CompoundShape_ScaleShape(
  JPC_CompoundShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CompoundShape * selfCpp = static_cast<CompoundShape *>(self->obj);
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

