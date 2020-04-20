#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	/*
	MyVector() {
		p = new int[100];
		size = 100;
	}
	MyVector(int n) {
		p = new int[n];
		size = n;
	}
	*/

	//이곳에 디폴트 매개변수를 가진 생성자 작성하라
	MyVector(int n=100) {
		p = new int [n];
		size = n;
	}

	
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, * v2;
	v1 = new MyVector(); // 디폴트로 정수 100개의 배열 동적 할당
	v2 = new MyVector(1024); // 정수 1024개의 배열 동적 할당

	delete v1;
	delete v2;
}