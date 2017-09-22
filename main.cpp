#include <iostream>
#include <neither/either.hpp>

using IntOrFloat = neither::Either<int, float>;

int main() {
  auto a = IntOrFloat::leftOf(123);
  auto b = IntOrFloat::rightOf(1.23);
  auto c = IntOrFloat::leftOf(123);
  if (a == b) {
    std::cout << "x" << std::endl;
  }
  if (a == c) {
    std::cout << "y" << std::endl;
  }
  return 0;
}
