#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1; a<=n; a++) {
        for (int b=1; b<=(n-a); b++) {cout<<" ";}
        for (int c=a; c>=1; c--) {cout<<c;}
        for (int d=2; d<=a; d++) {cout<<d;}
        cout<<endl; 
    }

    return 0;
}