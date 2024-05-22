#include "JoltC/JPC_SubShapeID.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SubShapeID_t * JPC_SubShapeID_new() {
  JPC_SubShapeID_t * cInstance = new JPC_SubShapeID_t();
  SubShapeID * cppInstance = new SubShapeID();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const long JPC_SubShapeID_GetValue(
  JPC_SubShapeID_t * self
) {
  SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
  const long result = selfCpp->GetValue();
  return result;
};

void JPC_SubShapeID_SetValue(
  JPC_SubShapeID_t * self,
  long inValue
) {
  SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
  
  selfCpp->SetValue(
  inValue
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

