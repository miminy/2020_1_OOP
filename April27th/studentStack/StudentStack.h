#pragma once

#include "Node.h"
class LinkedStack
{
	Node*	top;
public:
	LinkedStack()	{ top=NULL; }						
	~LinkedStack()	{ while(!isEmpty()) delete pop(); }	
	bool isEmpty( ) { return top==NULL; }
	void push( Node *n ) {
		if( isEmpty() ) top = n;
		else {
			n->setLink( top );
			top = n;			
		}
	}
	Node* pop() {
		if( isEmpty() ) return NULL;
		Node *n = top;
		top = top->getLink();
		return n;
	}
	Node* peek()	{ return top; }
	void display( ) {
		cout << "List :"<< endl;
		for (Node* p = top; p != NULL; p = p->getLink())
			p->display();
		cout << endl;
	}
};
