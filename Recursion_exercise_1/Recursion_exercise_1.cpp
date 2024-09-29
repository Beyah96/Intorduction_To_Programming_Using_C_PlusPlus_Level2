#include <iostream>

using namespace std;

void PrintNumbers(int M, int N) {
	cout << N << endl;
	if (N > M)
		PrintNumbers(M, N-1);  
}

int main() {
	PrintNumbers(4, 10);
	return 0;
}