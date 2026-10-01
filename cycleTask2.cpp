#include<iostream>

int main ()
{
    int x;
    int sum = 0;

    std::cout << " Enter number " << std::endl;
    std::cin >> x;

    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
std::cout << " Sum = " << sum << std::endl;

}