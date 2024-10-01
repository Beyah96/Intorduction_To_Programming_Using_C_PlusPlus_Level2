#include <iostream>

using namespace std;

void Swap(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main() {

	int a = 5, b = 7;

	cout << "Before swap : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	Swap(&a, &b);

	cout << "\nAfter swap : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}