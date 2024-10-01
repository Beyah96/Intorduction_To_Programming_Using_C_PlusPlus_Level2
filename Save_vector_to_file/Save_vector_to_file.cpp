#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent) {
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	if (MyFile.is_open()) {
		for (string Line : vFileContent)
			MyFile << Line << endl;

		MyFile.close();
	}
}

int main() {
	vector <string> vFileContent{ "Ali", "Mohamed", "Yacine", "Yosra", "Omar", "Yanic", "Juan", "Julio" };

	SaveVectorToFile("TestFile.txt", vFileContent);
	return 0;
}