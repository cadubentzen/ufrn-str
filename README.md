# Real Time Systems programming at UFRN

This repository contains the source code for examples used in Real-time Systems programming course, lectured by Professor Luiz Affonso at Universidade Federal do Rio Grande do Norte, Brazil.

## Building

**Requirements:**
- CMake >= 2.8

To build all the examples, run:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Contributing

In case you find any mistakes in the source files, please make a pull request with the suggested correction and brief explanation why you think it is wrong. 

### Travis CI
We have a Travis CI running for two things:
- Check if the submitted code is following [WebKit coding style](https://webkit.org/code-style-guidelines/), so make sure to format your code properly before submitting it. You can use [clang-format](https://clang.llvm.org/docs/ClangFormat.html) to achieve this easily.
- Check if the code compiles. So make sure your code is compiling!
