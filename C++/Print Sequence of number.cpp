#include<iostream>

int main ()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::cout << "Sequence from 0 to " << n<< " is : ";
    for (int i=0;i<=n-1;i++)
    {
        std::cout << i << " , ";
    }
    std::cout << n << " . ";
}