#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size : " << endl;
    cin >> n;
    int a[n];

    cout << "Enter array elements3 : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int lar = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > lar)
        {
            lar = a[i];
        } 
    }
    cout << "the largest number is : " << lar << endl;

    int smol = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < smol)
        {
            smol = a[i];
        }
        
    }
    cout << "the smallest number is : " << smol << endl;
}