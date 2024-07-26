#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) { //inputing the array;
        cin>>arr[a];
    }
    int currentsum[n+1];
    currentsum[0]=0;
    for (int a=0; a<n; a++) { //holds cumulative sum;
        currentsum[a+1] = currentsum[a] + arr[a];
    }
    int maxsum = INT_MIN;
    for (int a=1; a<=n; a++) { //first digit of subarray to remove
        int sum=0;
        for (int b=0; b<a; b++) { // last digit of subarray
            sum = currentsum[a]-arr[b];
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum;


    return 0;
}