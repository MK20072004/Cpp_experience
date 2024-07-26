#include<iostream>
using namespace std;

    int setBit(int num, int pos){
        return (num | 1<<pos);
    }

int unique(int arr[], int n){
    int sum;
    int result=0;
    for(int i=0; i<64; i++){
        sum=0;
        for (int j=0; j<n; j++){
            if (arr[j] & 1<<i){
                sum++;
            }
        }
        if (sum%3){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }

    cout<<unique(arr, n)<<endl;

    return 0;
}