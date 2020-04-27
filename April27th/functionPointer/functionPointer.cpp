#include <iostream>
using namespace std;

int sum(int a, int b, void (*ap)(int*), void (*bp)(int*))
{
    if (ap != NULL)(*ap)(&a);
    if (bp != NULL)(*bp)(&b);
    return a + b;
}

void modify(int* p) {
    if (*p < 0) *p = -1 * (*p);
}

void main() {
    int result = sum(-2, 1, modify, modify); //°á°ú´Â 3
    cout << "result : " << result << endl;
}
