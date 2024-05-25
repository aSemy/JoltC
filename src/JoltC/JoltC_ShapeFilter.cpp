#include "JoltC/JPC_ShapeFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeFilter_t * JPC_ShapeFilter_new() {
  JPC_ShapeFilter_t * cInstance = new JPC_ShapeFilter_t();
  ShapeFilter * cppInstance = new ShapeFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

