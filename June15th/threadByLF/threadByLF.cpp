#include <iostream>
#include <thread>
int main()
{
    int x = 9;
    std::thread threadObj([] {
        for (int i = 0; i < 100; i++)
            std::cout << "thread function ������: " << i << std::endl;
        }); // ���� �Լ��� thread ����

    for (int i = 0; i < 100; i++)
        std::cout << "thread ���� �� main : " << i << std::endl;

    threadObj.join();
    std::cout << "thread ���� �� main" << std::endl;
    return 0;
}