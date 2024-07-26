#include<iostream>
using namespace std;

void subsets(int arr[], int num){
    for (int i=0; i<(1<<num); i++){
        for (int j=0; j<num; j++){
            if (i & 1<<j){
                cout<<arr[j]<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    subsets(arr, n);

    return 0;
}