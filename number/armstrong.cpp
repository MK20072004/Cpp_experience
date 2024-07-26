#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum=0;
    int b=n;

    while (n>0) {
        int a=n%10;
        sum += (a*a*a);
        n = n/10;
    }
    if (sum==b) {cout<<"It is an armstrong number";}
    else {cout<<"It is not an armstrong number";}


    return 0;
}