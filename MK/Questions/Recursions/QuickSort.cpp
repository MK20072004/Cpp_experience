#include<iostream>
using namespace std;

int Partition(int arr[], int st, int end){
    int i = st-1;
    for (int k=st; k<=end-1; k++){
        if (arr[k]<arr[end]){
            i++;
            int temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
        }
    }
    i++;
    int temp=arr[end];
    arr[end]=arr[i];
    arr[i]=temp;
    return i;
}

void QuickSort(int arr[], int start, int end){
    if (start<end){ 
        int pivot = Partition(arr, start, end);
        QuickSort(arr, start, pivot-1);
        QuickSort(arr, pivot+1, end);
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    QuickSort(arr, 0, n-1);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}