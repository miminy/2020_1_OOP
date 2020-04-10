#include <iostream>
int a = 5; // global variable
int add(int x, int y) { // add 함수에서의 x, y
	return x + y + a;
}

int main() {
	int x = 3; // main함수에서의 x, y
	int y = 2;

	std::cout << add(x, y+3) << std::endl;
	return 0;
}