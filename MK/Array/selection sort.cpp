#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }

    for (int a=0; a<n-1; a++) {
        for (int b=a+1; b<n; b++) {
            if (arr[b]<arr[a]) {
                int c=arr[b];
                arr[b]=arr[a];
                arr[a]=c;
            }
        }
    }

    for (int a=0; a<n; a++) {
        cout<<arr[a]<<"  ";
    }

    return 0;
}