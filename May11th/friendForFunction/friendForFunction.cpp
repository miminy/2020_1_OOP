#include <iostream>

using namespace std;

class Point;  // Point이라는 클래스의 이름을 미리 알림

class PointOP  // Point연산을 정의하는 클래스
{
private:
    int opcnt;
public:
    PointOP() : opcnt(0) {}
    Point PointAdd(const Point&, const Point&);  // 클래스함수를 선언만 하므로 매개변수의 이름을 생략해도 됨
    Point PointSub(const Point&, const Point&);
    ~PointOP()
    {
        cout << "total number of operation calls : " << opcnt << endl;
    }
};

class Point
{
private:
    int x;
    int y;
public:
    Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {}
    friend Point PointOP::PointAdd(const Point&, const Point&);  // PointOP 안의 함수를 friend 선언하여 접근
    friend Point PointOP::PointSub(const Point&, const Point&);  // PointOP 안의 함수를 friend 선언하여 접근
    friend void ShowPointPos(const Point&);  // 전역함수 ShowPointPos()에 friend 선언
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt2.x - pnt1.x, pnt2.y - pnt1.y);
}

void ShowPointPos(const Point& pos) // 전역함수
{
    cout << "x: " << pos.x << ", ";
    cout << "y: " << pos.y << endl;
}

int main(void)
{
    Point pos1(1, 2);
    Point pos2(2, 4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos1, pos2));

    return 0;
}
