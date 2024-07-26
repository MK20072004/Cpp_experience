#include<iostream>
using namespace std;

int main(){
    
float n,i;
char op;
cout<<"n and i: ";
cin>>n>>i;
cout<<"op: ";
cin>>op;

switch(op) {
    case '+':
    cout<<n+i;
    break;
    case '-':
    cout<<n-i;
    break;
    case '*':
    cout<<n*i;
    break;
    case '/':
    cout<<n/i;
    break;

    default: 
    cout<<"enter another op \n";
    break;

}


    return 0;
}