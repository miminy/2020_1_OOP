#include <iostream>
int a = 5; // global variable
int add(int x, int y) { // add �Լ������� x, y
	return x + y + a;
}

int main() {
	int x = 3; // main�Լ������� x, y
	int y = 2;

	std::cout << add(x, y+3) << std::endl;
	return 0;
}