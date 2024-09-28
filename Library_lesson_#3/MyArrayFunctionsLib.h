#pragma once

#include <iostream>
#include "MyInputReaderLib.h";


namespace MyArrayFunctionsLib
{
	void FillArrayWithRandomNumbers(int Arr[100], int& Length) {
		Length = MyInputReaderLib::ReadPositifInteger("Please enter how many elements do you want to store : ");
		for (int i = 0; i < Length; i++)
			Arr[i] = MyInputReaderLib::ReadRandomNumber(1, 100);
	}

	void FillArrayWithUserInputs(int Arr[100], int& Length) {
		Length = MyInputReaderLib::ReadPositifInteger("Please enter how many elements do you want to store : ");
		for (int i = 0; i < Length; i++)
			Arr[i] = MyInputReaderLib::ReadPositifInteger("Please enter an element : ");
	}

	void PrintArrayElements(int Arr[100], int Length) {
		for (int i = 0; i < Length; i++)
			cout << "Element[" << i + 1 << "] : " << Arr[i] << endl;
	}

}