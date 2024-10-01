#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent) {
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open()) {
		while (getline(MyFile, Line))
			vFileContent.push_back(Line);
		MyFile.close();
	}
}

int main() {
	vector <string> vFileContent;
	LoadDataFromFileToVector("TestFile.txt", vFileContent);

	for (string &Line : vFileContent)
		cout << Line << endl;

	return 0;
}