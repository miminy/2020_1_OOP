#include <iostream> 
#include <string> 
using namespace std;
// 원형 선언 
void star(int a=5); 
void msg(int id, string text="");
// 함수 구현 
void star(int a) { 
	for(int i=0; i<a; i++) cout << '*'; cout << endl; 
}
void msg(int id, string text) { 
	cout << id << ' ' << text << endl; 
}
int main() { 
	// star() 호출 
	star(); 
	star(10);
	// msg() 호출 
	msg(10); 
	msg(10, "Hello");
}
