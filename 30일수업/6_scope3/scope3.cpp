#include<iostream>

using namespace std;

class scope_resolution
{
public:
    void output();  //function declaration
};

// function definition outside the class

void scope_resolution::output()
{
    cout << "Function defined outside the class.\n";
}

void main()
{
    scope_resolution x;

    x.output();
}
