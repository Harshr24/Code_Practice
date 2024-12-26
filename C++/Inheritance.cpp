#include<iostream>
using namespace std;

class Animal {
    public:
        void sound() 
        {
            cout << "Animal makes sound" << endl;
        }
};

class Snake : public Animal {
    public:
        void sound() {
            cout << "Snake hiss \n" << endl;
        }
};

// Multiple Inheritance
class color {
    public:
        void colorType() {
            cout << "This is a colur set" << endl;
        }
};

class paper {
public:
    void paperType() {
        cout << "This is a paper" << endl;
    }
};

class Art : public color, public paper {
    public:
        void sound() {
            cout << "Art says hello world \n" << endl;
        }
    };

// Multilevel Inheritance
class College {
    public:
        void CollegeType() {
            cout << "This is a private College" << endl;
        }
};

class Amrita : public College {
    public:
        void Amritacamp() {
            cout << "This is  Amrita" << endl;
        }
};

class Amrawati : public Amrita {
    public:
        void amrcamp() {
            cout << "This is a Amrawati campus" << endl;
        }
};

int main() {
    Snake sn;
    Animal ani;
    ani.sound();
    sn.sound();

    Art art;
    art.colorType();
    art.paperType();
    art.sound();

    Amrawati amr;
    amr.CollegeType();
    amr.Amritacamp();
    amr.amrcamp();

    return 0;
}