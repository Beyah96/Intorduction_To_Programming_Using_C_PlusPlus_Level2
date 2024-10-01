#include <iostream>

using namespace std;

int main() {
	int Arr[] = { 1,2,3,4,5,6,8,2,10 };
	int Length = size(Arr);
	

	int* ptr = Arr;

	for (int i = 0; i < Length; i++)
		cout << ptr + i << endl;
	cout << endl;
	for (int i = 0; i < Length; i++)
		cout << *(ptr + i) << endl;

	return 0;
}