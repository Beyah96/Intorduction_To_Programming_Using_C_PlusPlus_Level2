#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers = { 1, 2, 3, 4, 5, 6 ,7 };

	vector <int>::iterator iter;
	
	for (iter = vNumbers.begin(); iter != vNumbers.end(); iter++)
		cout << *iter << " ";
	return 0;
}