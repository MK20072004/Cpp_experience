#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    
    cin.getline(arr, n);
    cin.ignore();

    int maxim= INT_MIN;
    int count=0;

    for (int a=0; a<n; a++){
        if (arr[a]==' '){
            maxim = max(count, maxim);
            count=0;
        }
        else{
            count++;
        }
    }
    maxim = max(count, maxim);
    cout<<maxim;

    return 0;
}