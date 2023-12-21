#include<iostream>
using namespace std;

int factorial(int num){
    if(num<0){
        cout<<"Error: Invalid input for a factorial function"<<endl;
        return -1;
    }
    else if(num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}