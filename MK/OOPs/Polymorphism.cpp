#include<iostream>
using namespace std;

class Base{
    public:

    virtual void print(){
        cout<<"Print function of base class\n";
    }

    void display(){
        cout<<"This is display function of base class\n";
    }

};

class Derived: public Base{
    public:

    Derived(){
        cout<<"This is the default constructor\n";
    }

    void print(){
        cout<<"Print function of derived class\n";
    }

    void display(){
        cout<<"This is display function of derived class\n";
    }

};

int main(){

    Base *baseptr;
    Derived d;
    baseptr = &d;
    baseptr -> print();     // derived class cause we have written virtual in front of print function.
    baseptr -> display();   // base class.

    return 0;
}