#include<iostream>
using namespace std;

int fibenocci(int num){
    if (num<0){
        cout<<"Error: Please give non-negetive number"<<endl;
        return -1;
    }
    else if(num==0 || num==1){
        return num;
    }
    return fibenocci(num-1)+ fibenocci(num-2);
}

int main(){

    int n;
    cin>>n;
    cout<<fibenocci(n)<<endl;

    return 0;
}