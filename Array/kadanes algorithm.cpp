#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    int currentsum=0;
    int maxsum = INT_MIN;
    for (int a=0; a<n; a++) {
        currentsum += arr[a];
        maxsum = max(currentsum, maxsum);
        if (currentsum<0){
            currentsum=0;
        }
    }
    cout<<maxsum;

    return 0;
}