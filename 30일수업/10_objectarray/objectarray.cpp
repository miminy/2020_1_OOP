#include "objectarray"
int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; // Circle �迭 �ʱ�ȭ

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
}