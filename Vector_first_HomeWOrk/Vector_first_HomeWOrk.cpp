#include <iostream>
#include <vector>

using namespace std;

 void ReadNumber(vector <int> & vNumbers){
	int Number;
	cout << "Please enter a number : ";
	cin >> Number;
	vNumbers.push_back(Number);
}

 void AskForNumbers(vector <int>& vNumbers) {
	 string response;
	 do {
		 ReadNumber(vNumbers);
		 cout << "Do you want to add a new Number? ";
		 cin >> response;
	 }while(response != "No" && response != "no");
 }

 void PrintVectorContent(vector <int> & vNumbers) {
	 cout << "Your numbers :";
	 for (int& Number : vNumbers)
		 cout << Number << " ";
 }

int main() {
	vector <int> vNumbers;
	AskForNumbers(vNumbers);
	PrintVectorContent(vNumbers);
	return 0;
}