#include <stdio.h>

int main() {
	// verify that the expression getchar() != EOF is  
	// 0 or 1
	printf("%d\n", getchar() != EOF); // 1
	printf("%d\n", EOF); // -1 																				
	return 0; 
}

