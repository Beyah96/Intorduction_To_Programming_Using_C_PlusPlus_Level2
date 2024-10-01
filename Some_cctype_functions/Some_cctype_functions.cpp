#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	char x, y;
	x = toupper('a');
	y = tolower('A');
	cout << "toupper('a') : " << x << endl;
	cout << "tolower('A') : " << y << endl;

	cout << "isupper('a') : " << isupper('a') << endl;
	cout << "isupper('A') : " << isupper('A') << endl;
	cout << "islower('a') : " << islower('a') << endl;
	cout << "islower('A') : " << islower('A') << endl;

	cout << "isdigit('9') : " << isdigit('9') << endl;
	cout << "isdigit('A') : " << isdigit('A') << endl;
}