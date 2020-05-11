#include <iostream>

template <typename T>
inline T SQUARE(T x)
{
    return x * x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(7.154) << std::endl;

    return 0;
}