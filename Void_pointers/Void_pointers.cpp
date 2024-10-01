#include <iostream>

using namespace std;

int main() {
	
	void* ptr;
	float f1 = 10.5;

	ptr = &f1;

	cout << "The adress of f1 : " << ptr << endl;
	cout << "The value of f1 : " << *(static_cast<float*>(ptr)) << endl;

	int a = 10;
	ptr = &a;

	cout << "The adress of a : " << ptr << endl;
	cout << "The value of a : " << *(static_cast<int*>(ptr)) << endl;

	return 0;
}