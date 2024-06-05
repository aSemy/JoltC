#include "JoltC/JoltC_SpecifiedObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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

#ifdef __cplusplus
}
#endif

