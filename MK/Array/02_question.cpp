#include<iostream>
using namespace std;

int main(){

    int n;
    int S;
    cin>>n;
    cin>>S;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }
    int st;
    int ed;
    bool flag = false;
    for (int a=0; a<n-1; a++) { 
    st = arr[a];
    int currentsum = st;
    int b = a+1;
    while (currentsum<S) {
        ed = arr[b];
        currentsum += ed;
        if (currentsum==S) {
            cout<<a+1<<" "<<b+1;
            flag = true;
            break;
        }
        b++;
    }
    if (flag) {break;}
    }

    return 0;
}