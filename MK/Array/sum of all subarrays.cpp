#include<iostream>
using namespace std;

void sum(int arr[],int n) {
    for (int a=0; a<n; a++) {
        int curr=0;
        for (int b=a; b<n; b++) {
            curr += arr[b];
            cout<<curr<<endl;
        }
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0;a<n;a++) {
        cin>>arr[a];
    }
    sum(arr, n);

    return 0;
}