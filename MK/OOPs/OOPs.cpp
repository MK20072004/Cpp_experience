#include<iostream>
using namespace std;

class Students{

    string name;
    int age;
    string gender;

    public:

    Students(){
        cout<<"This is the default constructor"<<endl;
    }// Default constructor

    Students(string s, int ag, string gen){
        cout<<"This is the parameterised constructor"<<endl;
        name = s;
        age = ag;
        gender = gen;
    }// Parameterised constructor

    Students(Students &a){
        cout<<"This is the copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }// Copy constructor

    ~Students(){
        cout<<"Destructor called"<<endl;
    }// Destructor

    bool operator == (Students &a){
        if (name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    // void setInfo(string s, int a, string g){
    //     name = s;
    //     age = a;
    //     gender = g;
    // }
};

int main(){

    Students a("MK", 19, "Male"), b("SY", 18, "Male"), c("SS", 18, "Female");
    // a.setInfo("MK", 19, "Male");
    // b.setInfo("SY", 18, "Male");
    // c.setInfo("SS", 18, "Female");

    // Students arr[4];
    // for (int i=0; i<4; i++){
    //     string n;
    //     cin>>n;
    //     int age;
    //     cin>>age;
    //     string gen;
    //     cin>>gen;
    //     arr[i](n, age, gen);
    //     arr[i].setInfo(n, age, gen);
    // }
    

    a.printInfo();
    b.printInfo();
    c.printInfo();
    // for (int i=0; i<4; i++){
    //     arr[i].printInfo();
    // }

    Students d;
    Students e=b;
    b.printInfo();
    if (a==c){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;
}