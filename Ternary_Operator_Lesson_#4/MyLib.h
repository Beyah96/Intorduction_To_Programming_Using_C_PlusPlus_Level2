#pragma once

#include <iostream>

using namespace std;

namespace MyLib
{
	string isPositiveOrNegative(int Number) {
		return (Number >= 0) ? "Positive" : "Negative";
	}

	string isNullPositiveOrNegative(int Number) {
		return (Number == 0) ? "Null" : (Number > 0) ? "Positive" : "Negative";
	}

}