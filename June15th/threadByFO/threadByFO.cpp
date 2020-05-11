#include <iostream>
#include <thread>
class DisplayThread
{
public:
    void operator()()
    {
        for (int i = 0; i < 100; i++)
            std::cout << "thread function 실행중 : " << i << std::endl;
    }
};
int main()
{
    std::thread threadObj((DisplayThread())); // DisplayThread라는 class(function을 가진)로 thread 생성
    for (int i = 0; i < 100; i++)
        std::cout << "thread 실행 전 main : " << i << std::endl;
    std::cout << "thread 생성 기다림" << std::endl;
    threadObj.join();
    std::cout << "thread 실행 후 main" << std::endl;
    return 0;
}