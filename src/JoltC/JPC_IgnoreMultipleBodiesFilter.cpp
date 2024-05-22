#include "JoltC/JPC_IgnoreMultipleBodiesFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IgnoreMultipleBodiesFilter_t * JPC_IgnoreMultipleBodiesFilter_new() {
  JPC_IgnoreMultipleBodiesFilter_t * cInstance = new JPC_IgnoreMultipleBodiesFilter_t();
  IgnoreMultipleBodiesFilter * cppInstance = new IgnoreMultipleBodiesFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_IgnoreMultipleBodiesFilter_Clear(
  JPC_IgnoreMultipleBodiesFilter_t * self
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->Clear();
};

void JPC_IgnoreMultipleBodiesFilter_Reserve(
  JPC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->Reserve(
  inSize
  );
};

void JPC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JPC_IgnoreMultipleBodiesFilter_t * self,
  const JPC_BodyID_t * inBodyID
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  
  selfCpp->IgnoreBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

