#include <iostream>    
using namespace std; 
class myclass {
    public : 
    myclass(){
        cout << "if class name and method name are same it's constructor" << std::endl;
    }
    ~myclass(){
        cout<<"destructor"<<std::endl;}
};

int main(){

    myclass *obj = new myclass();
    cout << "..." << std::endl;
    delete obj;
    obj = nullptr;
    return 0;
}