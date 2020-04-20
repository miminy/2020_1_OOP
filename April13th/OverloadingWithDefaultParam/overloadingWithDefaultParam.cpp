#include <iostream> 
using namespace std;
/*
void fillLine() { 
	// 25 개의 '*' 문자를 한 라인에 출력 
	for(int i=0; i<25; i++) cout << '*'; cout << endl; 
} 
void fillLine(int n, char c) { 
	// n개의 c 문자를 한 라인에 출력 
	for(int i=0; i<n; i++) cout << c; cout << endl; 
}
*/

void fillLine(int n = 25, char c = '*') { 
	// n개의 c 문자를 한 라인에 출력 
	for(int i=0; i<n; i++) cout << c; cout << endl; 
}
int main() {
		fillLine(); // 25개의 '*'를 한 라인에 출력 
		fillLine(10, '%'); // 10개의 '%'를 한 라인에 출력 
}
