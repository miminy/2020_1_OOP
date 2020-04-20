#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << showbase;

	// 타이틀을 출력한다.
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	// 하나의 수를 십진수, 8진수, 16진수 형태로 한 줄에 출력한다.
	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i; // 10진수
		cout << setw(10) << setfill('^') << oct << i; // 8진수
		cout << setw(10) << setfill('*') << hex << i << endl; // 16진수
	}
	cout << "boolalpha : " <<  true << endl;
	cout << "boolalpha : " << boolalpha << true << endl;
	cout << "noboolalpha: " << noboolalpha << true << endl;

	//cout << dec << 10 << endl;
	//cout << oct << 10 << endl;
	//cout << hex << 10 << endl;
}