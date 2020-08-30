#include <fmt/core.h>
#include <iostream>

int main(int argc, char* argv[]) {
  auto msg = fmt::format("The answer is {}", 42);

  std::cout << msg << std::endl;

  return 0;
}
