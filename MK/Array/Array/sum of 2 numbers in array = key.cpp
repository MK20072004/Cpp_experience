//Brute force method

// #include<iostream>
// using namespace std;

// bool pairsum(int arr[], int n, int k) { 
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n) { 
//             if (arr[i]+arr[j]==k && i!=j) {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false
// }

// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for (int a=0; a<n; a++) {
//         cin>>arr[a]; 
//     }
//     int k;
//     cin>>k;

//     return 0;
// }


//By sorting and then

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int a=0; a<n; a++) {
        cin>>arr[a];
    }
    int k;
    cin>>k;

    int count=1;
    while (count<n) {
        for (int a=0; a<(n-count); a++) {
            if (arr[a]>arr[a+1]) {
                int c= arr[a];
                arr[a]=arr[a+1];
                arr[a+1]=c;
            }
        }
        count++;
    }

    int start= 0;
    int end = n-1;
    bool flag = true;

    while (start<end) {
        if (k < (arr[start]+arr[end])) {
            end--;
        }
        else if (k>(arr[start]+arr[end])) {
            start++;
        }
        else {
            cout<<start<<" "<<end<<endl;
            cout<<"True";
            flag = false;
            break;
        }
    }

    if (flag) {
        cout<<"False";
    }

    return 0;
}