#include<iostream>
using namespace std;

void Prime_factorization(int num){

    if (num<2){
        cout<<"Please give a positive element greater than 0"<<endl;
        return;
    }

    int spf[num+1]={0};                     //creating smallest prime factor array.
    for (int a=2; a<=num; a++){
        if (spf[a]==0){
            spf[a]=a;
            int b=a*a;
            while (b<=num){ 
                if (spf[b]==0){
                    spf[b]=a;
                    b+=a;
                }
                else{b+=a;}  
            }
        }
    }

    while (num!=1){
        cout<<spf[num]<<" ";
        num/=spf[num];
    }
}

int main(){

    int n;
    cin>>n;

    Prime_factorization(n);

    return 0;
}