# How to Generate Weldj

This document documents steps to generate `Weldj` bindings, to help reproduce & verify the results. These steps are not necessary to use `Weldj`.

*Note: This was performed on a machine running macOS Catalina. YMMV.*

### Steps
1. Clone & build [Weld](https://github.com/weld-project/weld).

    `cargo build --release`
2. Copy `<weld-repository>/weld-capi/weld.h` to an appropriate location `<PATH-TO-WELD-HEADER>`

3. Generate the `C` wrapper & JNI files.

    `swig -java -package com.sujithjay.weldj -module weld <PATH-TO-WELD-HEADER>/weld.h`

4. Insert  `#include "weld.h"` in the generated `weld_wrap.c` file.

5. Compile the `C` wrapper, providing it with paths to `jni.h` & `jni_md.h`.

    `gcc -c weld_wrap.c -I<JDK-HOME>/include -I<JDK-HOME>/include/darwin/` [^1]
    
6. Generate the `dylib` (or `jnilib`, if you prefer).

    `gcc -framework JavaVM -dynamiclib weld_wrap.o -lweld -o libweldj.dylib -L<PATH-TO-WELD-DYLIB>` [^2]
    
#### Footnotes:
[^1]: `<JDK-HOME>` can be found on *macOS* machine by executing `/usr/libexec/java_home`. 

[^2]: `<PATH-TO-WELD-DYLIB>` can be inferred with: `otool -D target/release/libweld.dylib` within the local `weld` repository.
