// Ternary_Operator_Lesson_#4.cpp : Short Hand If

#include <iostream>
#include "MyLib.h";

using namespace std;

int main() {
	int Number1 = -5;
	int Number2 = 0;

	cout << "Using the first function to check if the number is positive or Negative" << endl;
	cout << "Number1 is : " << MyLib::isPositiveOrNegative(Number1) << endl;
	cout << "Number2 is : " << MyLib::isPositiveOrNegative(Number2) << endl;
	
	cout << "Using the second function to check if the number is Null, positive or Negative" << endl;
	cout << "Number1 is : " << MyLib::isNullPositiveOrNegative(Number1) << endl;
	cout << "Number2 is : " << MyLib::isNullPositiveOrNegative(Number2) << endl;

}