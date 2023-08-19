#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int num[n];

    for (int a=0; a<n; a++) {
        cin>>num[a];
    }
    int sum=0;

    for (int a=0; a<n; a++) {
        sum += num[a];
    }

    cout<<sum;

    return 0;
}