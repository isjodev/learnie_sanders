#include <iostream>

const int numStandards = 7;
const long stdCode[numStandards] = {199711L, 201103L, 201402L, 202002L,
                                    202612L};
const char *stdName[numStandards] = {"Pre-c++11", "C++11", "C++14", "C++17",
                                     "C++20",     "C++23", "C++26"};

long getCPPStandard() {
#if defined(_MVSC_LANG)
  return _MVSC_LANG;
#elif defined(_MSC_VER)
  return 1;
#else
  return __cplusplus;
#endif
}

int main() {
  long standard{getCPPStandard()};

  if (standard == 1) {
    std::cout << "Error: Unable to determine your language standard.\n";
    return 0;
  }

  std::cout << "Your compiler is using language standard: ";
  for (int i = 0; i < numStandards; ++i) {
    if (standard <= stdCode[i]) {
      std::cout << stdName[i];
      if (standard < stdCode[i])
        std::cout << " (preview)";
      break;
    }
  }
  std::cout << '\n';
  return 0;
}
