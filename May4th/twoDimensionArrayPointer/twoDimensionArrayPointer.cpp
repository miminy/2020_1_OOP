#include <iostream>
using namespace std;

int** alloc2DInt(int rows, int cols)
{
	int value = 0;
	if (rows <= 0 || cols <= 0) return NULL;
	int** mat = new int* [rows];
	for (int i = 0; i < rows; i++) {
		mat[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			*(mat[i] + j) = value++;
		}
	}
	return mat;
}
void free2DInt(int** mat, int rows, int cols = 0)
{
	if (mat != NULL) {
		for (int i = 0; i < rows; i++)
			delete[] mat[i];
		delete[] mat;
	}
}
int main()
{
	int** mat=alloc2DInt(3, 3);
	cout << mat[1][1] << endl; // 4
	free2DInt(mat, 3, 3);
}