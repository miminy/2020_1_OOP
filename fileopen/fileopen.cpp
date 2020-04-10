#pragma warning(disable : 4996)
//#include <cstdio>
//#include <cstdlib>
#include <iostream>
using namespace std;

char* ReadFromFile(const char* filename, size_t numChars) {
    FILE* f;  char* buffer;

    buffer = (char *)malloc(numChars + 1); // ���� �����
    if (buffer == NULL)	return NULL;
    cout << "filename : " << filename << endl;
    f = fopen(filename, "rb");
    if (f == NULL)	goto error; // ���� ���� ���� ó��
    cout << "try to read file..." << endl;
    if (fread(buffer, numChars, 1,  f) != numChars)	goto error; // ���� �б� ���� ó��,  �����δ� fread(buffer, 1, numChars, f)�� �ؾ� �ٷ� ����
    cout << buffer << endl;
    fclose(f);
    buffer[numChars] = '\0';
    return buffer;

error:
    cout << "inside error!" << endl;
    free(buffer);
    if (f != NULL)		fclose(f);
    return NULL;
}
char* ReadFromFile2(const char* filename, size_t numChars) {
    FILE* f = nullptr;  char* buffer;
    try
    {
        buffer = (char*)malloc(numChars + 1); // ���� �����
        if (buffer == NULL)	return NULL;
        memset(buffer, NULL, numChars + 1); // c code style

        f = fopen(filename, "rb");
        if (f == NULL)	throw 1; // ���� ���� ���� ó��
        cout << "try to read file..." << endl;
        if (fread(buffer, numChars, 1, f) != numChars)	throw 2; // ���� �б� ���� ó��, �����δ� fread(buffer, 1, numChars, f)�� �ؾ� �ٷ� ����
        cout << buffer << endl;
        fclose(f);
        buffer[numChars] = '\0';
        return buffer;
    }
    catch (const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << endl;
        free(buffer);
        if (f != NULL)		fclose(f);
        return NULL;
    }
    catch (int error)
    {
        std::cout << "error number :" << error << endl ;
        free(buffer);
        if (f != NULL)		fclose(f);
        return NULL;
    }

}
int main() {
    ReadFromFile("C:\\Users\\mimin\\Documents\\text_top15.txt", 20);
}