#include "JoltC/JoltC_Vec4.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec4_t * JoltC_Vec4_new_0(
  char** outErrMsg
) {
  try {
    JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
    Vec4 * cppInstance = new Vec4();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec4_t * JoltC_Vec4_new_1(
  const JoltC_Vec4_t * inV,
  char** outErrMsg
) {
  try {
    JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
    Vec4 * cppInstance = new Vec4(
      *reinterpret_cast<Vec4 *>(inV->obj)
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec4_t * JoltC_Vec4_new_2(
  JoltC_Vec3_t * inV,
  float inW,
  char** outErrMsg
) {
  try {
    JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
    Vec4 * cppInstance = new Vec4(
      *reinterpret_cast<Vec3 *>(inV->obj),
      inW
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec4_t * JoltC_Vec4_new_3(
  float inX,
  float inY,
  float inZ,
  float inW,
  char** outErrMsg
) {
  try {
    JoltC_Vec4_t * cInstance = new JoltC_Vec4_t();
    Vec4 * cppInstance = new Vec4(
      inX,
      inY,
      inZ,
      inW
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

float JoltC_Vec4_GetX(
  JoltC_Vec4_t * self,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    float result = selfCpp->GetX();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vec4_GetY(
  JoltC_Vec4_t * self,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    float result = selfCpp->GetY();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vec4_GetZ(
  JoltC_Vec4_t * self,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    float result = selfCpp->GetZ();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vec4_GetW(
  JoltC_Vec4_t * self,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    float result = selfCpp->GetW();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vec4_SetX(
  JoltC_Vec4_t * self,
  float inX,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    
    selfCpp->SetX(
    inX
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vec4_SetY(
  JoltC_Vec4_t * self,
  float inY,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    
    selfCpp->SetY(
    inY
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vec4_SetZ(
  JoltC_Vec4_t * self,
  float inZ,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    
    selfCpp->SetZ(
    inZ
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vec4_SetW(
  JoltC_Vec4_t * self,
  float inW,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    
    selfCpp->SetW(
    inW
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vec4_Set(
  JoltC_Vec4_t * self,
  float inX,
  float inY,
  float inZ,
  float inW,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    
    selfCpp->Set(
    inX,
    inY,
    inZ,
    inW
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vec4_GetComponent(
  JoltC_Vec4_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
) {
  try {
    Vec4 * selfCpp = static_cast<Vec4 *>(self->obj);
    float result = selfCpp->operator[](
    inCoordinate
    );
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

