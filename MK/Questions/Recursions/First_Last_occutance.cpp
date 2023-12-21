#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key, int i){
    
    if (n==i){
        return n+1;
    }

    if (arr[i]==key){
        return i;
    }

    return first_occ(arr, n, key, i+1);
}

int last_occ(int arr[], int n, int key, int i){
    
    if (i==n){
        return -1;
    }
    
    int restArr = last_occ(arr, n, key, i+1);
    
    if (restArr!=-1){
        return restArr;
    }
    if (arr[i]==key){
        return i;
    }
    return -1;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    int key;
    cin>>key;
    int t = first_occ(arr, n, key, 0);
    if (t < n){
        cout<<t<<endl;
    }
    else{
        cout<<"Element does not exist in the list"<<endl;
    }
    t = last_occ(arr, n, key, 0);
    if (t == -1){
        cout<<"Element does not exist in the list"<<endl;
    }
    else{
        cout<<t<<endl;
    }

    return 0;
}