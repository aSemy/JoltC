#include "JoltC/JPC_HeightFieldShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JPC_HeightFieldShape_GetSampleCount(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  long result = selfCpp->GetSampleCount();
  return result;
};

long JPC_HeightFieldShape_GetBlockSize(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  long result = selfCpp->GetBlockSize();
  return result;
};

JPC_Vec3_t * JPC_HeightFieldShape_GetPosition(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetPosition(
  inX,
  inY
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

bool JPC_HeightFieldShape_IsNoCollision(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->IsNoCollision(
  inX,
  inY
  );
  return result;
};

float JPC_HeightFieldShape_GetMinHeightValue(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetMinHeightValue();
  return result;
};

float JPC_HeightFieldShape_GetMaxHeightValue(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetMaxHeightValue();
  return result;
};

void JPC_HeightFieldShape_GetHeights(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_FloatMemRef_t * outHeights,
  long inHeightsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->GetHeights(
  inX,
  inY,
  inSizeX,
  inSizeY,
  reinterpret_cast<FloatMemRef *>(outHeights->obj),
  inHeightsStride
  );
};

void JPC_HeightFieldShape_SetHeights(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JPC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->SetHeights(
  inX,
  inY,
  inSizeX,
  inSizeY,
  reinterpret_cast<FloatMemRef *>(inHeights->obj),
  inHeightsStride,
  *reinterpret_cast<TempAllocator *>(inAllocator->obj),
  inActiveEdgeCosThresholdAngle
  );
};

void JPC_HeightFieldShape_GetMaterials(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->GetMaterials(
  inX,
  inY,
  inSizeX,
  inSizeY,
  reinterpret_cast<Uint8MemRef *>(outMaterials->obj),
  inMaterialsStride
  );
};

bool JPC_HeightFieldShape_SetMaterials(
  JPC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JPC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JPC_PhysicsMaterialList_t * inMaterialList,
  JPC_TempAllocator_t * inAllocator
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->SetMaterials(
  inX,
  inY,
  inSizeX,
  inSizeY,
  reinterpret_cast<Uint8MemRef *>(inMaterials->obj),
  inMaterialsStride,
  reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj),
  *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
  return result;
};

unsigned long JPC_HeightFieldShape_GetRefCount(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_HeightFieldShape_AddRef(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_HeightFieldShape_Release(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_HeightFieldShape_GetType(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_HeightFieldShape_GetSubType(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_HeightFieldShape_MustBeStatic(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_HeightFieldShape_GetLocalBounds(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_HeightFieldShape_GetWorldSpaceBounds(
  JPC_HeightFieldShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_HeightFieldShape_GetCenterOfMass(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_HeightFieldShape_GetUserData(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_HeightFieldShape_SetUserData(
  JPC_HeightFieldShape_t * self,
  unsigned long long int inUserData
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_HeightFieldShape_GetInnerRadius(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_HeightFieldShape_GetMassProperties(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_HeightFieldShape_GetMaterial(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_HeightFieldShape_GetSurfaceNormal(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_HeightFieldShape_GetSubShapeUserData(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_HeightFieldShape_GetSubShapeTransformedShape(
  JPC_HeightFieldShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
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

float JPC_HeightFieldShape_GetVolume(
  JPC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_HeightFieldShape_IsValidScale(
  JPC_HeightFieldShape_t * self,
  const JPC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_HeightFieldShape_ScaleShape(
  JPC_HeightFieldShape_t * self,
  const JPC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
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

