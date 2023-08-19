#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1;a<=n; a++) {
        if (n%a==0) {cout<<a<<", ";}
    }

    return 0;
}