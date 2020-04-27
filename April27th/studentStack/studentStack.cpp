#include "StudentStack.h"

void main()
{
	LinkedStack stack;
	stack.push(new Node(1604305, "이민호", "컴퓨터공학과"));
	stack.push(new Node(1930482, "차은우", "기계공학과"));
	stack.push(new Node(2048672, "정해인", "전자공학과"));
	stack.display();

	Node *node = stack.pop();
	cout << "poped node : ";
	node->display();
	cout << endl;
	delete node;
	stack.display();
}