#include "JoltC/JoltC_ObjectLayerPairFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ObjectLayerPairFilter` instance.
 */
JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_new() {
  JoltC_ObjectLayerPairFilter_t * cInstance = new JoltC_ObjectLayerPairFilter_t();
  ObjectLayerPairFilter * cppInstance = new ObjectLayerPairFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ObjectLayerPairFilter_destroy(
  JoltC_ObjectLayerPairFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<ObjectLayerPairFilter *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_ObjectLayerPairFilterTable_t into JoltC_ObjectLayerPairFilter_t.
 */
JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_From_ObjectLayerPairFilterTable(
  JoltC_ObjectLayerPairFilterTable_t * subtype
) {
  return (JoltC_ObjectLayerPairFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_ObjectLayerPairFilterMask_t into JoltC_ObjectLayerPairFilter_t.
 */
JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_From_ObjectLayerPairFilterMask(
  JoltC_ObjectLayerPairFilterMask_t * subtype
) {
  return (JoltC_ObjectLayerPairFilter_t*) subtype;
};

//endregion

//region functions

bool JoltC_ObjectLayerPairFilter_ShouldCollide(
  JoltC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilter * selfCpp = static_cast<ObjectLayerPairFilter *>(self->obj);
  return selfCpp->ShouldCollide(
    inLayer1,
    inLayer2
  );
}

//endregion


#ifdef __cplusplus
}
#endif
