#include <iostream>
#include <thread>

void thread_function()
{
    for (int i = 0; i < 100; i++)
    std::cout << "thread function 실행중: " << i << std::endl;
}

int main()
{

    std::thread threadObj(thread_function); // thread_function은 function pointer!
    for (int i = 0; i < 100; i++)
        std::cout << "thread 실행 전 main : " << i << std::endl;
    threadObj.join();
    std::cout << "thread 실행 후 main" << std::endl;
    return 0;
}