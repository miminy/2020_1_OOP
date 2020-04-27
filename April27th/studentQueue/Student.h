#pragma once
#include <iostream>
#include <string>
#define MAX_STRING	100
using namespace std;

class Student
{
	int		id;
	char	name[MAX_STRING];
	char	dept[MAX_STRING];
public:
	Student(int i = 0, char* nam = "", char* dep = "") {
		set(i, nam, dep);
	}
	void set(int i, char* nam, char* dep) {
		id = i;
		strcpy(name, nam);
		strcpy(dept, dep);
	}
	void display() {
		cout << "id : " << id << ", name:" << name << ", dept :" << dept << endl;
	}
};
