#include <iostream>    
using namespace std; 
class test {
    public :
    int x;
};

class child : public test {
    public : 
    int y;
}; 

int main()
{
    child t;
    t.x = 20;
    t.y = 25;
    cout << t.x << endl;
    cout << t.y << endl;
}

/*class MyClass {
public:
    int x;       // Public attribute

private:
    int y;       // Private attribute
};

int main() {
    MyClass myobj;
    myobj.x = 25;   // Allowed (public)
    myobj.y = 50;   // Not allowed (private) - will result in an error

    return 0;
}*/
