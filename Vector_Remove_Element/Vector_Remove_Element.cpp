#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "Stack size : " << vNumbers.size() << endl; // 5 elements
	cout << "First Element : " << vNumbers.front() << endl;
	cout << "Last Element : " << vNumbers.back() << endl;
	cout << "Capacity : " << vNumbers.capacity() << endl;
	cout << "Is Empty?  : " << vNumbers.empty() << endl;

	for (int Number : vNumbers)
		cout << Number << endl;
	

	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	cout << "\nStack size after using pop_back : " << vNumbers.size() << endl;// 2 elements

	vNumbers.clear();
	cout << "Stack size after clear : " << vNumbers.size() << endl; // 0 elements

	
	return 0;

}