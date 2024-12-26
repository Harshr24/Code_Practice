#include<iostream>
using namespace std;

class shape{
    public: 
    virtual void draw(){
        cout<<"Drawing a Shape\n";
    }
};
class Circle : public shape{
    public: 
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};
class Square : public shape{
    public: 
    void draw() override {
        cout << "Drawing a Square\n";
    }
};
int main(){
    shape* shapeptr;
    Circle circle;
    Square square;
    shapeptr = &circle;
    shapeptr->draw(); 

    shapeptr = &square;
    shapeptr->draw(); 
    return 0;
}