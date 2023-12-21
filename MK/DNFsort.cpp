#include<iostream>
using namespace std;

void DNFsort(int arr[], int n){
    int mid = 0;
    int low = 0;
    int high = n-1;
    while (high>mid){

        if (arr[mid] == 0){
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    DNFsort(arr, n);
    cout<<"DNF sorted array: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}