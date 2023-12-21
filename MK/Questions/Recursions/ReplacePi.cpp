#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void pi(string str){
    if (str.size()==0){
        return;
    }
    if (str.substr(0,2)=="pi"){
        cout<<"3.14";
        pi(str.substr(2, str.size()));
    }
    else{
        cout<<str[0];
        pi(str.substr(1, str.size()));
    }
}

int main(){

    string s;
    getline(cin, s);
    pi(s);

    return 0;
}