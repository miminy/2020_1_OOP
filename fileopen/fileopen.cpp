#pragma warning(disable : 4996)
//#include <cstdio>
//#include <cstdlib>
#include <iostream>
using namespace std;

char* ReadFromFile(const char* filename, size_t numChars) {
    FILE* f;  char* buffer;

    buffer = (char *)malloc(numChars + 1); // 버퍼 만들기
    if (buffer == NULL)	return NULL;
    cout << "filename : " << filename << endl;
    f = fopen(filename, "rb");
    if (f == NULL)	goto error; // 파일 오픈 에러 처리
    cout << "try to read file..." << endl;
    if (fread(buffer, numChars, 1,  f) != numChars)	goto error; // 파일 읽기 에러 처리,  실제로는 fread(buffer, 1, numChars, f)로 해야 바로 동작
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
        buffer = (char*)malloc(numChars + 1); // 버퍼 만들기
        if (buffer == NULL)	return NULL;
        memset(buffer, NULL, numChars + 1); // c code style

        f = fopen(filename, "rb");
        if (f == NULL)	throw 1; // 파일 오픈 에러 처리
        cout << "try to read file..." << endl;
        if (fread(buffer, numChars, 1, f) != numChars)	throw 2; // 파일 읽기 에러 처리, 실제로는 fread(buffer, 1, numChars, f)로 해야 바로 동작
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