#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream	MyFile;
	MyFile.open("File.txt", ios::out | ios::app);
	if (MyFile.is_open()) {
		MyFile << "I just want to test if i rerun this code it will append this text and conserve the previous one or it will remove the text before " << endl;
		MyFile.close();
	}
	

	return 0;
}