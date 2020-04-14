# Weldj
Java Bindings for [Weld](https://github.com/weld-project/weld)

## How to Generate the Bindings?
The bindings were generated using [Swig](http://www.swig.org/). The `C` header files published by the weld-project [here](https://github.com/weld-project/weld/tree/master/weld-capi) as of release [0.4.0](https://github.com/weld-project/weld/releases/tag/v0.4.0) were fed into Swig.

#### Steps:
Note: This was performed on a machine running macOS Catalina. YMMV.
1. Clone & build [Weld](https://github.com/weld-project/weld).

    `cargo build --release`
2. Copy `<weld-repository>/weld-capi/weld.h` to an appropriate location `<path-to-weld-header>`

3. Generate the `C` wrapper & JNI files.

    `swig -java -package com.sujithjay.weldj -module weld <path-to-weld-header>/weld.h`

4. Insert  `#include "weld.h"` in the generated `weld_wrap.c` file.
5. Compile the `C` wrapper, providing it with paths to `jni.h` & `jni_md.h`.

    `gcc -c weld_wrap.c -I/Library/Java/JavaVirtualMachines/jdk1.8.0_191.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_191.jdk/Contents/Home/include/darwin/`
6. Generate the `dylib` (or `jnilib`, if you prefer).

    `gcc -framework JavaVM -dynamiclib weld_wrap.o -lweld -o libweldj.dylib -L<path-to-weld-dylib>`
    
    Note: `path-to-weld-dylib` can be inferred as follows:
    - cd `<path-to-weld-repository>`
    - `otool -D target/release/libweld.dylib`
