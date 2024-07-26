#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1; a<=n; a++) {
        for (int b=1; b<=a; b++) {
            if (a%2==0) {                          //or (a+b%2==0) cout<<"1 "; else cout<<"0 "
                if (b%2==0) {cout<<"1 ";}
                else {cout<<"0 ";}
            } else {
                if (b%2==0) {cout<<"0 ";}
                else {cout<<"1 ";}
            }
        } cout<<endl;
    }

    return 0;
}