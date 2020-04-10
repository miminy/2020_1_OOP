#include<iostream>
using namespace std;

int n = 12; //global variable
int main()
{
	int n = 13; //local variable
	cout << ::n << endl;
	cout << n << endl;

	return 0;
}
