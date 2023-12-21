#include<iostream>
using namespace std;

void prime_Sieve(int num){
    int Prime[num]={0};
    for (int a=2; a<num; a++){
        if (Prime[a]==0){
            cout<<a<<" ";
            int b = a*a;
            while (b<=num){
                Prime[b]=1;
                b+=a;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;
    prime_Sieve(n);

    return 0;
}