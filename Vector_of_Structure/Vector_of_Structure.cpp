#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

struct stEmployee {
	string FirstName, LastName;
	int Salary;
};


stEmployee GetEmployee() {
	
	stEmployee TempEmployee;
	

	cout << "Please enter Employee's First Name : ";
	cin >> TempEmployee.FirstName;
	cout << "Please enter Employee's Last Name : ";
	cin >> TempEmployee.LastName;
	cout << "Please enter Employee's slary : ";
	cin >> TempEmployee.Salary;
	cout << endl;
	return TempEmployee;
}

void AddEmployee(vector <stEmployee> & vEmployee) {
	char userInput;
	do{
		vEmployee.push_back(GetEmployee());
		cout << "Do you want to add a new Employee : ";
		cin >> userInput;
	} while (userInput == 'Y' || userInput == 'y');
	
}

void PrintEmployees(vector <stEmployee>& vEmployee) {
	short Counter = 1;
	cout << "Your Employees : " << endl;
	for (stEmployee & Employee : vEmployee){
		cout << "\nEmployee " + to_string(Counter) + " Information : " << endl;
		cout << "First Name : " << Employee.FirstName << endl;
		cout << "Last Name : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
		cout << "------------------------\n";
		Counter++;
	}

}

int main() {
	vector <stEmployee> vEmployee;

	AddEmployee(vEmployee);

	PrintEmployees(vEmployee);
	return 0;
}