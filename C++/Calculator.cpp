#include<iostream>

using namespace std;
class calculator{
public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double a, double b){
        return a+b;
    }
};

int main(){
    calculator c;
    cout<<"sum of 2 and 3 : "<<c.add(2,3)<<endl;
    cout<<"sum of 2, 3 and 4 : "<< c.add(2,3,4)<<endl;
    cout<<"sum of 2.5 and 3.5: "<< c.add(2.5,3.5)<<endl;
}