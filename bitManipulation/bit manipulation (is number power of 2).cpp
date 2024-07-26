#include<iostream>
using namespace std;

bool power_2(int num){
    // if ((num & num-1)==0){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return (num && !(num & num-1));
}

int main(){

    int num;
    cin>>num;
    cout<<power_2(num)<<endl;

    return 0;
}