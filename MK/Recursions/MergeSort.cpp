#include<iostream>
using namespace std;

void merge(int arr[], int s, int m, int e){
    int n1=m-s+1;
    int n2=e-m;
    
    int a[n1];                  //temp arrays
    int b[n2];
    
    for (int i=0; i<n1; i++){
        a[i]= arr[s+i];
    }

    for (int i=0; i<n2; i++){
        b[i]= arr[m+i+1];
    }

    int index1=0;
    int index2=0;
    int main_index=s;
    while (index1<n1 && index2<n2){
        if (a[index1]<b[index2]){
            arr[main_index] = a[index1];
            main_index++;
            index1++;
        }
        else{
            arr[main_index]=b[index2];
            main_index++;
            index2++;
        }
    }
    if (index1==n1){
        while(index2<n2){
            arr[main_index]=b[index2];
            main_index++;
            index2++;
        }
    }
    else{
        while(index1<n1){
            arr[main_index]=a[index1];
            main_index++;
            index1++;
        }
    }
}

void MergeSort(int arr[], int start, int end){
    
    if (start<end){
        int mid = start + (end-start)/2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    MergeSort(arr, 0, n-1);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    
    return 0;
}