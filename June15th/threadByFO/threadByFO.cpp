#include <iostream>
#include <thread>
class DisplayThread
{
public:
    void operator()()
    {
        for (int i = 0; i < 100; i++)
            std::cout << "thread function ������ : " << i << std::endl;
    }
};
int main()
{
    std::thread threadObj((DisplayThread())); // DisplayThread��� class(function�� ����)�� thread ����
    for (int i = 0; i < 100; i++)
        std::cout << "thread ���� �� main : " << i << std::endl;
    std::cout << "thread ���� ��ٸ�" << std::endl;
    threadObj.join();
    std::cout << "thread ���� �� main" << std::endl;
    return 0;
}