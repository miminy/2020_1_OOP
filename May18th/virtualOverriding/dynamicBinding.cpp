#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main() {
	Shape* pStart = NULL;
	Shape* pLast;

	pStart = new Circle(); // 처음에 원 도형을 생성한다.
	pLast = pStart;

	pLast = pLast->add(new Rect()); // 사각형 객체 생성
	pLast = pLast->add(new Circle()); // 원 객체 생성
	pLast = pLast->add(new Line()); // 선 객체 생성
	pLast = pLast->add(new Rect()); // 사각형 객체 생성

	// 현재 연결된 모든 도형을 화면에 그린다.
	Shape* p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}
	// 현재 연결된 모든 도형을 삭제한다.
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext(); // 다음 도형 주소 기억
		delete p; // 기본 클래스의 가상 소멸자 호출
		p = q; // 다음 도형 주소를 p에 저장
	}
}