#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator! (); // ! 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator!() {
	if (kick == 0 && punch == 0) return true;
	else return false;
}

int main() {
	Power a(0, 0), b(5, 5);
	if (!a) cout << "a의 파워가 0이다." << endl; // ! 연산자 호출
	else cout << "a의 파워가 0이 아니다." << endl;
	if (!b) cout << "b의 파워가 0이다." << endl; // ! 연산자 호출
	else cout << "b의 파워가 0이 아니다." << endl;
}