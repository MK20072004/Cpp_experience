#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }
    int arra[99999];
    int mint = 99999;
    for (int a=0; a<99999; a++) {
        arra[a] = -1;
    }
    for (int a=0; a<n; a++) {
        if (arra[arr[a]] != -1) {
            mint = min(mint,arra[arr[a]]);
        }
        else {arra[arr[a]]=a;}
    }
    if (mint==99999) {
        cout<<"No repetative element";
    }
    else {cout<<mint+1;}

    return 0;
}