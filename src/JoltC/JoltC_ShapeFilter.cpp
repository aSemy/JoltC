#include "JoltC/JoltC_ShapeFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ShapeFilter` instance.
 */
JoltC_ShapeFilter_t * JoltC_ShapeFilter_new() {
  JoltC_ShapeFilter_t * cInstance = new JoltC_ShapeFilter_t();
  ShapeFilter * cppInstance = new ShapeFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ShapeFilter_destroy(
  JoltC_ShapeFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<ShapeFilter *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
