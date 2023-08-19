#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }

    for (int a=1; a<n; a++) {
        int current=arr[a];
        int j=a-1;
        while (arr[j]>current && j>=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for (int a=0; a<n; a++) {
        cout<<arr[a]<<"  ";
    }

    return 0;
}