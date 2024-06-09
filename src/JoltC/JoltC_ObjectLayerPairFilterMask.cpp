#include "JoltC/JoltC_ObjectLayerPairFilterMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ObjectLayerPairFilterMask` instance.
 */
JoltC_ObjectLayerPairFilterMask_t * JoltC_ObjectLayerPairFilterMask_new() {
  JoltC_ObjectLayerPairFilterMask_t * cInstance = new JoltC_ObjectLayerPairFilterMask_t();
  ObjectLayerPairFilterMask * cppInstance = new ObjectLayerPairFilterMask();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask
) {
  return ObjectLayerPairFilterMask::sGetObjectLayer(
    inGroup,
    inMask
  );
}

unsigned long JoltC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer
) {
  return ObjectLayerPairFilterMask::sGetGroup(
    inObjectLayer
  );
}

unsigned long JoltC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer
) {
  return ObjectLayerPairFilterMask::sGetMask(
    inObjectLayer
  );
}

bool JoltC_ObjectLayerPairFilterMask_ShouldCollide(
  JoltC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterMask * selfCpp = static_cast<ObjectLayerPairFilterMask *>(self->obj);
  return selfCpp->ShouldCollide(
    inLayer1,
    inLayer2
  );
}

//endregion

#ifdef __cplusplus
}
#endif

