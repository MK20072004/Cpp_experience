#include<iostream>
using namespace std;

int main(){

    // int a= 10;
    // int* aptr;
    // aptr=&a;
    // cout<<&a<<endl;
    // cout<<aptr<<endl;

    // cout<<*aptr<<endl;

    // int n;
    // cin>>n;

    // *aptr += n;
    // cout<<a; 

    int arr[]={10,20,230,32,0,30,32};
    cout<<*arr<<endl;

    for (int a=0; a<7; a++){
        cout<<*(arr+a)<<endl;
    }

    return 0;
}