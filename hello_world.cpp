#include <iostream>
#include <string>

int main() {
  std::string name;

  std::cout << "enter your name" << std::endl;
  std::cin >> name; // entering name

  std::cout << "Hello world from " << name
            << std::endl; // cout Hello world from @name

  return 0;
}