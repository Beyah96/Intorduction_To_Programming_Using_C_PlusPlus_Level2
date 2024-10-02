#pragma warning (disable : 4996)

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	time_t timeNow = time(0);
	tm* now = localtime(&timeNow);
	cout << "now->tm_year : " << now->tm_year << endl;
	cout << "now->tm_mon : " << now->tm_mon << endl;
	cout << "now->tm_hour : " << now->tm_hour << endl;
	cout << "now->tm_wday : " << now->tm_wday << endl;
	cout << "now->tm_hour : " << now->tm_hour << endl;
	cout << "now->tm_mday : " << now->tm_mday << endl;
	cout << "now->tm_sec : " << now->tm_sec << endl;
	cout << "now->tm_min : " << now->tm_min << endl;
	return 0;
}