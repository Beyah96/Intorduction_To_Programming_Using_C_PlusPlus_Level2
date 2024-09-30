#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int Number1 = 1, Number2 = 3;
	printf("You're in page %d of %d \n", Number1, Number2);
	printf("The page number  is : %0*d \n", 2, Number1);
	printf("The page number  is : %0*d \n", 5, Number1);
	printf("The page number  is : %0*d \n", 6, Number1);


	printf("The result of %d + %d = %d\n", Number1, Number2, Number1 + Number2);
	return 0;
}