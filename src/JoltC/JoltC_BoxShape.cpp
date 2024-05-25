#include "JoltC/JPC_BoxShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BoxShape_t * JPC_BoxShape_new(
  JPC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_BoxShape_t * cInstance = new JPC_BoxShape_t();
  BoxShape * cppInstance = new BoxShape(
    *reinterpret_cast<Vec3 *>(inHalfExtent->obj),
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Vec3_t * JPC_BoxShape_GetHalfExtent(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetHalfExtent();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_BoxShape_GetDensity(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_BoxShape_SetDensity(
  JPC_BoxShape_t * self,
  float inDensity
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_BoxShape_GetRefCount(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_BoxShape_AddRef(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_BoxShape_Release(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_BoxShape_GetType(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_BoxShape_GetSubType(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_BoxShape_MustBeStatic(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_BoxShape_GetLocalBounds(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_BoxShape_GetWorldSpaceBounds(
  JPC_BoxShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_BoxShape_GetCenterOfMass(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_BoxShape_GetUserData(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_BoxShape_SetUserData(
  JPC_BoxShape_t * self,
  unsigned long long int inUserData
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_BoxShape_GetSubShapeIDBitsRecursive(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_BoxShape_GetInnerRadius(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_BoxShape_GetMassProperties(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_BoxShape_GetMaterial(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_BoxShape_GetSurfaceNormal(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_BoxShape_GetSubShapeUserData(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_BoxShape_GetSubShapeTransformedShape(
  JPC_BoxShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

float JPC_BoxShape_GetVolume(
  JPC_BoxShape_t * self
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_BoxShape_IsValidScale(
  JPC_BoxShape_t * self,
  const JPC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_BoxShape_ScaleShape(
  JPC_BoxShape_t * self,
  const JPC_Vec3_t * inScale
) {
  BoxShape * selfCpp = static_cast<BoxShape *>(self->obj);
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

