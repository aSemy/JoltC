#include "JoltC/JPC_ObjectLayerPairFilterMask.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilterMask_t * JPC_ObjectLayerPairFilterMask_new() {
  JPC_ObjectLayerPairFilterMask_t * cInstance = new JPC_ObjectLayerPairFilterMask_t();
  ObjectLayerPairFilterMask * cppInstance = new ObjectLayerPairFilterMask();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask
) {
  unsigned long result = ObjectLayerPairFilterMask::sGetObjectLayer(
  inGroup,
  inMask
  );
  return result;
};

unsigned long JPC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer
) {
  unsigned long result = ObjectLayerPairFilterMask::sGetGroup(
  inObjectLayer
  );
  return result;
};

unsigned long JPC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer
) {
  unsigned long result = ObjectLayerPairFilterMask::sGetMask(
  inObjectLayer
  );
  return result;
};

bool JPC_ObjectLayerPairFilterMask_ShouldCollide(
  JPC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterMask * selfCpp = static_cast<ObjectLayerPairFilterMask *>(self->obj);
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

