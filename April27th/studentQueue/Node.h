#pragma once

#include "Student.h"
class Node : public Student
{
	Node*	link;	
public:
	Node( int id,char* name, char* dept)
		: Student(id, name, dept), link(NULL) { }
	Node* getLink()				{ return link; }
	void setLink(Node* next)	{ link=next; }
};