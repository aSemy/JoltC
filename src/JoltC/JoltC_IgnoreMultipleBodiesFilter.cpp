#include "JoltC/JoltC_IgnoreMultipleBodiesFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreMultipleBodiesFilter_t * JoltC_IgnoreMultipleBodiesFilter_new() {
  JoltC_IgnoreMultipleBodiesFilter_t * cInstance = new JoltC_IgnoreMultipleBodiesFilter_t();
  IgnoreMultipleBodiesFilter * cppInstance = new IgnoreMultipleBodiesFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_IgnoreMultipleBodiesFilter_Clear(
  JoltC_IgnoreMultipleBodiesFilter_t * self
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->Clear();
};

void JoltC_IgnoreMultipleBodiesFilter_Reserve(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->Reserve(
    inSize
  );
};

void JoltC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  JoltC_BodyID_t * inBodyID
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->IgnoreBody(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

