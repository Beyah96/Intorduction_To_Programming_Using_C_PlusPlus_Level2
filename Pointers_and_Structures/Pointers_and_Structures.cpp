#include <iostream>

using namespace std;

struct stEmployee { 
	string Name;
	int Salary;
};

int main() {

	stEmployee Employee1, * ptr;

	Employee1.Name = "Mohamed Said BEYAH";
	Employee1.Salary = 650000;

	cout << "Name : " << Employee1.Name << endl;
	cout << "Salary : " << Employee1.Salary << endl;

	ptr = &Employee1;
	cout << "After using pointers : " << endl;
	cout << "Name : " << ptr->Name << endl;
	cout << "Salary : " << ptr->Salary << endl;

	return 0;
}