#include "objectarray"
int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle 배열 초기화

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}