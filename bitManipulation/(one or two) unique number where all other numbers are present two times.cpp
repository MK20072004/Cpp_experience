#include<iostream>
using namespace std;

int one_unique(int arr[], int num){
    int xorsum=0;
    for (int i=0; i<num; i++){
        xorsum = xorsum^arr[i];                 //xor of one element with itself gives 0 
    }                                           //xor of number with 0 gives same number
    return xorsum;
}

void two_unique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    int index=0;                                //index of bit with one in xor this gives us the position of one unique no. with one and other with zero;
    while(!(xorsum & 1<<index)){
        index++;
    }
    
    int new_xor=0;                              //new_xor with xor of numbers with one in index we find one unique number.
    for (int i=0; i<n; i++){
        if (arr[i] & 1<<index) {
            new_xor= new_xor^arr[i];
        }
    }
    xorsum = xorsum^new_xor;
    cout<<new_xor<<endl;
    cout<<xorsum<<endl;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }

    two_unique(arr, n);


    return 0;
}