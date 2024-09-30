#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char Name[] = "Mohamed Said BEYAH";
	char School[] = "Programming Advices";

	printf("My Name is %s And I'm a studend\n", Name);
	printf("I study at the %s school\n", School);

	char c = 'S';
	printf("Setting the width of %3c\n", c);
	printf("Setting the width of %*c\n", 1, c);
	printf("Setting the width of %*c\n", 2, c);
	printf("Setting the width of %*c\n", 3, c);
	printf("Setting the width of %*c\n", 5, c);
	return 0;
}