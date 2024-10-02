#pragma warning (disable : 4996)

// DataTime.cpp : Local UTC.

#include <iostream>
#include <ctime>

using namespace std;

int main() {

	time_t timeNow = time(0);
	char* DateNow = ctime(&timeNow);
	cout << "Local time is : " << DateNow << endl;

	tm* stTimeGMT = gmtime(&timeNow);
	DateNow = asctime(stTimeGMT);
	cout << "UTC time is : " << DateNow << endl;
	return 0;
}

