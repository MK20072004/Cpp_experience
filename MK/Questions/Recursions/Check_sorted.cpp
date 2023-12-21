#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    //bool flag;
    // if(arr[n-1] >= arr[n-2]){
    //     flag = true;
    // }
    // else{
    //     flag = false;
    // }
    // return (flag || sorted(arr, n-1));
    return ((arr[0] <= arr[1]) && sorted(arr+1, n-1));
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    cout<<sorted(arr, n)<<endl;

    return 0;
}