#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string removeDuplicate(string s){
    if (s.size()==0){
        return "";
    }
    string new_s="";
    for (int i=1; i<s.size(); i++){
        if (s[0]!=s[i]){
            new_s += s[i];
        }
    }
    return s[0] + removeDuplicate(new_s);
}

int main(){

    string s;
    getline(cin, s);
    cout<<removeDuplicate(s)<<endl;

    return 0;
}