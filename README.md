# boilerplate-pmm-vcpkg-cmake

## Introduction

This example project provides the boilerplate and a potential starting point for a C++ project that utilizes the [CMAKE](https://cmake.org/) build system, [VCPKG](https://github.com/microsoft/vcpkg) package manager, and [PMM](https://github.com/vector-of-bool/pmm) package manager manager.

This sample project uses PMM to automatically bootstrap VCPKG, download the required packages, and integrate the packages into CMAKE when CMAKE is run. The main build target executable source code, which utilizes the [FMT](https://github.com/fmtlib/fmt) library, can be found in ```src/main.cpp```.

Please consult the documentation for CMAKE, VCPKG, PMM, and FMT for more details.

## Quick Start

### Prerequisites

- Git
- CMAKE version 3.2 or later
- C++17 compiler

### Steps

The following steps assume you're using a Linux OS, but the steps for a Windows OS should be similar. 

1. Clone the repository

 $ ```git clone https://github.com/ariveron/boilerplate-pmm-vcpkg-cmake```

2. Go into the repo directory

 $ ```cd boilerplate-pmm-vcpkg-cmake```

3. Run CMAKE to create the build files

 $ ```cmake .```

4. Use CMAKE to build the project

 $ ```cmake --build .```

5. You should now be able to run the program

 $ ```./bin/main```

 ```The answer is 42```
