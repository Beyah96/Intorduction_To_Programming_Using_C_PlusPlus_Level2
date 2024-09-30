// setw_manipulator.cpp :

#include <iostream>
#include <iomanip>

using namespace std;

void PrintTableContent(int Number, string FirstName, string LastName) {
	cout << setw(12) << left << Number << "| " 
		 << setw(19) << left << FirstName << "| " 
		 << setw(9) << left << LastName << "| " << endl;
	cout << "---------------------------------------------" << endl;
}

int main() {

	cout << "---------------------------------------------" << endl;
	cout << " Sit Number |     First Name     | Last name|" << endl;
	cout << "---------------------------------------------" << endl;

	PrintTableContent(1, "Mohamed", "Hacen");
	PrintTableContent(2, "John", "Cena");
	PrintTableContent(3, "Randy", "Orten");

	return 0;
}