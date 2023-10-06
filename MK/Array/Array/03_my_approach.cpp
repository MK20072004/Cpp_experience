#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    for (int i=1; i<=n+1; i++) {
        bool flag = true;
        for (int a=0; a<n; a++) {
            if (i==arr[a]) {flag = false;}
        }
        if (flag) {
            cout<<i;
            break;
        }
    }

    return 0;
}