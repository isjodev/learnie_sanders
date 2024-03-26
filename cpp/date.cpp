#include <iostream>

/* Struct to store a date thing */
struct Date {
  int year {};
  int month {};
  int day {};

  void print() const {
    std::cout << year << '/' << '/' << month << '/' << day;
  }
};

int main() {
  Date today {2024, 10, 14};

  today.day = 16;
  today.print();

  return 0;
}
