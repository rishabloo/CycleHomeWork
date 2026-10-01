#include<iostream>

int main()
{
    int x;
    int sum = 0;
    do
    {
        std::cout << " Enter number zero " << std::endl;
        std::cin >> x;
        sum += x;
    } while (x !=  0);
    
std::cout << " Sum = " << sum << std::endl;

 return 0;
}