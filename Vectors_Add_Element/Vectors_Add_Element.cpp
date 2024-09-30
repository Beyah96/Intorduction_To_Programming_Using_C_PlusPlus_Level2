#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(11);
	vNumbers.push_back(12);
	vNumbers.push_back(13);
	vNumbers.push_back(14);
	vNumbers.push_back(15);
	vNumbers.push_back(16);
	vNumbers.push_back(17);

	cout << "Vector content : ";
	for (int& Number : vNumbers)
		cout << Number << " ";

	return 0;
}