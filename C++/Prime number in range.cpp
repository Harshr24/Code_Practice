#include <iostream>

int pn(int n) {
    for (int i = 2; i*i <= n; i++) //The reason is that the largest prime factor of a number cannot be greater than its square root.
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "No prime numbers in the range." << std::endl;
    } 
    
    else {
        std::cout << "Prime numbers between 1 to " << n << " are: ";
        for (int i = 2; i <= n; i++) {
            if (pn(i)==1) {
                std::cout << i << ", ";
            }
        }
    }
    return 0;
}