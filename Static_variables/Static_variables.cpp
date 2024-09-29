
#include <iostream>

using namespace std;

void Function() {
    static int Number = 1;
    cout << Number << endl;
    Number++;
}
int main()
{
    Function();
    Function();
    Function();
}
