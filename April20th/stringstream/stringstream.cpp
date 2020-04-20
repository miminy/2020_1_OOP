#include <iostream>
#include <string>
#include <sstream>    

using namespace std;
void MessageBoxAlert(string messageString)
{
	cout << "alert : " << messageString << endl;
}
int main()
{
	int levelNum = 15;
	stringstream messageText;
	stringstream myConverter;
	messageText << "Level " << levelNum << " is out of bounds.";
	MessageBoxAlert(messageText.str());

	int myInt;
	string myString;
	double myDouble;
	myConverter << "137 Hello 2.71828";
	myConverter >> myInt >> myString >> myDouble; // 혼합 데이터 추출

	cout << "myInt : " << myInt << endl;
	cout << "myString : " << myString << endl;
	cout << "myDouble : " << myDouble << endl;
}