#include<iostream>
using namespace std;

long long int factorial(int n) {
    long long int a=1;
    for (int b=1; b<=n; b++) {
        a*=b;
    }
    return a;
}

int nCr(int n, int r) {
    long long int ncr= factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}

int main(){

    int n;
    cin>>n;

    for (int a=0; a<n; a++) {
        for (int i=1; i<=(n-(a+1)); i++) {cout<<" ";}
        for (int b=0; b<=a; b++) {
            cout<<nCr(a,b)<<" ";
        }
        cout<<endl;
    }

    return 0;
}