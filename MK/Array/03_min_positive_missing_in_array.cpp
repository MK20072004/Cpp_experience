#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }
    bool check[n+2];
    check[0] = false;
    for (int a=1; a<=n+1; a++) {
        check[a]=true;
    }    
    for (int a=0; a<=n; a++) { //assigning all positive numbers in the range 0 to n, 
        if (arr[a]<n+1 && arr[a]>0) 
        {
            check[arr[a]]=false;
        }
    }
    for (int a=1; a<n+2; a++) {  //printing the first positive integer that is not present in array
        if (check[a]) {
            cout<<a;
            break;
        }
    }

    return 0;
}