#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers = { 1,2,3,4,5,6,7 };

	cout << "\nUsing at(index) : \n";
	cout << "Element at index  1 : " << vNumbers.at(1) << endl;
	cout << "Element at index  2 : " << vNumbers.at(2) << endl;
	cout << "Element at index  4 : " << vNumbers.at(4) << endl;

	cout << "\nUsing [index] : \n";
	cout << "Element at index  1 : " << vNumbers[1] << endl;
	cout << "Element at index  2 : " << vNumbers[2] << endl;
	cout << "Element at index  4 : " << vNumbers[4] << endl;

	return 0;
}