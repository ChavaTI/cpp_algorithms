# Algorithms created on C++

![GitHub Workflow Status (with event)](https://img.shields.io/github/actions/workflow/status/codeDude64/cpp_algorithms/unit_test.yml?event=pull_request&label=Unit%20tests&logo=Unit%20tests)

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

I usually use neovim as my text editor and this project is no exception. In my neovim configuration, I'm using lsp-config and the ccls lsp server, [the documentations](https://github.com/neovim/nvim-lspconfig/blob/master/doc/server_configurations.md#ccls) of lsp-config/ccls mentions that ccls relies on a JSON compilation database.
To generate this database and be sure that the lsp server will work fine, It's necessary to create the database with the following command.

`cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .`

you should run this command on the build directory
