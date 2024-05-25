#include "JoltC/JPC_BodyFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyFilter_t * JPC_BodyFilter_new() {
  JPC_BodyFilter_t * cInstance = new JPC_BodyFilter_t();
  BodyFilter * cppInstance = new BodyFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

