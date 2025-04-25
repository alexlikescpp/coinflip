#include <cstdlib>
#include <iostream>

int main() {
  std::cout << "Coin flip!\n";
  srand(time(NULL));
  int answer = std::rand() % 2;
  if (answer == 1) {
    std::cout << "Heads\n";
  } else {
    std::cout << "Tails\n";
  }
}
