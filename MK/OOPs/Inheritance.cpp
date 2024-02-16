#include<iostream>
using namespace std;

class Father{
    string name;
    string DOB;
    int age;

    public:

    Father(){
        cout<<"This is the default constructor of class Father"<<endl;
    }// Default constructor;

    Father(string n, string birth, int ag){
        name = n;
        DOB = birth;
        age = ag;
    }// Parameterized constructor;

    Father(Father &another){
        name = another.name;
        DOB = another.DOB;
        age = another.age;
    }// Copy constructor;

    ~Father(){
        cout<<"Destructor Called for Father"<<endl;
    }// Destructor;

    void getInfo(){
        cout<<"F_Name: "<<name<<endl;
        cout<<"F_DOB: "<<DOB<<endl;
        cout<<"F_Age: "<<age<<endl;
    }

};

class Mother{
    string name;
    string DOB;
    int age;

    public:

    Mother(){
        cout<<"This is the default constructor of class Mother"<<endl;
    }// Default constructor;

    Mother(string n, string birth, int ag){
        name = n;
        DOB = birth;
        age = ag;
    }// Parameterized constructor;

    Mother(Mother &another){
        name = another.name;
        DOB = another.DOB;
        age = another.age;
    }// Copy constructor;

    ~Mother(){
        cout<<"Destructor Called for Mother"<<endl;
    }// Destructor;

    void getInfo(){
        cout<<"M_Name: "<<name<<endl;
        cout<<"M_DOB: "<<DOB<<endl;
        cout<<"M_Age: "<<age<<endl;
    }

};

class Child: public Father, public Mother{
    string name;
    string DOB;
    int age;

    public:
    
    Child(string nam, string dob, int ag){
        cout<<"This is the parameterized constructor of class child"<<endl;
        name = nam;
        DOB = dob;
        age = ag;
    } // parameterized constructor.

    Child(){
        cout<<"This is the default constructor of class child"<<endl;
    }// default constructor

    ~Child(){
        cout<<"Destructor called for Child";
    }

    void getInfo(){
        cout<<"Child Name: "<<name<<endl;
        cout<<"DOB of child: "<<DOB<<endl;
        cout<<"Child is "<<age<<" years old\n";
    }

};

int main(){

    Child c("man", "8th feb 2012", 8);
    c.getInfo();

    return 0;
}