#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int a=1; a<=3; a++) {
        for (int b=1; b<=n; b++) {
            if (((a+b)%4==0) || (a==2 && b%4==0)) {
                cout<<"* ";
            } else {cout<<"  ";}
        } cout<<endl;
    }


    return 0;
}