#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag=0;   

    for (int a=2; a<=sqrt(n); a++) {
        if (n%a==0) {
            cout<<"Number not prime ";
            flag=1;
            break;
        }
    }
    if (flag==0) {cout<<"Number is prime ";}


    return 0;
}