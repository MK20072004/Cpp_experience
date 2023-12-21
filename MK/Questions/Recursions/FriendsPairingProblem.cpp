#include<iostream>
using namespace std;

int FriendsPairing(int n){
    if (n<0){
        cout<<"Error: Please give positive value"<<endl;
        return -1;
    }
    if (n==1 || n==0){
        return 1;
    }
    return FriendsPairing(n-1) + ((n-1)*FriendsPairing(n-2));
}

int main(){

    int n;
    cin>>n;
    cout<<FriendsPairing(n)<<endl;

    return 0;
}