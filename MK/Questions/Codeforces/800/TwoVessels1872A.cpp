#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int a, b, c;
        cin>>a>>b>>c;
        if (b<a){
            int d=b;
            b=a;
            a=d;
        }
        int value=0;
        while ((b - a) > 0){
            value++;
            b-=c;
            a+=c;
        }
        cout<<value<<endl;
    }

    return 0;
}