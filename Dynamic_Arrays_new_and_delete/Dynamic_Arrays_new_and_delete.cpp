#include <iostream>
#include <string>
using namespace std;

int main() {
	int Number;
	cout << "Enter the total number of students : ";
	cin >> Number;

	float* ptr;
	//Memory dynamic array of floats allocation: 
	ptr = new float[Number];

	cout << "Enter students' grades : " << endl;
	for (int i = 0; i < Number; i++) {
		cout << "Enter the grade of the student " << i + 1 << " : ";
		cin >> *(ptr + i);
	}

	for (int i = 0; i < Number; i++)
		cout << "The student number " + to_string(i + 1) + " has as grade : " << *(ptr + i) << endl;

	// Deallocate the memory : ptr memory is released; 
	delete []ptr;
	return 0;

}