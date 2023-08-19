#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }

    int counter=1;
    while (counter<n) {
        for (int a=0; a<(n-counter); a++) {
            if (arr[a]>arr[a+1]) {
                int c=arr[a];
                arr[a]=arr[a+1];
                arr[a+1]=c;
            }
        }
        counter++;
    }

    for (int a=0; a<n; a++) {
        cout<<arr[a]<<"  ";
    }

    return 0;
}