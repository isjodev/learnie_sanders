#include <iostream>

struct Employee {
  int id {};
  int age {};
  double wage {};
};

template <typename T>
T max(T x, T y) {
  return (x < y) ? y : x;
}

struct Pair {
  int first{}; 
  int second{}; 
}; 

int main() {
  Employee joe {1, 32, 60000.00};

  joe.age = 33;
  joe.wage = 66000.0;

  for (int i = 0; i < joe.age; i++) {

  }
  return 0;
}
