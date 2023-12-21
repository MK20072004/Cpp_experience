#include<iostream>
using namespace std;

long long int merge(int arr[], int start, int mid, int end){
    long long int inv = 0;
    int n1 = mid-start+1;
    int n2 = end-mid;
    int soln1[n1];
    int soln2[n2];
    for (int i=0; i<n1; i++){
        soln1[i]=arr[start+i];
    }
    for (int i=0; i<n2; i++){
        soln2[i]=arr[mid+1+i];
    }
    int k=start, j=0, i=0;
    while (i<(n1) && j<n2){
        if (soln1[i]>soln2[j]){
            arr[k] = soln2[j];
            j++;
            k++;
            inv += (n1-i);
        }
        else{
            arr[k] = soln1[i];
            i++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=soln1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=soln2[j];
        j++;
        k++;
    }

    return inv;
}

long long int countInversion(int arr[], int start, int end){
    long long inversions = 0;
    if (start<end){
        int mid= ((end-start)/2)+start;
        inversions += countInversion(arr, start, mid);
        inversions += countInversion(arr, mid+1, end);
        inversions += merge(arr, start, mid, end);
    }

    return inversions;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Number of inversions: "<<countInversion(arr, 0, n)<<endl;

    return 0;
}