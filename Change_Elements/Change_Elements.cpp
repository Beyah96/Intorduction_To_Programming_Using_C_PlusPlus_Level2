#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Print initial vector : " << endl;
	for (const int& Number : vNumbers)
		cout << Number << " ";

	cout << "\n\nUpdating vector values : " << endl;
	for (int& Number : vNumbers) {
		Number = 20;
		cout << Number << " ";
	}

	vNumbers.at(0) = 40;
	vNumbers[5] = 70;

	cout << "\n\nAfter updating the vector with '.at(index)' and '[index]' : " << endl;
	for (const int& Number : vNumbers)
		cout << Number << " ";

	return 0;
}