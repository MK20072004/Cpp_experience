#include<iostream>
using namespace std;

int n_raise_power(int n, int p){
    if (p==0){
        return 1;
    }
    else if(p<0){
        cout<<"Out of range of function"<<endl;
        return -1;
    }
    return n*n_raise_power(n, p-1);
}

int main(){

    int num,power;
    cin>>num>>power;
    cout<<n_raise_power(num, power)<<endl;


    return 0;
}