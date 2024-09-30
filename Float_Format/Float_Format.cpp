#include <iostream>
#include <cstdio>

using namespace std;


int main() {

	float PI = 3.14159256;

	// Precision specification 
	printf("The precision spectification of PI is %.*f\n", 1, PI);
	printf("The precision spectification of PI is %.*f\n", 3, PI);
	printf("The precision spectification of PI is %.*f\n", 5, PI);

	float x = 7.0, y = 9.0;
	printf("The result of the operation %.3f / %.3f = %.3f\n", x, y, x / y);

	double z = 12.45;
	printf("The double value is %.*f", 4, z);
	return 0;
}