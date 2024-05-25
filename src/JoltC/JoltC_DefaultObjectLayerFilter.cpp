#include "JoltC/JPC_DefaultObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DefaultObjectLayerFilter_t * JPC_DefaultObjectLayerFilter_new(
  const JPC_ObjectLayerPairFilter_t * inFilter,
  unsigned long inObjectLayer
) {
  JPC_DefaultObjectLayerFilter_t * cInstance = new JPC_DefaultObjectLayerFilter_t();
  DefaultObjectLayerFilter * cppInstance = new DefaultObjectLayerFilter(
    *reinterpret_cast<ObjectLayerPairFilter *>(inFilter->obj),
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

