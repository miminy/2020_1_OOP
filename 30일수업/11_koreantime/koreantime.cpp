#pragma warning(disable : 4996)
#include <iostream>
//#include <time.h> // or <ctime>
#include <ctime>
#include <iomanip>
#include <stdlib.h>   // for putenv
using namespace std;

int main(int argc, char** argv) {
  
    time_t m_t=time(NULL);
    struct tm* m_tm;
    
     // method 1
    time(&m_t);

    m_tm = gmtime(&m_t); //gmtime may not be thread-safe.

    cout << "[한국시간] " << setfill('0') << setw(2) << (m_tm->tm_hour + 9) % 24 << " : " 
        << setfill('0') << setw(2) << m_tm->tm_min << " : " << setfill('0') << setw(2) << m_tm->tm_sec << endl;

   
    // method 2

    // POSIX-specific
    //int result = putenv("TZ=Asia/Seoul");
    cout << "[한국시간] " << asctime(localtime(&m_t)) << endl;

    return 0;
}
