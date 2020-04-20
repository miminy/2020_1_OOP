#include <iostream>
#include <iomanip>
using namespace std;

void DrawTriangle(int numRows) {

    for (int i = 1; i <= numRows; i++) {
        cout << setfill(' ') << setw(numRows - i + 2) << " ";

        cout << setfill('#') << setw((i * 2 - 1)) << "#";
        cout << endl;
    }

}

int main()
{
    DrawTriangle(8);
    return 0;
}