#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    for (int i=0; i<test; i++){
        string s;
        int a=0,b=0;
        cin>>s;
        for (int j=0; j<(s.size()-1); j++){
            if (s[j+1]!='0'){
                a = stoi(s.substr(0, j+1));
                b = stoi(s.substr(j+1));
                break;
            }
        }
        if (a<b){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}