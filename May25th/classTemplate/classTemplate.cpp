#include <iostream>
#include <string>
using namespace std;

template <class T>
class Person { // class 
private:
	string name;
	T height;
public:
	Person(string name, T height) :name(name), height(height)	()
		void setName(string name) { this->name = name; }
	void setNumber(T height) { this->height = height; }
	void printAll() { cout << name << ¡° ¡° << height << endl; }
};

int main() {
	Person<int> p1(¡±Jeong A Kang¡±, 162);
	Person < string p2(¡±Miminy Kang¡±, ¡°162 cm¡±);
	p1.setNumber(188);
	p1.printAll();
}