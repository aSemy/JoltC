#include "JoltC/JoltC_SpecifiedObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SpecifiedObjectLayerFilter` instance.
 */
JoltC_SpecifiedObjectLayerFilter_t * JoltC_SpecifiedObjectLayerFilter_new(
  unsigned long inObjectLayer
) {
  JoltC_SpecifiedObjectLayerFilter_t * cInstance = new JoltC_SpecifiedObjectLayerFilter_t();
  SpecifiedObjectLayerFilter * cppInstance = new SpecifiedObjectLayerFilter(
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SpecifiedObjectLayerFilter_destroy(
  JoltC_SpecifiedObjectLayerFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<SpecifiedObjectLayerFilter *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
