#include<iostream>
using namespace std;

int sum(int n) {
    int b=0;
    for (int a=1; a<=n; a++) {
        b += a;
    }
    return b;
}

int main(){

    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}