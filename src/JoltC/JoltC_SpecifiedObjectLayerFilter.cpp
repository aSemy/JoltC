#include "JoltC/JPC_SpecifiedObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SpecifiedObjectLayerFilter_t * JPC_SpecifiedObjectLayerFilter_new(
  unsigned long inObjectLayer
) {
  JPC_SpecifiedObjectLayerFilter_t * cInstance = new JPC_SpecifiedObjectLayerFilter_t();
  SpecifiedObjectLayerFilter * cppInstance = new SpecifiedObjectLayerFilter(
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

