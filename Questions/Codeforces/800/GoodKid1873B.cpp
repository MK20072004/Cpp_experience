#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        int index=0;
        for (int j=0; j<n; j++){
            cin>>arr[j];
            if (arr[j]<arr[index]){
                index=j;
            }
        }
        arr[index]++;
        index=1;
        for (int j=0; j<n; j++){
            index *= arr[j];
        }
        cout<<index<<endl;
    }

    return 0;
}