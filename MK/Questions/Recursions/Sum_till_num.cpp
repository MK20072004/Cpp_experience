#include<iostream>
using namespace std;

int sum_till_num(int n){
    if (n<0){
        cout<<"Error: Please give valid input"<<endl;
        return -1;
    }
    else if(n==0){
        return 0;
    }
    return n + sum_till_num(n-1);
}

int main(){

    int n;
    cin>>n;
    cout<<sum_till_num(n)<<endl;

    return 0;
}