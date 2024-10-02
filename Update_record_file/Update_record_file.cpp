#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent) {
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);
	if(MyFile.is_open()){
		while(getline(MyFile, Line))
			vFileContent.push_back(Line);
		MyFile.close();
	}
};
void SaveVectorToFile(string FileName, vector <string>& vFileContent) {
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::out);
	if (MyFile.is_open()) {
		for(string Line : vFileContent)
			MyFile << Line << endl;
		MyFile.close();
	}
};
void ChangeRecordFromFile(string FileName, string NewRecord, string LastRecord) {
	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent) {
		if (Line == LastRecord)
			Line = NewRecord;
	}
	SaveVectorToFile(FileName, vFileContent);
};
void PrintFileContent(string FileName) {
	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
		while (getline(MyFile, Line))
			cout << Line << endl;
};


int main() {
	cout << "The file content before changes : " << endl;
	PrintFileContent("TestFile.txt");
	ChangeRecordFromFile("TestFile.txt", "Ali", "Alioune");
	cout << "\nThe file content after changes : " << endl;
	PrintFileContent("TestFile.txt");



	return 0;
}

/*
* TestFile.txt
Ali
Shiraz
Sirine
Sousane
Siras
Soumeya
Nessiba
Ahmed
*/