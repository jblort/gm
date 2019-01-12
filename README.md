gm (Graphics Math)
====================

A very simple math library designed for 3D graphics rendering. 

## Setup instructions

This project depends on CMake and Conan, which need to be installed prior to using this template.
* [CMake installation instructions](https://cmake.org/install/)
* [Conan installation instructions](http://docs.conan.io/en/latest/installation.html)

The folder structure can be copied and used directly with only a few minor adjustments.

1. Modify the name of the project in the root `CMakeLists.txt`.

## Recommended build instructions

### Unix/MacOS

From the root of the project:

1. `mkdir build && cd build`
2. `conan install .. && cmake .. && cmake --build .`
3. Run tests with `ctest -V`

### Windows

Coming soon™
