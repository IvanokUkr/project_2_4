#include <iostream>

int main()
{
    int x;
    std::cout << "Enter a number:";
    std::cin >> x;
    if (x % 2 == 0)
    {
        std::cout << x << " is even" << std::endl;
    }
    else
    {
        std::cout << x << " is odd" << std::endl;
    }
    return 0;
}
