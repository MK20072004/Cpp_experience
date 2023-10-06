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
    int first=0;
    int last=0;
    int maxsum = INT_MIN;
    for (int i=0; i<n; i++){  //controls the first element of subarray
        for (int j=i; j<n; j++) { //controls the last element of subarray
            int sum = 0;  //the variable which will hold the value of the current subarrays sum
            for (int k=i; k<=j; k++) { //the subarray
                sum += arr[k];
                if (sum>maxsum) {
                    maxsum=sum;
                    first=i;
                    last=j;
                }
            }
        }
    }
    cout<<maxsum<<endl; 
    cout<<first+1<<" "<<last+1<<endl;


    return 0;
}