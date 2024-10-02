#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent){
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open()) {
		while (getline(MyFile, Line))
			vFileContent.push_back(Line);
		MyFile.close();
	}
}
void SaveVectorToFile(string FileName, vector <string>& vFileContent) {
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	if (MyFile.is_open()) {
		for (string& Line : vFileContent)
			if (Line != "")
				MyFile << Line << endl;	
		MyFile.close();
	}
}

void DeleteRecordFromFile(string FileName, string Record) {
	vector <string> vTempText;
	LoadDataFromFileToVector(FileName, vTempText);
	for (string& Line : vTempText)
		if (Line == Record)
			Line = "";
	SaveVectorToFile(FileName, vTempText);
}

void PrintFileContent(string FileName) {
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open()) {
		while (getline(MyFile, Line))
			cout << Line << endl;
		MyFile.close();
	}
}

int main() {

	cout << "\nFile content before deleting the record : " << endl;
	PrintFileContent("TestFile.txt");

	DeleteRecordFromFile("TestFile.txt", "Ali");
	cout << "\nFile content after deleting Ali : " << endl;
	PrintFileContent("TestFile.txt");
	
	DeleteRecordFromFile("TestFile.txt", "yanic");
	cout << "\nFile content after deleting yanic : " << endl;
	PrintFileContent("TestFile.txt");

	return 0;
}