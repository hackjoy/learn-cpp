Language Notes

- Source file must contain a declaration for every name used.
- The convention is to place declarrations in header files (.h or .hpp) and source files in (.cpp, .c or .C)
- To use the declarations, #include <headerFile>

- The global scope is outside all curly braces, inner scopes can hide variables, cannot redeclare same variable
- Inner scope searched first

- You can specify language linkage making it easy to use from C++
```
extern "C" void cfunction(int);
```

typedef - creates a new name for an existing type

arrays - specified as int array[3]
