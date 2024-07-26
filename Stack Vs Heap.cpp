#include<iostream>
using namespace std;

int main(){

    int a=10;                       //stored in stack
    int *p= new int();              //allocate memory in heap
    *p=10;
    cout<<p<<"  "<<*p<<endl;
    delete(p);                      //deallocate memory   // memory allocated in heap will be deleted and pointer becomes dangling pointer(should not be present)
    cout<<p<<"  "<<*p<<endl;
    p= new int [4];
    cout<<p<<"  "<<*p<<endl;
    delete[]p;
    cout<<p<<"  "<<*p<<endl;
    p=NULL;
    cout<<p<<"  "<<*p<<endl;


    return 0;
}

//stack Vs Heap(dynamic memory allocation)(free store)
// manually allocate and deallocate memory in heap
// Heap has no fixed size, can be expanded to as big as virtual memory of our system;
// 1) Stack size fixed and heap size not fixed;
// 2) A variable defined by new int is a pointer stored in stack that points towards memory in heap. As it is pointer it is global variable
//    and can be accessed from anywhere whereas in stack it is local variable(unless you make a pointer).
// 3) In stack both the things allocation and deallocation of memory is taken care by the system whereas in heap you have to do both these tasks manually. 