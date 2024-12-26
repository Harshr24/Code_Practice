#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    // int x = 4+2;
    // cout << x/3 << ' ' << x*2 << "\n";

    /*for (int x=0; x<5; x++) {
        for (int y=0; y<x; y++) {
            cout << "*";
        }   cout << "\n";
    }
    return 0;          pattern que */    

    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}