#include<iostream>
using namespace std;

int TilingWays(int n){
    if (n==1 || n==0){
        return 1;
    }
    if (n<0){
        cout<<"Error: Please give valid input";
        return -1;
    }
    return TilingWays(n-1)+TilingWays(n-2);
}

int main(){

    int n;
    cin>>n;
    cout<<TilingWays(n);

    return 0;
}