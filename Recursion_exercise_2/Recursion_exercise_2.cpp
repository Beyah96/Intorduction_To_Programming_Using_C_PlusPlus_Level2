#include <iostream>

using namespace std;

int CalculatePower(int M, int N) {
	if (N != 0)
		return M * CalculatePower(M, N-1);
	return 1;
}

int main() {
	cout << "CalculatePower(5, 2) : " << CalculatePower(5, 2) << endl;
	return 0;
}