#include<iostream>
using namespace std;

int binarysearch(int num[], int n, int key) {
    int s=0;
    int e=n;
    int mid;
    while (e>=s) {
        mid=(s+e)/2;
        if (num[mid]==key) {return mid;}
        else if (num[mid]<key) {s=(mid+1);}
        else {e=(mid-1);}
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int num[n];

    for (int a=0; a<n; a++) {
        cin>>num[a];
    }

    int key;
    cin>>key;

    cout<<binarysearch(num,n,key)<<endl;

    return 0;
}