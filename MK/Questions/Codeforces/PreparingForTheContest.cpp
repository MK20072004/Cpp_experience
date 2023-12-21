#include<iostream>
using namespace std;

int main(){

    int test;
    cin>>test;
    for (int i=0; i<test; i++){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int j=0; j<n; j++){
            arr[j] = (n-j);
        }
        for (int j=k; j<n; j++){
            cout<<arr[j]<<" ";
        }
        for (int j=k-1; j>=0; j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }   

    return 0;
}