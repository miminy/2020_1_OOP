#include <iostream>
#include <thread>
int main()
{
    int x = 9;
    std::thread threadObj([] {
        for (int i = 0; i < 100; i++)
            std::cout << "thread function 실행중: " << i << std::endl;
        }); // 람다 함수로 thread 생성

    for (int i = 0; i < 100; i++)
        std::cout << "thread 실행 전 main : " << i << std::endl;

    threadObj.join();
    std::cout << "thread 실행 후 main" << std::endl;
    return 0;
}