#include<iostream>
using namespace std;

void fibenaccisequence(int a) {
    int t1=0;
    int t2=1;
    int nextterm;

    for (int b=1; b<=a; b++) {
        cout<<t1<<" ";
        nextterm= t1 + t2;
        t1=t2;
        t2=nextterm;
    }
}

int main(){

    int n;
    cin>>n;

    fibenaccisequence(n);


    return 0;
}