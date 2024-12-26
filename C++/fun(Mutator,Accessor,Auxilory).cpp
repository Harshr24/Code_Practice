/*#include <iostream>
using namespace std;
class rect{
    private : int width; int height;
    public: rect(int w, int h) : width(w), height(h) {}
    int getwd() const
        {
            return this->width;
        }
    int getht() const
        {
            return this->height;
        }
};
int main()
{
    rect  r(10,5);
    int w= r.getwd();
    int h= r.getht();
    std::cout << w << " " << h << std::endl;
    return 0;
}*/

#include <iostream>
using namespace std;
class circle{
    private : double rad;
    public: circle(double r) : rad(r) {}
    //Mutator
    void setrad(double r)
        {   if (r>=0){
            rad = r;
        }}
    //Accesssor 
    double getrad() const{
        return rad;
    }
    //AUxilory 
    double calcar() const {
        return 3.14159*rad*rad;
    }
};

int main()
{
    circle c(10);
    double r= c.getrad();
    double a= c.calcar();
    cout << r << " " << a << endl;
    return 0;
};