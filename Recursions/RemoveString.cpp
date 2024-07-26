#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void removestring(string s, string str){
    if (str.size()>s.size()){
        return;
    }
    if (s.substr(0, str.size())==str){
        removestring(s.substr(str.size()), str);
    }
    else{
        cout<<s[0];
        removestring(s.substr(1), str);
    }
}

int main(){

    string s;
    getline(cin, s);
    string str;
    getline(cin, str);
    if (str.size()>0){ 
        removestring(s, str);
    }
    else {
        cout<<"Error: Blank input";
    }

    return 0;
}