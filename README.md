# Weldj
Java Bindings for [Weld](https://github.com/weld-project/weld)

## How to Generate Weldj?
The bindings were generated using [Swig](http://www.swig.org/). The `C` header files published by the weld-project [here](https://github.com/weld-project/weld/tree/master/weld-capi) as of release [0.4.0](https://github.com/weld-project/weld/releases/tag/v0.4.0) were fed into Swig. The steps to regenerate `Weldj` are documented in [How to Generate Weldj](GENERATE.md).

## How to Use Weldj?
This is a work in progress.
The intention is for `Weldj` to be built (refer section on [Building](#Building)), and included as a dependency in JVM applications intending to use `Weld`. [WeldRunner](weldj/blob/master/src/main/java/com/sujithjay/weldj/examples/WeldRunner.java) provides a very minimal example of this.

## Building
As a vanilla Gradle project, you can build `Weldj` as follows:
```
$ cd weldj
$ gradle build
```
