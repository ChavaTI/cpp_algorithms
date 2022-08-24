# Algorithms created on C++

My intention here is to review the basic Algorithms of computer science
and learn C++, CMake, and any other c stuff that I need to learn.

## How to run it 

I found many ways to build a run the C++ code with CMake, but for the moment I'm using these ones

### Create the makefiles

`cmake -S . -B build`

Where `-S` indicates the source directory and `-B` indicates the build directory


### How to create the binary

`make -C build`

Where `-C` indicates the compilation directory


## Extras

I usually use neovim as my text editor and this project is no exception. In my neovim configuration, I'm using lsp-config so for the lsp server could read the syntaxis of this code correctly I need to run the following command

`cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .`

On the build directory.

This command gonna create a json file in the build directory, and the lsp server could read the syntaxis correctly
