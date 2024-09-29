#include <iostream>

using namespace std;

void PrintNumbers(int N, int M) {
	cout << N << endl;
	if (N < M)
		PrintNumbers(N + 1, M);
}

int main() {

	PrintNumbers(1, 4);
	return 0;
}