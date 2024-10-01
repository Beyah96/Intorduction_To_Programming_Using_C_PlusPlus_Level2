#include <iostream>

using namespace std;

int main() {

	// Declare pointers :
	int* ptrX;
	float* ptrY;

	//Dynamically allocate the memory :

	ptrX = new int;
	ptrY = new float;

	// Assigning values to the memory:
	*ptrX = 20;
	*ptrY = 31.5;

	// Using this variables :
	cout << *ptrX << endl;
	cout << *ptrY << endl;

	// Deallocate the memory :
	delete ptrX;
	delete ptrY;

	return 0;
}