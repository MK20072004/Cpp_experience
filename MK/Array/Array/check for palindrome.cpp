#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int start=0;
    bool flag= true;
    for (int a=0; a<(n/2); a++){
        if (arr[start]!=arr[n-1-start]){
            flag=false;
            break;
        }
        start++;
    }
    
    if (flag){
        cout<<"Is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }


    return 0;
}