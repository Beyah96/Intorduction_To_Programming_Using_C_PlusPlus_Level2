#include <iostream>
#include <string>

using namespace std;
int ReadNumber(string Message) {
	int Number;
	cout << Message;
	cin >> Number;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, Please enter a valid number : ";
		cin >> Number;
	}
	return Number;
}
int main() {
	cout << ReadNumber("Please enter a number : ");
	return 0;
}