#include "JoltC/JPC_Shape_ShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_Shape_ShapeResult_IsValid(
  JPC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  bool result = selfCpp->IsValid();
  return result;
};

bool JPC_Shape_ShapeResult_HasError(
  JPC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  bool result = selfCpp->HasError();
  return result;
};

const JPC_JPHString_t * JPC_Shape_ShapeResult_GetError(
  JPC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  const JPHString& resultRef = selfCpp->GetError();
  const JPHString * result = &resultRef;
  return reinterpret_cast<const JPC_JPHString_t *>(result);
};

JPC_Shape_t * JPC_Shape_ShapeResult_Get(
  JPC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  Shape * result = selfCpp->Get();
  return reinterpret_cast<JPC_Shape_t *>(result);
};

void JPC_Shape_ShapeResult_Clear(
  JPC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  
  selfCpp->Clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

