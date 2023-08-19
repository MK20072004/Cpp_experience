#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1; a<=n; a++) {
        for (int b=1; b<=a; b++) {
            if (b==1 || b==a) {cout<<"* ";}
            else {cout<<"  ";}
        }
        for (int c=1; c<=(2*(n-a)); c++) {cout<<"  ";}
        for (int b=1; b<=a; b++) {
            if (b==1 || b==a) {cout<<"* ";}
            else {cout<<"  ";}
        } cout<<endl;    
    }
    for (int a=n; a>=1; a--) {
        for (int b=1; b<=a; b++) {
            if (b==1 || b==a) {cout<<"* ";}
            else {cout<<"  ";}
        }
        for (int c=1; c<=(2*(n-a)); c++) {cout<<"  ";}
        for (int b=1; b<=a; b++) {
            if (b==1 || b==a) {cout<<"* ";}
            else {cout<<"  ";}
        } cout<<endl;    
    }


    return 0;
}