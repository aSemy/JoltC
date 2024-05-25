#include "JoltC/JPC_ObjectLayerPairFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilter_t * JPC_ObjectLayerPairFilter_new() {
  JPC_ObjectLayerPairFilter_t * cInstance = new JPC_ObjectLayerPairFilter_t();
  ObjectLayerPairFilter * cppInstance = new ObjectLayerPairFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_ObjectLayerPairFilter_ShouldCollide(
  JPC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilter * selfCpp = static_cast<ObjectLayerPairFilter *>(self->obj);
  bool result = selfCpp->ShouldCollide(
  inLayer1,
  inLayer2
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

