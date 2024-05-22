# joltc

C wrappers for [Jolt Physics](https://github.com/jrouwe/JoltPhysics).

* WIP
* Experimental
* Generated from [JoltPhysics.js](https://github.com/jrouwe/JoltPhysics.js/)

```c
#include "JoltC/JoltC.h"

void createFloor(size: int) {
  JPC_JoltSettings joltSettings = JPC_JoltSettings_new();
  JPC_JoltSettings_mMaxBodies_Set(joltSettings, 1);
  // TODO ...
}
```
