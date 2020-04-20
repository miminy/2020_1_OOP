#define COLUMN_WIDTH 4
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void PrintTableBody() {
    ifstream input("table-data.txt");
    int rowNumber = 0;
    while (true) {
        int intValue;
        double doubleValue;
        input >> intValue >> doubleValue;
        if (input.fail()) break;
        cout << setw(COLUMN_WIDTH) << (rowNumber + 1) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << " | ";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;
        rowNumber++;
    }
}
int main() {
    PrintTableBody();
}