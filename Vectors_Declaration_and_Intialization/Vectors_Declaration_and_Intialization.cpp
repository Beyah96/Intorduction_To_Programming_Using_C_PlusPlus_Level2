#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> vNumbers = {1, 2, 3, 4, 5, 7, 10};

	for (int& Number : vNumbers)
		cout << Number << " ";
	return 0;
}