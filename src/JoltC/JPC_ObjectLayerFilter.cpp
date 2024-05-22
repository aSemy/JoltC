#include "JoltC/JPC_ObjectLayerFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerFilter_t * JPC_ObjectLayerFilter_new() {
  JPC_ObjectLayerFilter_t * cInstance = new JPC_ObjectLayerFilter_t();
  ObjectLayerFilter * cppInstance = new ObjectLayerFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

