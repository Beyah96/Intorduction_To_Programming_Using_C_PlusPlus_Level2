#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> vNumbers{1, 2, 3, 4, 5};

	try {
		cout << vNumbers.at(6) << endl;
	}
	catch (...) {
		cout << "Out of range ! ";
	}


	return 0;
}

