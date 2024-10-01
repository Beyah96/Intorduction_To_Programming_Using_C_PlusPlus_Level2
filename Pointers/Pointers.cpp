#include <iostream>

using namespace std;

int main() {
	int a = 10;
	cout << "a value : " << a << endl;
	cout << "a address : " << &a << endl;

	int* p = &a;
	cout << "Pointer value : " << p << endl;

	int b = 50;
	p = &b;
	cout << "New pointer value : " << &b << endl;

	cout << "b value : " << b << endl;
	cout << "a value : " << a << endl;

	return 0;
}