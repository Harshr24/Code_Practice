#include <iostream>    
using namespace std;    
class Animal {    
    public:    
void eat(){      
cout<<"Eating...";      
    }        
};     
class Dog: public Animal      
{      
 public:    
 void eat()      
    {           cout<<"Eating bread...";      
    }      
};    
class pegion: public Animal      
{      
 public:    
 void fly()      
    {           cout<<"flying breed...";      
    }      
};    
int main(void) {    
   Dog d = Dog();      
   d.eat();
   pegion p = pegion();      
   p.eat();
   return 0;    
}    