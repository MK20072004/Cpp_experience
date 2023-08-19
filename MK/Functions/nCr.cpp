#include<iostream>
using namespace std;

long long int factorial(int n) {
    long long int a=1;
    for (int b=1; b<=n; b++) {
        a *= b;
    }
    return a;
}

long long int nCr(int n, int r) {
    long long int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr; 
}

int main(){

    int n,r;
    cin>>n>>r;
    
    cout<<nCr(n,r);


    return 0;
}