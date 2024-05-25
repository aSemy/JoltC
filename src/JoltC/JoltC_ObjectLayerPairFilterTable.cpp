#include "JoltC/JPC_ObjectLayerPairFilterTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ObjectLayerPairFilterTable_t * JPC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers
) {
  JPC_ObjectLayerPairFilterTable_t * cInstance = new JPC_ObjectLayerPairFilterTable_t();
  ObjectLayerPairFilterTable * cppInstance = new ObjectLayerPairFilterTable(
    inNumObjectLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JPC_ObjectLayerPairFilterTable_t * self
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  unsigned long result = selfCpp->GetNumObjectLayers();
  return result;
};

void JPC_ObjectLayerPairFilterTable_DisableCollision(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  
  selfCpp->DisableCollision(
  inLayer1,
  inLayer2
  );
};

void JPC_ObjectLayerPairFilterTable_EnableCollision(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  
  selfCpp->EnableCollision(
  inLayer1,
  inLayer2
  );
};

bool JPC_ObjectLayerPairFilterTable_ShouldCollide(
  JPC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
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

