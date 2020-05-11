#include <iostream>
#include <thread>
void threadCallback(int const& x)
{
    int& y = const_cast<int&>(x);
    y++;
    std::cout << "Thread������ x= " << x << std::endl; // 10
}
int main()
{
    int x = 9;
    std::cout << "���ο��� thread ������ x = " << x << std::endl; // 9
    //std::thread threadObj(threadCallback, x);
    std::thread threadObj(threadCallback, std::ref(x));
    threadObj.join();
    std::cout << "���ο��� thread ���� �� x = " << x << std::endl; // 10
    return 0;
}