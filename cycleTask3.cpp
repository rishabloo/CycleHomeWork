#include<iostream>

int main()
{
int number;
int sum = 0;
 std::cout << "Enter number " << std::endl;
 std::cin >> number;
 for (int multi = 1; multi <=10; ++multi)
 {
   std::cout << number << " x " << multi << " = " << number * multi << std::endl;
 }

return 0;
}