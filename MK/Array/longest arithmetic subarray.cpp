#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }
    int pcd=arr[1]-arr[0];
    int current=2;
    int ans=2;
    int j=2;
    while (j<n) {
        if (pcd==arr[j]-arr[j-1]) {
            current++;
        }
        else {
            pcd=arr[j]-arr[j-1];
            current=2;}
        ans=max(ans,current);
            j++;
    }
    cout<<ans;

    return 0;
}