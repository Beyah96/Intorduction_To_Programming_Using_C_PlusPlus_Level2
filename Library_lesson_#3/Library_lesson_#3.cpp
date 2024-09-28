#include <iostream>
#include "MyLib.h";
#include "MyArrayFunctionsLib.h";

using namespace std;

int main() {

	//MyLib::Test();
	int Arr[100], Length;

	cout << "--------- The first Array ---------" << endl;
	MyArrayFunctionsLib::FillArrayWithRandomNumbers(Arr, Length);
	MyArrayFunctionsLib::PrintArrayElements(Arr, Length);
	cout << "--------- The second Array ---------" << endl;
	MyArrayFunctionsLib::FillArrayWithUserInputs(Arr, Length);
	MyArrayFunctionsLib::PrintArrayElements(Arr, Length);


	
	return 0;
}