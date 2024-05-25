# JoltC

C wrappers for [Jolt Physics](https://github.com/jrouwe/JoltPhysics).

* WIP
* Experimental
* Generated from [JoltPhysics.js](https://github.com/jrouwe/JoltPhysics.js/)

```c
#include "JoltC/JoltC.h"

void createFloor(size: int) {
  JoltC_JoltSettings joltSettings = JoltC_JoltSettings_new();
  JoltC_JoltSettings_mMaxBodies_Set(joltSettings, 1);
  // TODO ...
}
```
