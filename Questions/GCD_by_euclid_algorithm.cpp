#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int remainder=n1%n2;
    int divisor=n2;
    while (remainder!=0){
        int temp = remainder;
        remainder = divisor%remainder;
        divisor = temp;
    }
    return divisor;
}

int main(){

    int n1, n2;
    cin>>n1>>n2;
    cout<<gcd(n1, n2)<<endl;

    return 0;
}