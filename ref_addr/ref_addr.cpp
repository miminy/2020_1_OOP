#include <iostream>

using namespace std;

void CallByAddress(char* add);
void CallByReference(char& ref);

void CallByAddress(char* add)
{
    cout << sizeof(add) << endl;
}

void CallByReference(char& ref)
{
    cout << sizeof(ref) << endl;
}

int main(void)
{
    char nBuf;

    CallByAddress(&nBuf);
    CallByReference(nBuf);

    return 0;
}
