#include <iostream>
#include <vector>

template <typename T> 
void passByRef(const std::vector<T>& arr) {
	std::cout << arr[0] << '\n'; 
}

int main() {
	std::vector primes{2,3,5,7,11}; 
	passByRef(primes); 

	return 0; 
}
