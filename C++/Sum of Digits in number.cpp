#include<iostream>

int main() 
{
    int num, sum=0;
    std::cout << "Enter a +ve integer: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Plese enter a +ve number" << std::endl;
    } 
    else {
        while (num != 0) 
        {
            sum = sum + (num % 10);
            num /= 10;
        }
        std::cout << "The sum of individual digits is : " << sum << std::endl;
    }
    return 0;
}