#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    for (int i=0; i<test; i++){
        int cost = 0;
        int c0=0, c1=0;
        string s;
        cin>>s;
        for (int j=0; j<s.size(); j++){
            if (s[j]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }
        if (c0==c1){
            cout<<cost<<endl;
        }
        else if(c0<c1){
            cost = c1-c0;
            for (int j=0; j<cost; j++){
                if (s[((s.size())-1-j)]=='0'){
                    cost++;
                }
            }
            cout<<cost<<endl;
        }
        else{
            cost = c0-c1;
            for (int j=0; j<cost; j++){
                if (s[((s.size())-1-j)]=='1'){
                    cost++;
                }
            }
            cout<<cost<<endl;
        }
    }
}