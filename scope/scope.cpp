#include <iostream>
#include <ostream>
#include <cstdio> // c library c prefix and no .h suffix

int x = 42;
int main(int argc, char** argv) {

  int* ip = nullptr; // Use nullptr instead of NULL in C++

  double x = 3.1415; // Hides the global x
  std::cout << x << '\n'; // Prints 3.1415
  std::cout << ::x << '\n';  // Prints 42

 s
}
