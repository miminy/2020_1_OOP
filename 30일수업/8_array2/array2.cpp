#include <iostream>
using namespace std;
void aFunction(int arr[][4]) { // dimension은 항상 initialize되어야 함
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            cout << arr[i][j];

    cout << endl;
}
int main() {
    int twoDimArray[2][4] = { {2, 5, 8, 0} , {3, 6, 9, 0} };
    aFunction(twoDimArray);
    return 0;
}
