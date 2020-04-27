#include "StudentQueue.h"
void main()
{
	StudentQueue que;
	que.enqueue(new Node(1604305, "이민호", "컴퓨터공학과"));
	que.enqueue(new Node(1930482, "차은우", "기계공학과"));
	que.enqueue(new Node(2048672, "정해인", "전자공학과"));
	que.display();
	delete que.dequeue();
	cout << "After deque :" << endl;
	que.display();
}