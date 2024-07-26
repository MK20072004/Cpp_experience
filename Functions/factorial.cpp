#include<iostream>
using namespace std;

void factorial(int n) {
    int b=1;
    for (int a=1; a<=n; a++) {
        b *= a;
    }
    cout<<b;
    return;
}

int main(){

    int t;
    cin>>t;

    factorial(t);

    return 0;
}