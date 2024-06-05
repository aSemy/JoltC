#include "JoltC/JoltC_ShapeGetTriangles.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeGetTriangles_t * JoltC_ShapeGetTriangles_new(
  JoltC_Shape_t * inShape,
  JoltC_AABox_t * inBox,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale
) {
  JoltC_ShapeGetTriangles_t * cInstance = new JoltC_ShapeGetTriangles_t();
  ShapeGetTriangles * cppInstance = new ShapeGetTriangles(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<AABox *>(inBox->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

long JoltC_ShapeGetTriangles_GetNumTriangles(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  long result = selfCpp->GetNumTriangles();
  return result;
};

long JoltC_ShapeGetTriangles_GetVerticesSize(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  long result = selfCpp->GetVerticesSize();
  return result;
};

const void* JoltC_ShapeGetTriangles_GetVerticesData(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  const void* result = selfCpp->GetVerticesData();
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_ShapeGetTriangles_GetMaterial(
  JoltC_ShapeGetTriangles_t * self,
  long inTriangle
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    inTriangle
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

