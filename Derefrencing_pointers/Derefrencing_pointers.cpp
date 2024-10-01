#include <iostream>

using namespace std;

int main() {
	int a = 10;
	cout << "a value : " << a << endl;
	cout << "a address : " << &a << endl;

	int* p = &a;
	cout << "Pointer value : " << p << endl;

	*p = 20;
	cout << "a value : " << a << endl;
	cout << "pointer value : " << *p << endl;
	
	a = 20;
	cout << "a value : " << a << endl;
	cout << "pointer value : " << *p << endl;

	return 0;
}