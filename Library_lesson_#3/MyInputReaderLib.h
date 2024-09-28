#pragma once

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

namespace MyInputReaderLib
{
	int ReadPositifInteger(string Message) {
		int Number;
		do{
			cout << Message;
			cin >> Number;
		} while (Number < 0);
		return Number; 
	}

	int ReadRandomNumber(int From, int To) {
		return rand() % (To - From + 1) + From;
	}
}