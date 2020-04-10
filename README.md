# Weldj
Java Bindings for [Weld](https://github.com/weld-project/weld)

## How
The bindings were generated using [Swig](http://www.swig.org/). The `C` header files published by the weld-project [here](https://github.com/weld-project/weld/tree/master/weld-capi) as of release [0.4.0](https://github.com/weld-project/weld/releases/tag/v0.4.0) were fed into Swig.

#### Steps:
Note: This was performed on a machine running macOS Catalina. YMMV.
1. Clone & build [weld](https://github.com/weld-project/weld).

    `cargo build --release`
2. Copy `<weld-repository>/weld-capi/weld.h` to appropriate location `<path-to-weld-header>`

3. `swig -java -package com.sujithjay.weldj -module weld <path-to-weld-header>/weld.h`

4. Insert  `#include "weld.h"` in the generated `weld_wrap.c` file.
5. `gcc -c weld_wrap.c -I/Library/Java/JavaVirtualMachines/jdk1.8.0_191.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_191.jdk/Contents/Home/include/darwin/`
6. `gcc -framework JavaVM -dynamiclib weld_wrap.o -lweld -o libweldj.dylib -L<path-to-weld-dylib>`
    
    `path-to-weld-dylib` can be inferred as follows:
    - cd `<path-to-weld-repository>`
    - `otool -D target/release/libweld.dylib`
