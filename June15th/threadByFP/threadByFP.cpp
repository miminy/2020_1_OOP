#include <iostream>
#include <thread>

void thread_function()
{
    for (int i = 0; i < 100; i++)
    std::cout << "thread function ������: " << i << std::endl;
}

int main()
{

    std::thread threadObj(thread_function); // thread_function�� function pointer!
    for (int i = 0; i < 100; i++)
        std::cout << "thread ���� �� main : " << i << std::endl;
    threadObj.join();
    std::cout << "thread ���� �� main" << std::endl;
    return 0;
}