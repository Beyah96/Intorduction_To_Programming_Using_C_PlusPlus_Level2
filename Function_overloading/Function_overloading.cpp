#include<iostream>
using namespace std; 
double  MySum2DoubleNumbers(double a, double b)
{ 
	return (a + b); 
} 
int MySum2IntegerNumbers(int a, int b)
{ 
	return (a + b);
} 
int MySum3IntegerNumbers(int a, int b, int c) 
{ 
	return (a + b + c); 
} int MySum4IntegerNumbers(int a, int b, int c, int d)
{ 
	return (a + b + c + d); 
} 
int main() 
{   
	cout << MySum2IntegerNumbers(10, 20) << endl;
	cout << MySum2DoubleNumbers(10.1, 20.1) << endl;
	cout << MySum3IntegerNumbers(10, 20, 30) << endl;   
	cout << MySum4IntegerNumbers(10, 20, 30, 40) << endl; 
	return 0;
}