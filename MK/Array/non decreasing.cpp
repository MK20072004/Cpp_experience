#include<iostream>
using namespace std;

void max(int arr[],int n) {
    int maxim=arr[0];
    for (int a=0; a<n; a++) {
        if (maxim<arr[a]) {maxim=arr[a];}
        cout<<maxim<<"  ";
    }
}
//int mx;                           can come in the 25th line instead of the function
//    for (int a=0;a<n; a++) {
//        mx= max(mx,arr[a]);
//        cout<<mx<<" ";
//    }

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }

    max(arr, n);

    return 0;
}