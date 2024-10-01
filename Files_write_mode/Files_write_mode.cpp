#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open()) {
		MyFile << "This is my first file manipulation on c++" << endl;
		MyFile << "I'm trying to improve my skills in c++" << endl;
		MyFile.close();
	}
}