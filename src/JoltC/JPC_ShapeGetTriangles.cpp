#include "JoltC/JPC_ShapeGetTriangles.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeGetTriangles_t * JPC_ShapeGetTriangles_new(
  JPC_Shape_t * inShape,
  const JPC_AABox_t * inBox,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale
) {
  JPC_ShapeGetTriangles_t * cInstance = new JPC_ShapeGetTriangles_t();
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

//endregion constructors

//region functions

long JPC_ShapeGetTriangles_GetNumTriangles(
  JPC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  long result = selfCpp->GetNumTriangles();
  return result;
};

long JPC_ShapeGetTriangles_GetVerticesSize(
  JPC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  long result = selfCpp->GetVerticesSize();
  return result;
};

const void* JPC_ShapeGetTriangles_GetVerticesData(
  JPC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  const void* result = selfCpp->GetVerticesData();
  return result;
};

const JPC_PhysicsMaterial_t * JPC_ShapeGetTriangles_GetMaterial(
  JPC_ShapeGetTriangles_t * self,
  long inTriangle
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  inTriangle
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

