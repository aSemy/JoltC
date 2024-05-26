#include "JoltC/JoltC_SubShapeID.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeID_t * JoltC_SubShapeID_new() {
  JoltC_SubShapeID_t * cInstance = new JoltC_SubShapeID_t();
  SubShapeID * cppInstance = new SubShapeID();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const long JoltC_SubShapeID_GetValue(
  JoltC_SubShapeID_t * self
) {
  SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
  const long result = selfCpp->GetValue();
  return result;
};

void JoltC_SubShapeID_SetValue(
  JoltC_SubShapeID_t * self,
  long inValue
) {
  SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
  
  selfCpp->SetValue(
  inValue
  );
};

//endregion

#ifdef __cplusplus
}
#endif

