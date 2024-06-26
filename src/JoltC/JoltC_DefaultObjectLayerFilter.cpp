#include "JoltC/JoltC_DefaultObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `DefaultObjectLayerFilter` instance.
 */
JoltC_DefaultObjectLayerFilter_t * JoltC_DefaultObjectLayerFilter_new(
  JoltC_ObjectLayerPairFilter_t * inFilter,
  unsigned long inObjectLayer
) {
  const ObjectLayerPairFilter * inFilterCpp = static_cast<const ObjectLayerPairFilter *>(inFilter->obj);
  JoltC_DefaultObjectLayerFilter_t * cInstance = new JoltC_DefaultObjectLayerFilter_t();
  DefaultObjectLayerFilter * cppInstance = new DefaultObjectLayerFilter(
    *inFilterCpp,
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_DefaultObjectLayerFilter_destroy(
  JoltC_DefaultObjectLayerFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<DefaultObjectLayerFilter *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
