#include "JoltC/JPC_DefaultBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DefaultBroadPhaseLayerFilter_t * JPC_DefaultBroadPhaseLayerFilter_new(
  const JPC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer
) {
  JPC_DefaultBroadPhaseLayerFilter_t * cInstance = new JPC_DefaultBroadPhaseLayerFilter_t();
  DefaultBroadPhaseLayerFilter * cppInstance = new DefaultBroadPhaseLayerFilter(
    *reinterpret_cast<ObjectVsBroadPhaseLayerFilter *>(inFilter->obj),
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

