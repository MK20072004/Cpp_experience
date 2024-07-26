#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1; a<=(2*n - 1); a++) {cout<<"*";} cout<<endl;
    for (int b=1; b<=(n-1); b++) {
        for (int c=1; c<=(n-b); c++) {cout<<"*";}
        for (int d=1; d<=b; d++) {cout<<" ";}
        for (int e=2; e<=b; e++) {cout<<" ";}
        for (int c=1; c<=(n-b); c++) {cout<<"*";}
        cout<<endl;
    }
    for (int b=(n-1); b>=1; b--) {
        for (int c=1; c<=(n-b); c++) {cout<<"*";}
        for (int d=1; d<=b; d++) {cout<<" ";}
        for (int e=2; e<=b; e++) {cout<<" ";}
        for (int c=1; c<=(n-b); c++) {cout<<"*";}
        cout<<endl;
    }
    for (int a=1; a<=(2*n - 1); a++) {cout<<"*";} cout<<endl;


    return 0;
}