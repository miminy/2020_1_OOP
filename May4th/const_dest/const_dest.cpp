#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char* name;
    int age;
public:
    Person(const char myname[], int myage)  // 생성자
    {
        int len = strlen(myname) + 1; //stlen() 문자열 길이 + 널 문자 '\o'
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    ~Person() // 소멸자
    {
        delete[] name;
        cout << "destructor is called!" << endl;
        //_sleep(1000);
    }
};

int main(void)
{
    Person man1("Jeong A Kang", 14);
    Person man2("Miminy Kang", 14);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}