#include<iostream>
#include<climits>
using namespace std;

int kadanes(int arr[], int n) {
    int currentsum=0;
    int maxsum=INT_MIN;
    for (int a=0; a<n; a++){
        currentsum += arr[a];
        maxsum = max(maxsum, currentsum);
        if (currentsum<0) {
            currentsum=0;
        }
    }
    return maxsum;
}

// int circular(int arr[], int n) {
//     int totalsum=0;
//     for(int a=0; a<n; a++) {
//         totalsum += arr[a];
//     }
//     int currentmin=0;
//     int non_contributing_elements= INT_MAX;
//     for (int i=0; i<n; i++) {
//         currentmin += arr[i];
//         non_contributing_elements = min(non_contributing_elements, currentmin);
//         if (currentmin>0) {
//             currentmin=0;
//         }
//     }
//     totalsum = totalsum - non_contributing_elements;

//     return totalsum;
// }

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }

    int nonwrapsum = kadanes(arr, n);
    // int wrapsum = circular(arr,n);
    int totalsum=0;
    for (int i=0; i<n; i++) {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    int wrapsum = totalsum + kadanes(arr,n);

    int maxsum = max (nonwrapsum, wrapsum);

    cout<<maxsum;


    return 0;
}